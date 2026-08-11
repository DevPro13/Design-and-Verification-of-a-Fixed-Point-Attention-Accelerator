`include "attention_mechanism.sv"
module attention_tb();
    localparam int TOKENSIZE = 16;
    localparam int EMBEDDING_DIM = 3;

    logic signed [15:0] embedding_X [0:TOKENSIZE-1][0:EMBEDDING_DIM-1];
    logic signed [15:0] Qw [0:EMBEDDING_DIM-1][0:EMBEDDING_DIM-1];
    logic signed [15:0] Kw [0:EMBEDDING_DIM-1][0:EMBEDDING_DIM-1];
    logic signed [15:0] Vw [0:EMBEDDING_DIM-1][0:EMBEDDING_DIM-1];
    logic signed [15:0] contextual_embedding_vector [0:TOKENSIZE-1][0:EMBEDDING_DIM-1];

    real expected_context_vector [0:TOKENSIZE-1][0:EMBEDDING_DIM-1] = '{
        '{0.0188, 0.3559, 0.1240},
        '{0.0181, 0.3553, 0.1226},
        '{0.0176, 0.3533, 0.1209},
        '{0.0183, 0.3559, 0.1231},
        '{0.0173, 0.3538, 0.1205},
        '{0.0174, 0.3531, 0.1204},
        '{0.0177, 0.3529, 0.1209},
        '{0.0180, 0.3558, 0.1225},
        '{0.0180, 0.3550, 0.1223},
        '{0.0174, 0.3534, 0.1206},
        '{0.0181, 0.3556, 0.1227},
        '{0.0179, 0.3554, 0.1222},
        '{0.0176, 0.3534, 0.1210},
        '{0.0185, 0.3550, 0.1231},
        '{0.0185, 0.3560, 0.1236},
        '{0.0179, 0.3540, 0.1217}
    };

    logic signed [15:0] expected_context_vector_q8_8 [0:TOKENSIZE-1][0:EMBEDDING_DIM-1];

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
        load_tokensize_by_embedding_dim_matrix(
            "../inputfiles/token_embedding.txt",
            embedding_X
        );
        load_embedding_dim_by_embedding_dim_matrix(
            "../inputfiles/weight_q.txt",
            Qw
        );
        load_embedding_dim_by_embedding_dim_matrix(
            "../inputfiles/weight_k.txt",
            Kw
        );
        load_embedding_dim_by_embedding_dim_matrix(
            "../inputfiles/weight_v.txt",
            Vw
        );

        for (int i = 0; i < TOKENSIZE; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                expected_context_vector_q8_8[i][j] = $rtoi(expected_context_vector[i][j] * 256.0);
            end
        end

        #1;
        store_contextual_embedding_vector(
            "../output/obtained_output_context_vector.txt",
            contextual_embedding_vector
        );

        $finish;
    end

    task automatic load_tokensize_by_embedding_dim_matrix(
        input string file_name,
        output logic signed [15:0] matrix [0:TOKENSIZE-1][0:EMBEDDING_DIM-1]
    );
        int file;
        real value;

        file = $fopen(file_name, "r");
        if (file == 0) begin
            $fatal(1, "Unable to open %s", file_name);
        end

        for (int i = 0; i < TOKENSIZE; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                if ($fscanf(file, "%f", value) != 1) begin
                    $fatal(1, "Invalid data in %s at row %0d col %0d", file_name, i, j);
                end
                matrix[i][j] = $rtoi(value * 256.0);
            end
        end

        $fclose(file);
    endtask

    task automatic load_embedding_dim_by_embedding_dim_matrix(
        input string file_name,
        output logic signed [15:0] matrix [0:EMBEDDING_DIM-1][0:EMBEDDING_DIM-1]
    );
        int file;
        real value;

        file = $fopen(file_name, "r");
        if (file == 0) begin
            $fatal(1, "Unable to open %s", file_name);
        end

        for (int i = 0; i < EMBEDDING_DIM; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                if ($fscanf(file, "%f", value) != 1) begin
                    $fatal(1, "Invalid data in %s at row %0d col %0d", file_name, i, j);
                end
                matrix[i][j] = $rtoi(value * 256.0);
            end
        end

        $fclose(file);
    endtask

    task automatic store_contextual_embedding_vector(
        input string file_name,
        input logic signed [15:0] matrix [0:TOKENSIZE-1][0:EMBEDDING_DIM-1]
    );
        int file;

        file = $fopen(file_name, "w");
        if (file == 0) begin
            $fatal(1, "Unable to open %s", file_name);
        end

        for (int i = 0; i < TOKENSIZE; i++) begin
            for (int j = 0; j < EMBEDDING_DIM; j++) begin
                $fwrite(file, "%.4f", $itor(matrix[i][j]) / 256.0);
                if (j < EMBEDDING_DIM - 1) begin
                    $fwrite(file, " ");
                end
            end
            $fwrite(file, "\n");
        end

        $fclose(file);
    endtask

endmodule
