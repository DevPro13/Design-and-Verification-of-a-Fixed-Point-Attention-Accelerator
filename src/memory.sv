module loadMem#(
    parameter int embedding_dim,
    parameter int  tokensize
)(
    input logic clk,rst,
    output logic signed [15:0] embedding_X [0:tokensize*embedding_dim-1],//embedding matrix
    output logic signed [15:0] Qw[0:embedding_dim*embedding_dim-1],//query weight matrix
    output logic signed [15:0] Kw[0:embedding_dim*embedding_dim-1],//key weight matrix
    output logic signed [15:0] Vw[0:embedding_dim*embedding_dim-1],//value weight matrix 
    output logic data_ready,
);
    logic signed [15:0] X[0:tokensize*embedding_dim-1],//embedding matrix
    logic signed [15:0] wq[0:embedding_dim*embedding_dim-1],//query weight matrix
    logic signed [15:0] wk[0:embedding_dim*embedding_dim-1],//key weight matrix
    logic signed [15:0] wv[0:embedding_dim*embedding_dim-1],//value weight matrix 
initial begin
    $readmemh("inputfiles/token_embedding_hex.txt",X);
    $readmemh("inputfiles/weight_q_hex.txt",wq);
    $readmemh("inputfiles/weight_k_hex.txt",wk);
    $readmemh("inputfiles/weight_v_hex.txt",wv);
end
assign embedding_X=X;
assign Qw=wq;
assign Qk=wk;
assign Qv=wv;

always_ff @(posedge clk or posedge rst) begin : loadMem
    if(rst) 
        data_ready<=1'b0;
    else 
        data_ready<=1'b1;
end
endmodule