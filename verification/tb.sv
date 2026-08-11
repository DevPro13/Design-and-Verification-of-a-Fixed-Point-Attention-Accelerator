// `include "../src/attention_mechanism.sv"
// `include "../src/matrix_multiplication.sv"
// `include "../src/matrix_transpose.sv"
// `include "../src/scaling.sv"
// `include "../src/softmax.sv"
module attention_tb();
    localparam int TOKENSIZE = 16;
    localparam int EMBEDDING_DIM = 3;

    logic signed [15:0] embedding_X [0:TOKENSIZE-1][0:EMBEDDING_DIM-1];
    logic signed [15:0] Qw [0:EMBEDDING_DIM-1][0:EMBEDDING_DIM-1];
    logic signed [15:0] Kw [0:EMBEDDING_DIM-1][0:EMBEDDING_DIM-1];
    logic signed [15:0] Vw [0:EMBEDDING_DIM-1][0:EMBEDDING_DIM-1];
    logic signed [15:0] contextual_embedding_vector [0:TOKENSIZE-1][0:EMBEDDING_DIM-1];

    attention_accelerator #(
        .embedding_dim(EMBEDDING_DIM),
        .tokensize(TOKENSIZE)
    ) dut (
        .embedding_X(embedding_X),
        .Qw(Qw),
        .Kw(Kw),
        .Vw(Vw),
        .contextual_embedding_vector(contextual_embedding_vector)
    );

    initial begin
        int file;
        real value;

        file = $fopen("inputfiles/token_embedding.txt", "r");
        if (file == 0) $fatal(1, "Unable to open token_embedding.txt");
        for (int i = 0; i < TOKENSIZE; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                if ($fscanf(file, "%f", value) != 1) $fatal(1, "Invalid token_embedding data");
                embedding_X[i][j] = $rtoi(value * 256.0);
            end
        end
        $fclose(file);

        file = $fopen("inputfiles/weight_q.txt", "r");
        if (file == 0) $fatal(1, "Unable to open weight_q.txt");
        for (int i = 0; i < EMBEDDING_DIM; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                if ($fscanf(file, "%f", value) != 1) $fatal(1, "Invalid weight_q data");
                Qw[i][j] = $rtoi(value * 256.0);
            end
        end
        $fclose(file);

        file = $fopen("inputfiles/weight_k.txt", "r");
        if (file == 0) $fatal(1, "Unable to open weight_k.txt");
        for (int i = 0; i < EMBEDDING_DIM; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                if ($fscanf(file, "%f", value) != 1) $fatal(1, "Invalid weight_k data");
                Kw[i][j] = $rtoi(value * 256.0);
            end
        end
        $fclose(file);

        file = $fopen("inputfiles/weight_v.txt", "r");
        if (file == 0) $fatal(1, "Unable to open weight_v.txt");
        for (int i = 0; i < EMBEDDING_DIM; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                if ($fscanf(file, "%f", value) != 1) $fatal(1, "Invalid weight_v data");
                Vw[i][j] = $rtoi(value * 256.0);
            end
        end
        $fclose(file);

        #1;

        file = $fopen("output/obtained_output_context_vector.txt", "w");
        if (file == 0) $fatal(1, "Unable to open obtained output file");
        for (int i = 0; i < TOKENSIZE; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                $fwrite(file, "%.4f", $itor(contextual_embedding_vector[i][j]) / 256.0);
                if (j < EMBEDDING_DIM - 1) $fwrite(file, " ");
            end
            $fwrite(file, "\n");
        end
        $fclose(file);

        $finish;
    end
endmodule
