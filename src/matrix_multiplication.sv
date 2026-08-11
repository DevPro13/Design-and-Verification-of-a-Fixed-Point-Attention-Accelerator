module matrix_multiplication#(
    parameter int M1 , 
    parameter int N,//common dimention M1xN and NxN2
    parameter int N2
    )(
    input logic signed [15:0]matA [0:M1-1][0:N-1],
    input logic signed [15:0]matB [0:N-1][0:N2-1],
    output logic signed [15:0]result_matrix [0:M1-1][0:N2-1]
    );
logic signed [31:0] accumulator;//to store matrix mult and sum result
 int i,j,k;
always_comb begin
    for(i=0;i<M1;++i)begin
        for(j=0;j<N2;++j)begin
            accumulator=32'sd0;
            for(k=0;k<N;++k) begin
                accumulator+=matA[i][k]*matB[k][j];
            end
            result_matrix[i][j]=accumulator >>> 8;//convert Q16.16 result back to Q8.8
        end
    end
end
endmodule
