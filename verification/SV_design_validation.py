import numpy as np

WEIGHTED_SUM_FROM_PYTHON = "../output/output_context_vector.txt"
WEIGHTED_SUM_FROM_SV_DESIGN = "../output/obtained_output_context_vector.txt"

python_output = np.loadtxt(WEIGHTED_SUM_FROM_PYTHON)
sv_output = np.loadtxt(WEIGHTED_SUM_FROM_SV_DESIGN)

if python_output.shape != sv_output.shape:
    raise ValueError(f"Shape mismatch: Python={python_output.shape}, SV={sv_output.shape}")

error = sv_output - python_output
absolute_error = np.abs(error)

mae = np.mean(absolute_error)
max_error = np.max(absolute_error)
mse = np.mean(error ** 2)
rmse = np.sqrt(mse)

print(f"MAE                  : {mae:.8f}")
print(f"Maximum absolute err : {max_error:.8f}")
print(f"MSE                  : {mse:.8f}")
print(f"RMSE                 : {rmse:.8f}")

np.savetxt("error.txt", error, fmt="%.8f")
np.savetxt("absolute_error.txt", absolute_error, fmt="%.8f")