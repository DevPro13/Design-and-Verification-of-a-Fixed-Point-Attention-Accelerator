module matrix_transpose#(
    parameter int row,
    parameter int col
)(
    input logic signed [15:0] matA[0:row-1][0:col-1],
    output logic signed [15:0] matA_tp[0:col-1][0:row-1]
);
always_comb begin
    int i,j;
    for(i=0;i<row;++i)begin
        for(j=0;j<col;++j)begin
            matA_tp[j][i]=matA[i][j];
        end
    end
end
endmodule