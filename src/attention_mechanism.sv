module attention_mechanism #(
    parameter int DATA_WIDTH = 16
)
    (
       input logic [3:0]Q,//Query Vector
       input logic [3:0]K,//Key Vector
       input logic [3:0]V,//Values Vector
       output logic []attention_weights,
       input V,
);