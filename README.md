# Design and Verification of a Fixed-Point Attention Accelerator

```mermaid
flowchart TD
    X["Token Embedding X"]
    W["Weight Matrices \n Wq / Wk / Wv"]
   
    Q["Query Vector Q = X × Wq"]
    K["Key Vector K = X × Wk"]
    V["Value Vector V = X × Wv"]

    SCORE["Attention Score = Q × Kᵀ"]
    SCALE["Scaling = Score / √dk"]
    SOFTMAX["Softmax"]
    WEIGHTED["Weighted Sum = Attention × V"]
    OUTPUT["Contextual Embedding Vector"]

    X --> Q
    W --> Q

    X --> K
    W --> K

    X --> V
    W --> V

    Q --> SCORE
    K --> SCORE

    SCORE --> SCALE
    SCALE --> SOFTMAX

    SOFTMAX --> WEIGHTED
    V --> WEIGHTED

    WEIGHTED --> OUTPUT
