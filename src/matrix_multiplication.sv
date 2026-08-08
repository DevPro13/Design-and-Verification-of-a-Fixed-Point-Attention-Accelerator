module matrix_mul_weighted_embedding_vector #(
    parameter int embedding_dim 4, 
    parameter int token_size 18
    )(
    input logic signed [15:0]matA [0:token_size-1][0:embedding_dim-1],
    input logic signed [15:0]matB [0:embedding_dim-1][0:embedding_dim-1],
    output logic signed [15:0]weighted_embedding_vector [0:token_size-1][0:embedding_dim-1]
    );

always_comb begin
    int i,j,k;
    
end
endmodule

// module matrix_mul_attention_score #(
//     parameter int embedding_dim, 
//     parameter int token_size
//     )(
//     input logic signed [15:0]matA [0:M-1][0:N-1],
//     input logic signed [15:0]matB [0:M-1][0:N-1],
//     input logic signed [15:0]attention_score_vector [0:M-1][0:M-1]
//     );

// always_comb begin
    
// end
// endmodule

// module matrix_mul_weighted_sum_vector #(
//     parameter int embedding_dim, 
//     parameter int token_size
//     )(
//     input logic signed [15:0]WeightedScoreVector [0:M-1][0:N-1],
//     input logic signed [15:0]V [0:M-1][0:N-1],
//     input logic signed [15:0]contextual_embedding_vector [0:M-1][0:M-1]
//     );

// always_comb begin
    
// end
// endmodule
