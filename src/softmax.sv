module softmax#(
    parameter int M,
    parameter int N
)(
    input logic signed [15:0] vector[0:M-1][0:N-1],
    output logic signed [15:0] attention_weight_vector[0:M-1][0:N-1]
);
int i,j;
real x_real;
real exp_values [0:M-1][0:N-1];
real exp_sum;
always @* begin
    for(i=0;i<M;++i)begin
        exp_sum = 0.0;
        for(j=0;j<N;++j)begin
            //converting Q8:8 to real using $itor()
            x_real = $itor(vector[i][j]) / 256.0;
            // exp(x)
            exp_values[i][j] = $exp(x_real);
            exp_sum=exp_sum+exp_values[i][j];
        end
        //Normalizing each rows
        for(j=0;j<N;++j) begin
            //re-converting real to Q8:8 using $rtoi()
            attention_weight_vector[i][j]=$rtoi((exp_values[i][j] / exp_sum) * 256.0);
        end

    end
end
endmodule