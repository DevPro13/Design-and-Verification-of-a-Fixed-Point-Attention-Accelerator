module matrix_multiplication#(
    parameter int Dim
    )(
    input logic signed [15:0]matA [0:Dim-1][0:Dim-1],
    input logic signed [15:0]matB [0:Dim-1][0:Dim-1],
    output logic signed [15:0]result_matrix [0:Dim-1][0:Dim-1]
    );
logic signed [31:0] accumulator;//to store matrix mult and sum result
 int i,j,k;
always_comb begin
    for(i=0;i<Dim;++i)begin
        for(j=0;j<Dim;++j)begin
            accumulator=32'sd0;
            for(k=0;k<Dim;++k) begin
                accumulator+=matA[i][k]*matB[k][j];
            end
            result_matrix[i][j]=accumulator >>> 8;//ignoring 8 LSB bits fractional part
        end
    end
end
endmodule
