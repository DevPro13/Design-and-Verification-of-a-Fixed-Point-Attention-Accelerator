# Design and Verification of a Fixed-Point Attention Accelerator

flowchart TD
    X["Input Embeddings<br/>X"] --> Q["Query Projection<br/>Q = X × Wq"]
    WQ["Query Weights<br/>Wq"] --> Q

    X --> K["Key Projection<br/>K = X × Wk"]
    WK["Key Weights<br/>Wk"] --> K

    X --> V["Value Projection<br/>V = X × Wv"]
    WV["Value Weights<br/>Wv"] --> V

    Q --> S["Attention Score<br/>S = Q × Kᵀ"]
    K --> S

    S --> SC["Scaling<br/>S = S / √dk"]

    SC --> SM["Softmax<br/>A = softmax(S)"]

    SM --> WS["Weighted Sum<br/>O = A × V"]
    V --> WS

    WS --> O["Contextual Embedding<br/>Output O"]