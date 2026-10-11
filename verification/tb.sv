// `include "../src/attention_mechanism.sv"
// `include "../src/matrix_multiplication.sv"
// `include "../src/matrix_transpose.sv"
// `include "../src/scaling.sv"
// `include "../src/softmax.sv"
`timescale 1ps/1ps
module attention_tb();

    localparam int TOKENSIZE = 4;
    localparam int EMBEDDING_DIM = 3;
    logic clk,rst,done;
    logic signed [15:0] context_vector[0:TOKENSIZE*EMBEDDING_DIM-1];//contexual vector
    int file;
    attention_mechanism_top#(
        .embedding_dim(EMBEDDING_DIM),
        .tokensize(TOKENSIZE)
    ) dut (clk,rst,done,context_vector);

initial begin
    $dumpfile("verification/build/attention_mechanism.vcd");
    $dumpvars(0, attention_tb);
    end
always @(posedge clk) begin
    $display("TIME=%0t state=%0d",
             $time, dut.state);
end
     // initialize test
initial
    begin
      rst = 1; # 22; rst = 0;
    end

  // generate clock to sequence tests
always
    begin
        clk <= 1; # 22; clk <= 0; # 22;
    end
//check output
always_ff @( negedge clk ) begin : checkOutput
    if(done) begin
        file = $fopen("output/obtained_output_context_vector.txt", "w");
            if (file == 0) $fatal(1, "Unable to open obtained output file");
            for (int i = 0; i < TOKENSIZE; i++) begin
                for (int j = 0; j < EMBEDDING_DIM; j++) begin
                    $fwrite(file, "%.4f", $itor(context_vector[i*EMBEDDING_DIM+j]) / 256.0);
                    if (j == EMBEDDING_DIM-1)
                        $fwrite(file, "\n");
                    else
                        $fwrite(file, " ");
                end
            end
        $fclose(file);
        $finish;
    end
end
endmodule
