# Design and Verification of a Fixed-Point Attention Accelerator

```text
flowchart TD
    X["Input Embedding X"]
    WQ["Query Weight Matrix Wq"]
    WK["Key Weight Matrix Wk"]
    WV["Value Weight Matrix Wv"]

    Q["Query Vector Q = X × Wq"]
    K["Key Vector K = X × Wk"]
    V["Value Vector V = X × Wv"]

    SCORE["Attention Score = Q × Kᵀ"]
    SCALE["Scaling = Score / √dk"]
    SOFTMAX["Softmax"]
    WEIGHTED["Weighted Sum = Attention × V"]
    OUTPUT["Contextual Embedding Vector"]

    X --> Q
    WQ --> Q

    X --> K
    WK --> K

    X --> V
    WV --> V

    Q --> SCORE
    K --> SCORE

    SCORE --> SCALE
    SCALE --> SOFTMAX

    SOFTMAX --> WEIGHTED
    V --> WEIGHTED

    WEIGHTED --> OUTPUT