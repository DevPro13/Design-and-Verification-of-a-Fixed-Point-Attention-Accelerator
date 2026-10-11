`timescale 1ps/1ps
module mux3#(
    parameter int tokensize,
    parameter int embedding_dim
)(  input logic clk,rst,
    input logic [1:0] select3,
    input logic signed [15:0] X[0:tokensize-1][0:embedding_dim-1],
    input logic signed [15:0] Q_vector[0:tokensize-1][0:embedding_dim-1],
    input logic signed [15:0] Attention_wt[0:tokensize-1][0:tokensize-1],
    output logic signed [15:0] MatSelectA[0:tokensize-1][0:tokensize-1]//taking max dimention to support all matrices
);
always_ff @(posedge clk or posedge rst) begin : mux3Block
    if(rst) MatSelectA <= '{default: '0};
    else begin
        // The shared multiplier is square (tokensize x tokensize); clear the
        // unused padding before loading narrower embedding-dimension operands.
        MatSelectA <= '{default: '0};
        case(select3)
            2'd0: begin
                for (int i = 0; i < tokensize; i++)
                    for (int j = 0; j < embedding_dim; j++)
                        MatSelectA[i][j] <= X[i][j];
            end
            2'd1: begin
                for (int i = 0; i < tokensize; i++)
                    for (int j = 0; j < embedding_dim; j++)
                        MatSelectA[i][j] <= Q_vector[i][j];
            end
            2'd2:begin
                for (int i = 0; i < tokensize; i++)
                    for (int j = 0; j < tokensize; j++)
                        MatSelectA[i][j] <= Attention_wt[i][j];
            end
            default: ;
        endcase
    end
end
endmodule

module mux5#(
    parameter int tokensize,
    parameter int embedding_dim
)(  input logic clk,rst,
    input logic [2:0] select5,
    input logic signed [15:0] wq[0:embedding_dim-1][0:embedding_dim-1],
    input logic signed [15:0] wk[0:embedding_dim-1][0:embedding_dim-1],
    input logic signed [15:0] wv[0:embedding_dim-1][0:embedding_dim-1],
    input logic signed [15:0] K_Transpose[0:embedding_dim-1][0:tokensize-1],
    input logic signed [15:0] V_vector[0:tokensize-1][0:embedding_dim-1],
    output logic signed [15:0] MatSelectB[0:tokensize-1][0:tokensize-1]
);
always_ff @(posedge clk or posedge rst) begin: mux5Block
    if(rst)MatSelectB <= '{default: '0};
    else begin
        MatSelectB <= '{default: '0};
        case(select5)
            3'd0: begin
                for (int i = 0; i < embedding_dim; i++)
                    for (int j = 0; j < embedding_dim; j++)
                        MatSelectB[i][j] <= wq[i][j];
            end
            3'd1: begin
                for (int i = 0; i < embedding_dim; i++)
                    for (int j = 0; j < embedding_dim; j++)
                        MatSelectB[i][j] <= wk[i][j];
            end
            3'd2:begin
                for (int i = 0; i < embedding_dim; i++)
                    for (int j = 0; j < embedding_dim; j++)
                        MatSelectB[i][j] <= wv[i][j];
            end
            3'd3:begin
                for (int i = 0; i < embedding_dim; i++)
                    for (int j = 0; j < tokensize; j++)
                        MatSelectB[i][j] <= K_Transpose[i][j];
            end
            3'd4:begin
                for (int i = 0; i < tokensize; i++)
                    for (int j = 0; j < embedding_dim; j++)
                        MatSelectB[i][j] <= V_vector[i][j];
            end
            default: ;
        endcase
    end
end
endmodule

module demux5#(
    parameter int tokensize,
    parameter int embedding_dim
)(  input logic clk,rst,
    input logic [2:0] d_select5,
    input logic signed [15:0] MatResult[0:tokensize-1][0:tokensize-1],
    output logic signed [15:0]Q_vector[0:tokensize-1][0:embedding_dim-1],
    output logic signed [15:0]K_vector[0:tokensize-1][0:embedding_dim-1],
    output logic signed [15:0]V_vector[0:tokensize-1][0:embedding_dim-1],
    output logic signed [15:0]attention_score[0:tokensize-1][0:tokensize-1],
    output logic signed [15:0] contextual_embedding_vector[0:tokensize-1][0:embedding_dim-1]
);
always_ff @(posedge clk or posedge rst) begin: resultSelectBlock
    if(rst)begin
        Q_vector <= '{default: '0};
        K_vector <= '{default: '0};
        V_vector <= '{default: '0};
        attention_score <= '{default: '0};
        contextual_embedding_vector <= '{default: '0};
    end
    else begin
        case(d_select5)
        3'd0: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    Q_vector[i][j] <= MatResult[i][j];
        end
        3'd1: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    K_vector[i][j] <= MatResult[i][j];
        end
        3'd2: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    V_vector[i][j] <= MatResult[i][j];
        end
        3'd3: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < tokensize; j++)
                    attention_score[i][j] <= MatResult[i][j];
        end
        3'd4: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    contextual_embedding_vector[i][j] <= MatResult[i][j];
        end
        default: ;
    endcase
    end
end
endmodule
