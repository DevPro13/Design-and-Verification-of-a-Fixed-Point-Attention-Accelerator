module mux3#(
    parameter int tokensize,
    parameter int embedding_dim
)(
    input logic [1:0] selectLines,
    input logic signed [15:0] X[0:tokensize-1][0:embedding_dim-1],
    input logic signed [15:0] Q_vector[0:tokensize-1][0:embedding_dim-1],
    input logic signed [15:0] Attention_wt[tokensize-1][tokensize-1],
    output logic signed [15:0] MatSelectA[tokensize-1][tokensize-1]//taking max dimention to support all matrices
);
always_comb begin : mux3Block
    MatSelectA = '{default: '0};
    case(selectLines)
        2'd0: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    MatSelectA[i][j] = X[i][j];
        end
        2'd1: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    MatSelectA[i][j] = Q_vector[i][j];
        end
        2'd2:begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < tokensize; j++)
                    MatSelectA[i][j] = Attention_wt[i][j];
        end
        default: ;
end
endmodule

module mux5#(
    parameter int tokensize,
    parameter int embedding_dim
)(
    input logic [1:0] selectLines,
    input logic signed [15:0] wq[0:embedding_dim-1][0:embedding_dim-1],
    input logic signed [15:0] wk[0:embedding_dim-1][0:embedding_dim-1],
    input logic signed [15:0] wv[0:embedding_dim-1][0:embedding_dim-1],
    input logic signed [15:0] K_Transpose[0:embedding_dim-1][0:tokensize-1],
    input logic signed [15:0] V_vector[tokensize-1][embedding_dim-1],
    output logic signed [15:0] MatSelectB[tokensize-1][tokensize-1]
);
always_comb begin : mux5Block
    MatSelectB = '{default: '0};
    case(selectLines)
        3'd0: begin
            for (int i = 0; i < embedding_dim; i++)
                for (int j = 0; j < embedding_dim; j++)
                    MatSelectB[i][j] = wq[i][j];
        end
        3'd1: begin
            for (int i = 0; i < embedding_dim; i++)
                for (int j = 0; j < embedding_dim; j++)
                    MatSelectB[i][j] = wK[i][j];
        end
        3'd2:begin
            for (int i = 0; i < embedding_dim; i++)
                for (int j = 0; j < embedding_dim; j++)
                    MatSelectB[i][j] = wv[i][j];
        end
        2'd3:begin
            for (int i = 0; i < embedding_dim; i++)
                for (int j = 0; j < tokensize; j++)
                    MatSelectB[i][j] = K_Transpose[i][j];
        end
        3'd4:begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    MatSelectB[i][j] = V_vector[i][j];
        end
        default: ;
end
endmodule

module demux5#(
    parameter int tokensize,
    parameter int embedding_dim
)(
    input logic [2:0] selectLines,
    input logic signed [15:0] MatResult[tokensize-1][tokensize-1],
    output logic signed [15:0]Q_vector[0:tokensize-1][0:embedding_dim-1],
    output logic signed [15:0]K_vector[0:tokensize-1][0:embedding_dim-1],
    output logic signed [15:0]V_vector[0:tokensize-1][0:embedding_dim-1],
    output logic signed [15:0]attention_score[0:tokensize-1][0:tokensize-1],
    output logic signed [15:0] contextual_embedding_vector[0:tokensize-1][embedding_dim-1];
    always_comb begin : resultSelectBlock
        case(selectLines)
        3'd0: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    Q_vector[i][j] = MatResult[i][j];
        end
        3'd1: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    K_vector[i][j] = MatResult[i][j];
        end
        3'd2: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    V_vector[i][j] = MatResult[i][j];
        end
        3'd3: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < tokensize; j++)
                    attention_score[i][j] = MatResult[i][j];
        end
        3'd4: begin
            for (int i = 0; i < tokensize; i++)
                for (int j = 0; j < embedding_dim; j++)
                    contextual_embedding_vector[i][j] = MatResult[i][j];
        end
        default: ;
    end
);

