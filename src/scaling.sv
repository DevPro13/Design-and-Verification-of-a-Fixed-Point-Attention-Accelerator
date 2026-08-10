module vector_scaling(
    input logic int vector_dim,
    input logic signed [15:0] score,
    output logic signed [15:0] scaled_score
);
always_comb begin
 scaled_score<=score/sqrt(vector_dim);
end
endmodule