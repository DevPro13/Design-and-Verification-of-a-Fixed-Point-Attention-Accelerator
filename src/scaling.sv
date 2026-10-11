module scaling#(parameter int tokensize,localparam int scale_factor=148)(
    input logic signed [15:0] inputVector[0:tokensize-1][0:tokensize-1],
    output logic signed [15:0] scaledVector[0:tokensize-1][0:tokensize-1]
);
logic signed [31:0] accumulator;
always_comb begin 
    accumulator=32'sd0;
    for(int i=0;i<tokensize;++i) begin
        for(int j=0;j<tokensize;++j)begin
        accumulator = inputVector[i][j] * scale_factor;//$rtoi($itor(score) / $sqrt($itor(vector_dim)));
        scaledVector[i][j]=accumulator[23:8];//ignored 8 LSB bits fractional part... we can shift it by 8 bit as well
        end
    end
    end
endmodule