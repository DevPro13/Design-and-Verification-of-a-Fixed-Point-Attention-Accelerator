# Design and Verification of a Fixed-Point Attention Accelerator
## Overview

This project implements a hardware accelerator for the self-attention mechanism using **SystemVerilog** and **fixed-point arithmetic**.

The objective is to translate the mathematical operations of self-attention into synthesizable RTL and verify the hardware implementation against a Python reference mathematical model.

## Architecture

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

```
## Attention Pipeline

The accelerator implements the following pipeline:

Token Embedding → Q/K/V vectors → Attention Score → Scaling → Softmax → Attention Weight → Comtextual Embedding Vector as Output

The mathematical formulation is:

Q = X × Wq

K = X × Wk

V = X × Wv
Where,
* X --> Token Embedding of M*N dimention
* Wq,Wk,Wv--> Weight matrices or learning matrices of N*N dimention

Attention Score = Q × Kᵀ

Scaled Score = Score / √dk

Attention probabilities = Softmax(Scaled Score)

Contextual Embedding(Weighted Sum) = Attention probabilities × V


## Architecture

```mermaid
              Token Embedding X
                      │
          ┌───────────┼───────────┐
          ▼           ▼           ▼
        X × Wq      X × Wk      X × Wv
          │           │           │
          ▼           ▼           ▼
          Q           K           V
           \          /
            \        /
             ▼      ▼
             Q × Kᵀ
                │
                ▼
             Scaling
                │
                ▼
             Softmax
                │
                ▼
           Attention weight × V
                │
                ▼
          Output Embedding
