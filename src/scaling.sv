module vector_scaling(
    input int vector_dim,
    input logic signed [15:0] score,
    output logic signed [15:0] scaled_score
);
always @* begin
 scaled_score = $rtoi($itor(score) / $sqrt($itor(vector_dim)));
end
endmodule