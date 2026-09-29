# IVERILOG = iverilog
# VVP      = vvp

# BUILD_DIR = verification/build
# TB        = verification/tb.sv

# SRC = \
# 	src/attention_mechanism.sv \
#     src/matrix_multiplication.sv \
#     src/matrix_transpose.sv \
#     src/scaling.sv \
#     src/softmax.sv

# OUT = $(BUILD_DIR)/tb.out
# # Default
# all: compile run

# compile:
# 	mkdir -p $(BUILD_DIR)
# 	$(IVERILOG) -  -o $(OUT) $(SRC) $(TB)

# run:
# 	$(VVP) $(OUT)

# clean:
# 	rm -rf $(BUILD_DIR)

VERILATOR = verilator
BUILD_DIR = verification/build
TB_SV     = verification/tb.sv
TB_CPP    = verification/sim_main.cpp

SRC = \
src/attention_mechanism.sv \
src/memory.sv\
src/matrix_multiplication.sv \
src/matrix_transpose.sv \
src/scaling.sv \
src/softmax.sv\

### The name of your top-level SystemVerilog module (usually matching your testbench or top wrapper)

TOP_MODULE = attention_tb

### Verilator output binary

OUT = obj_dir/V$(TOP_MODULE)

### Default target

all: compile run

compile:
	mkdir -p $(BUILD_DIR)
	$(VERILATOR) --binary -j 4 --trace --top-module $(TOP_MODULE) -Mdir $(BUILD_DIR) $(SRC) $(TB_SV) $(TB_CPP)

run: 
	./$(BUILD_DIR)/V$(TOP_MODULE)

clean:
	rm -rf $(BUILD_DIR)