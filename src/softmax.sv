module softmax#(
    parameter int M,
    parameter int N
)(
    input logic signed [15:0] vector[0:M-1][0:N-1],
    output logic signed [15:0] attention_weight_vector[0:M-1][0:N-1]
);
integer i,j;
integer address;
integer magnitude;
integer max_value;
integer difference;
logic [31:0] exp_sum;
logic [31:0] numerator;
logic signed [15:0] exp_values[0:M-1][0:N-1];

// real x_real;
// real exp_values [0:M-1][0:N-1];
// real exp_sum;

/*---------------LUT-------------------------------------------------------------------*/
logic [15:0] TABLE [0:75] = '{
        /*step=0.1, start 0 and end -7.5*/
        /*Only numbers till -7.5 was used for Q8:8 due to its limited precision.
        In Q8.8, the LUT output rounds to zero at approximately \(x=-6.24\) and below,
        */
        16'h0100, 16'h00E8, 16'h00D2, 16'h00BE, 16'h00AC, 16'h009B, 16'h008C, 16'h007F, 
        16'h0073, 16'h0068, 16'h005E, 16'h0055, 16'h004D, 16'h0046, 16'h003F, 16'h0039, 
        16'h0034, 16'h002F, 16'h002A, 16'h0026, 16'h0023, 16'h001F, 16'h001C, 16'h001A, 
        16'h0017, 16'h0015, 16'h0013, 16'h0011, 16'h0010, 16'h000E, 16'h000D, 16'h000C, 
        16'h000A, 16'h0009, 16'h0009, 16'h0008, 16'h0007, 16'h0006, 16'h0006, 16'h0005, 
        16'h0005, 16'h0004, 16'h0004, 16'h0003, 16'h0003, 16'h0003, 16'h0003, 16'h0002, 
        16'h0002, 16'h0002, 16'h0002, 16'h0002, 16'h0001, 16'h0001, 16'h0001, 16'h0001, 
        16'h0001, 16'h0001, 16'h0001, 16'h0001, 16'h0001, 16'h0001, 16'h0001, 16'h0000, 
        16'h0000, 16'h0000, 16'h0000, 16'h0000, 16'h0000, 16'h0000, 16'h0000, 16'h0000, 
        16'h0000, 16'h0000, 16'h0000, 16'h0000
    };
/*---------------LUT-------------------------------------------------------------------*/
always_comb begin
        max_value = 0;
        difference = 0;
        magnitude = 0;
        address = 0;
        exp_sum = 0;
        numerator = 0;
        for (i = 0; i < M; i = i + 1) begin

            // Finding maximum score in current row
            max_value = 32'(vector[i][0]);
            for (j = 1; j < N; j = j + 1) begin
                if (32'(vector[i][j]) > max_value)
                    max_value = 32'(vector[i][j]);
            end
            exp_sum = 0;

            // Calculating exps using the LOOK UP TABLE
            for (j = 0; j < N; j = j + 1) begin
                difference = 32'(vector[i][j]) - max_value;
                //getting absolute difference
                if (difference < 0)
                    magnitude = -difference;
                else
                    magnitude = difference;

                // Q8.8 raw difference / 256 = real difference.
                // LUT step is 0.1, so address = magnitude * 10 / 256.
                //128 is added to round result to the nearest integer
                address = (magnitude * 10 + 128) / 256;

                // Clamp to range 0..75
                if (address > 75)
                    address = 75;

                exp_values[i][j] = TABLE[address];
                exp_sum = exp_sum + 32'(TABLE[address]);
            end

            // Normalize into Q8.8 attention weights
            for (j = 0; j < N; j = j + 1) begin
                numerator = exp_values[i][j] * 32'd256;

                if (exp_sum != 0) 
                    attention_weight_vector[i][j] = 16'(numerator / exp_sum);
                else 
                    attention_weight_vector[i][j] = 16'sd0;
            end
        end
    end
endmodule