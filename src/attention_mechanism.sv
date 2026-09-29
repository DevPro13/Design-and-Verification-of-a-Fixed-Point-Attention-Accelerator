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

    loadMem#(embedding_dim,tokensize)loadInputs(clk,rst,embedding_X,Wq,Wk,Wv,data_ready);

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

    //transpose matrix
    matrix_transpose #(tokensize,embedding_dim) key_transpose_calc (K_vector,K_vector_transpose);
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
                end
                else nxtState=IDLE;
            end
            FETCH: begin
                //read inputs from memory buffers and arrange in unpacked array
                nxtStage<=MULTIPLY;
                for(int i=0;i<tokensize;++i) begin: row
                    for(int j=0;j<embedding_dim;++j) begin: col
                        embedding_X[i][j]=X[i*embedding_dim+j];
                    end
                    if(i<embedding_dim) begin: weights
                        for(int j=0;j<embedding_dim;++j)begin: col_wts
                            Qw[i][j]=wq[i*embedding_dim+j];
                            Kw[i][j]=wk[i*embedding_dim+j];
                            Vw[i][j]=wv[i*embedding_dim+j];
                        end
                    end
                end
            end
            MULTIPLY: begin
                nxtState<=ATTENTION;
                //Calculating Query Vector
                matrix_multiplication #(
                    .M1(tokensize),
                    .N(embedding_dim),
                    .N2(embedding_dim)
                ) query_vector_calc (
                    .matA(embedding_X),
                    .matB(Qw),
                    .result_matrix(Q_vector)
                );
                //Calculating Key Vector
                matrix_multiplication #(
                    .M1(tokensize),
                    .N(embedding_dim),
                    .N2(embedding_dim)
                ) key_vector_calc (
                    .matA(embedding_X),
                    .matB(Kw),
                    .result_matrix(K_vector)
                );
                //Calculating Value Vector
                matrix_multiplication #(
                    .M1(tokensize),
                    .N(embedding_dim),
                    .N2(embedding_dim)
                ) value_vector_calc (
                    .matA(embedding_X),
                    .matB(Vw),
                    .result_matrix(V_vector)
                );
            end
            ATTENTION: begin
                   //Calculating Attention Score
                   nxtState<=SCALE;
                    matrix_multiplication #(
                        .M1(tokensize),
                        .N(embedding_dim),
                        .N2(tokensize)
                    ) attention_score_calc (
                        .matA(Q_vector),
                        .matB(K_vector_transpose),
                        .result_matrix(attention_score)
                    );
                
            end
            SCALE: begin
                //Scaing Attention Score
                nxtState<=SOFTMAX;
                genvar row_idx, col_idx;
                generate
                    for (row_idx = 0; row_idx < tokensize; row_idx++) begin : scale_rows
                        for (col_idx = 0; col_idx < tokensize; col_idx++) begin : scale_cols
                            vector_scaling scale_score (
                                .scale_factor(scale_factor),
                                .score(attention_score[row_idx][col_idx]),
                                .scaled_score(scaled_attention_score[row_idx][col_idx])
                            );
                        end
                    end
                endgenerate
            end
            SOFTMAX: begin
                //Applying Softmax
                nxtState<=OUTPUT;
                softmax #(
                    .M(tokensize),
                    .N(tokensize)
                ) softmax_calc (
                    .vector(scaled_attention_score),
                    .attention_weight_vector(attention_weight_vector)
                );
                
            end
            OUTPUT: begin
                //Calculating weighted sum of values vector-->contextual embedding vector
                matrix_multiplication #(
                    .M1(tokensize),
                    .N(tokensize),
                    .N2(embedding_dim)
                ) contextual_embedding_calc (
                    .matA(attention_weight_vector),
                    .matB(V_vector),
                    .result_matrix(contextual_embedding_vector)
                );
                nxtState<=IDLE;
            end
    end
endmodule


