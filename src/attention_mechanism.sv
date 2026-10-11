`timescale 1ps/1ps
module attention_mechanism_top#(
    parameter int embedding_dim,
    parameter int  tokensize,
    localparam logic signed[15:0] scale_factor =16'sd148//0.577*256;
)(     input logic clk, rst,
       output logic done,
       output logic signed [15:0] context_vector[0:tokensize*embedding_dim-1]//contexual vector
);  
    logic data_ready;
    logic signed [15:0] X[0:tokensize*embedding_dim-1];//embedding matrix
    logic signed [15:0] Wq[0:embedding_dim*embedding_dim-1];//query weight matrix
    logic signed [15:0] Wk[0:embedding_dim*embedding_dim-1];//key weight matrix
    logic signed [15:0] Wv[0:embedding_dim*embedding_dim-1];//value weight matrix

    loadMem#(embedding_dim,tokensize)loadInputs(clk,rst,X,Wq,Wk,Wv,data_ready);

    /*Control FSM Signals*/
    typedef enum logic[3:0] {
        IDLE,FETCH,
        Q_CALC, Q_WRITE,
        K_CALC, K_WRITE,
        V_CALC, V_WRITE,
        ATTENTION_CALC, ATTENTION_WRITE,
        CONTEXT_CALC, CONTEXT_WRITE,
        FINISH
    } controlFsm;
    controlFsm state,nxtState;
    /*Unpacked Buffers*/
    logic signed [15:0] embedding_X [0:tokensize-1][0:embedding_dim-1];//embedding matrix
    logic signed [15:0] Qw[0:embedding_dim-1][0:embedding_dim-1];//query weight matrix
    logic signed [15:0] Kw[0:embedding_dim-1][0:embedding_dim-1];//key weight matrix
    logic signed [15:0] Vw[0:embedding_dim-1][0:embedding_dim-1];//value weight matrix
    /*Unpacked Vector Buffers*/
    logic signed [15:0]Q_vector[0:tokensize-1][0:embedding_dim-1];
    logic signed [15:0]K_vector[0:tokensize-1][0:embedding_dim-1];
    logic signed [15:0]K_vector_transpose[0:embedding_dim-1][0:tokensize-1];
    logic signed [15:0]V_vector[0:tokensize-1][0:embedding_dim-1];
    /*Unpacked Result Buffers*/
    logic signed [15:0]attention_score[0:tokensize-1][0:tokensize-1];
    logic signed [15:0]scaled_attention_score[0:tokensize-1][0:tokensize-1];
    logic signed [15:0]attention_weight_vector[0:tokensize-1][0:tokensize-1];
    /*Coltext vector result in unpacked array*/
    logic signed [15:0] contextual_embedding_vector[0:tokensize-1][0:embedding_dim-1];

    //MAT A,
    logic signed [15:0] matA[0:tokensize-1][0:tokensize-1];
    //MAT B,
    logic signed [15:0] matB[0:tokensize-1][0:tokensize-1];
    //Mat Mult Result
    logic signed [15:0] MatMultResult[0:tokensize-1][0:tokensize-1];
    /*-------------------------------------*/
    logic [1:0] selectMux3;
    logic [2:0] selectMux5;
    //MUX Unit for input selects
    //Input Line 1 for matrixMultiplication unit
    mux3 #(tokensize,embedding_dim)matInput1(clk,rst,selectMux3,embedding_X,Q_vector,attention_weight_vector,matA);
    //Input Line 2 for matrixMultiplication unit
    mux5 #(tokensize,embedding_dim)matInput2(clk,rst,selectMux5,Qw,Kw,Vw,K_vector_transpose,V_vector,matB);
    //Shared matrix multiply unit
    matrix_multiplication #(
        .Dim(tokensize)
    ) vec_mult_calc (
        .matA(matA),
        .matB(matB),
        .result_matrix(MatMultResult)
    );

    //Result Demux
    logic [2:0]demuxSelect5;
    logic signed [15:0] decoderInput[0:tokensize-1][0:tokensize-1];
    demux5 #(tokensize,embedding_dim) matResultAssign(clk,rst,demuxSelect5,decoderInput,Q_vector,K_vector,V_vector,attention_score,contextual_embedding_vector);
    //transpose matrix
    matrix_transpose #(tokensize,embedding_dim) key_transpose_calc (K_vector,K_vector_transpose);

    //Scaing Attention Score
    scaling #(.tokensize(tokensize)) scale_attention_score (
                    .inputVector(attention_score),
                    .scaledVector(scaled_attention_score)
    );
     //Applying Softmax
    softmax #(.M(tokensize),.N(tokensize)) softmax_calc (.vector(scaled_attention_score),.attention_weight_vector(attention_weight_vector));
    //Unpacked Output result to packed array
    always_comb begin : resultConversionBlock
            int i,j;
            for(i=0;i<tokensize;++i) begin: row
                for(j=0;j<embedding_dim;++j)begin: col
                    context_vector[i*embedding_dim+j]=contextual_embedding_vector[i][j];
                end
            end
    end

    always_comb begin : inputConversionBlock
        for (int i = 0; i < tokensize; i++)
            for (int j = 0; j < embedding_dim; j++)
                embedding_X[i][j] = X[i*embedding_dim+j];

        for (int i = 0; i < embedding_dim; i++)
            for (int j = 0; j < embedding_dim; j++) begin
                Qw[i][j] = Wq[i*embedding_dim+j];
                Kw[i][j] = Wk[i*embedding_dim+j];
                Vw[i][j] = Wv[i*embedding_dim+j];
            end
    end

    always_ff @(posedge clk or posedge rst) begin : stateMachineBlock
        if (rst)
            state <= IDLE;
        else
            state <= nxtState;
    end

    // The demux is registered, so each matrix operation has a setup cycle to
    // load its operands into the registered muxes and a write cycle to capture
    // the resulting matrix.  done is asserted only after the context register
    // has been written.
    always_comb begin : stateExecutionBlock
        nxtState    = state;
        selectMux3  = 2'd0;
        selectMux5  = 3'd0;
        demuxSelect5 = 3'd7; // Invalid select: do not write any result buffer.
        done        = 1'b0;

        case (state)
            IDLE: begin
                if (data_ready)
                    nxtState = FETCH;
            end
            FETCH: nxtState=Q_CALC;
            Q_CALC: begin
                selectMux3 = 2'd0;
                selectMux5 = 3'd0;
                nxtState   = Q_WRITE;
            end
            Q_WRITE: begin
                selectMux3   = 2'd0;
                selectMux5   = 3'd0;
                demuxSelect5 = 3'd0;
                nxtState     = K_CALC;
            end

            K_CALC: begin
                selectMux3 = 2'd0;
                selectMux5 = 3'd1;
                nxtState   = K_WRITE;
            end
            K_WRITE: begin
                selectMux3   = 2'd0;
                selectMux5   = 3'd1;
                demuxSelect5 = 3'd1;
                nxtState     = V_CALC;
            end
            V_CALC: begin
                selectMux3 = 2'd0;
                selectMux5 = 3'd2;
                nxtState   = V_WRITE;
            end
            V_WRITE: begin
                selectMux3   = 2'd0;
                selectMux5   = 3'd2;
                demuxSelect5 = 3'd2;
                nxtState     = ATTENTION_CALC;
            end
            ATTENTION_CALC: begin
                selectMux3 = 2'd1;
                selectMux5 = 3'd3;
                nxtState   = ATTENTION_WRITE;
            end
            ATTENTION_WRITE: begin
                selectMux3   = 2'd1;
                selectMux5   = 3'd3;
                demuxSelect5 = 3'd3;
                nxtState     = CONTEXT_CALC;
            end

            CONTEXT_CALC: begin
                selectMux3 = 2'd2;
                selectMux5 = 3'd4;
                nxtState   = CONTEXT_WRITE;
            end
            CONTEXT_WRITE: begin
                selectMux3   = 2'd2;
                selectMux5   = 3'd4;
                demuxSelect5 = 3'd4;
                nxtState     = FINISH;
            end

            FINISH: begin
                done     = 1'b1;
                nxtState = IDLE;
            end
            default: nxtState = IDLE;
        endcase
    end

    always_comb begin
        decoderInput = MatMultResult;
    end
endmodule