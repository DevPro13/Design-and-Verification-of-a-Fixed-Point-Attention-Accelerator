`include "matrix_multiplication.sv"
`include "matrix_transpose.sv"
`include "scaling.sv"
`include "softmax.sv"
module attention_accelerator#(
    parameter int embedding_dim,
    parameter int  tokensize
)(
       input logic signed [15:0] embedding_X [0:tokensize-1][0:embedding_dim-1],//embedding matrix
       input logic signed [15:0] Qw[0:embedding_dim-1][0:embedding_dim-1],//query weight matrix
       input logic signed [15:0] Kw[0:embedding_dim-1][0:embedding_dim-1],//key weight matrix
       input logic signed [15:0] Vw[0:embedding_dim-1][0:embedding_dim-1],//value weight matrix
       output logic signed [15:0] contextual_embedding_vector[0:tokensize-1][0:embedding_dim-1]//contexual vector after attention calculation
);
    logic signed [15:0]Q_vector[0:tokensize-1][0:embedding_dim-1];
    logic signed [15:0]K_vector[0:tokensize-1][0:embedding_dim-1];
    logic signed [15:0]K_vector_transpose[0:embedding_dim-1][0:tokensize-1];
    logic signed [15:0]V_vector[0:tokensize-1][0:embedding_dim-1];
    logic signed [15:0]attention_score[0:tokensize-1][0:tokensize-1];
    logic signed [15:0]scaled_attention_score[0:tokensize-1][0:tokensize-1];
    logic signed [15:0]attention_weight_vector[0:tokensize-1][0:tokensize-1];

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

    matrix_transpose #(
        .row(tokensize),
        .col(embedding_dim)
    ) key_transpose_calc (
        .matA(K_vector),
        .matA_tp(K_vector_transpose)
    );

    //Calculating Attention Score
    matrix_multiplication #(
        .M1(tokensize),
        .N(embedding_dim),
        .N2(tokensize)
    ) attention_score_calc (
        .matA(Q_vector),
        .matB(K_vector_transpose),
        .result_matrix(attention_score)
    );

    //Scaing Attention Score
    genvar row_idx, col_idx;
    generate
        for (row_idx = 0; row_idx < tokensize; row_idx++) begin : scale_rows
            for (col_idx = 0; col_idx < tokensize; col_idx++) begin : scale_cols
                vector_scaling scale_score (
                    .vector_dim(embedding_dim),
                    .score(attention_score[row_idx][col_idx]),
                    .scaled_score(scaled_attention_score[row_idx][col_idx])
                );
            end
        end
    endgenerate

    //Applying Softmax
    softmax #(
        .M(tokensize),
        .N(tokensize)
    ) softmax_calc (
        .vector(scaled_attention_score),
        .attention_weight_vector(attention_weight_vector)
    );

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
endmodule
