module matrix_mul #(parameter WIDTH_A, parameter WIDTH_B)(
    input signed [WIDTH_A:0]matA,
    input signed [WIDTH_B:0]matB,
    output signed []
    )
