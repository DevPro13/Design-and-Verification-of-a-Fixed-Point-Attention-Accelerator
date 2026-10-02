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
    typedef enum logic[2:0] {
        IDLE,FETCH, MULTIPLY, ATTENTION, SCALE, SOFTMAX, OUTPUT
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
    logic signed [15:0] contextual_embedding_vector[0:tokensize-1][embedding_dim-1];

    //MAT A,
    logic signed [15:0] matA[0:tokensize-1][tokensize-1];
    //MAT B,
    logic signed [15:0] matB[0:tokensize-1][tokensize-1];
    //Mat Mult Result
    logic signed [15:0] MatMultResult[0:tokensize-1][tokensize-1];
    /*-------------------------------------*/
    logic [1:0] selectMux3;
    logic [2:0] selectMux5;
    //MUX Unit for input selects
    //Input Line 1 for matrixMultiplication unit
    mux3 #(tokensize,embedding_dim)matInput1(selectMux3,embedding_X,Q_vector,attention_weight_vector,matA);
    //Input Line 2 for matrixMultiplication unit
    mux5 #(tokensize,embedding_dim)matInput2(selectMux5,Qw,Kw,Vw,K_vector_transpose,V_vector,matB);

    //Shared matrix multiply unit
    matrix_multiplication #(
        .Dim(tokensize)
    ) query_vector_calc (
        .matA(matA),
        .matB(matB),
        .result_matrix(MatMultResult)
    );

    //Result Demux
    logic [3:0]demuxSelect5;
    demux5 #(tokensize,embedding_dim) matResultAssign(demuxSelect5,MatMultResult,Q_vector,K_vector,V_vector,attention_score,contextual_embedding_vector);
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
    always @* begin
        if(done) begin
            int i,j;
            for(i=0;i<tokensize;++i) begin: row
                for(j=0;j<embedding_dim;++j)begin: col
                    assign context_vector[i*embedding_dim+j]=contextual_embedding_vector[i][j];
                end
            end
        end
    end
    always_ff @(posedge clk or posedge rst) begin : stateMachineBlock
        if(rst) state<=IDLE;
        else state<=nxtState;
    end
    //sub-cycle signals required for multiple assignments
    logic [1:0] mm_phase;

    always_ff @(posedge clk) begin : stateExecutionBlock
        case(state)
            IDLE: begin
                if(data_ready)begin
                    nxtState<=FETCH;
                    //clear buffers
                    embedding_X<=1'b0;
                    Qw<=1'b0;
                    Kw<=1'b0;
                    Vw<=1'b0;
                    done<=1'b0;
                    matA<=16'sd0;
                    matB<=16'sd0;
                    MatMultResult<=16'sd0;
                    
                end
                else nxtState=IDLE;
            end
            FETCH: begin
                //read inputs from memory buffers and arrange in unpacked array
                nxtState<=MULTIPLY;
                mm_phase<=2'd0;//select matrix multiplication phase
                for(int i=0;i<tokensize;++i) begin: row
                    for(int j=0;j<embedding_dim;++j) begin: col
                        embedding_X[i][j]=X[i*embedding_dim+j];
                    end
                    if(i<embedding_dim) begin: weights
                        for(int j=0;j<embedding_dim;++j)begin: col_wts
                            Qw[i][j]=Wq[i*embedding_dim+j];
                            Kw[i][j]=Wk[i*embedding_dim+j];
                            Vw[i][j]=Wv[i*embedding_dim+j];
                        end
                    end
                end
            end
            MULTIPLY: begin
                nxtState<=ATTENTION;
                //Input Embedding X
                selectMux3<=2'd0;
                case(mm_phase)
                    //Calculating Query Vector
                    2'd0: begin selectMux5 <= 3'd0; demuxSelect5 <= 3'd0; mm_phase <= 2'd1; end
                    //Calculating Key Vector
                    2'd1: begin selectMux5 <= 3'd1; demuxSelect5 <= 3'd1; mm_phase <= 2'd2; end
                    //Calculating Value Vector
                    2'd2: begin selectMux5 <= 3'd2; demuxSelect5 <= 3'd2; mm_phase <= 2'd0; nxtState <= ATTENTION; end
                endcase
            end
            ATTENTION: begin
                   //Calculating Attention Score
                   //Attention=Q_vector*K^T
                   nxtState<=SCALE;
                   //selecting Q_vector
                    selectMux3<=2'd1;
                   //selecting K^T
                   selectMux5<=3'd3;
                   //result select for scaling
                    demuxSelect5<=3'd3;

            end
            SCALE: begin
                //Scaing Attention Score
                nxtState<=SOFTMAX;
                // //result select for scaling
                // demuxSelect5<=3'd3;
            end
            SOFTMAX: begin
                //Applying Softmax
                nxtState<=OUTPUT;
            end
            OUTPUT: begin
                //Calculating weighted sum of values vector-->contextual embedding vector
                //attention_weight_vector*V_vector
               //Input Embedding X
                selectMux3<=2'd2;
                //Calculating Value Vector
                selectMux5<=3'd4;
                //Result 
                demuxSelect5<=3'd4;
                //next state
                nxtState<=IDLE;
                done<=1'b1;
            end
        endcase
    end
endmodule