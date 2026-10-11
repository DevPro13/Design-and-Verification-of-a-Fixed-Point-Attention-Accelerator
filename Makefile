VERILATOR = verilator

BUILD_DIR = verification/build
TB_SV     = verification/tb.sv
TB_CPP    = verification/sim_main.cpp

SRC = \
src/attention_mechanism.sv \
src/memory.sv \
src/matrixSelect.sv \
src/matrix_multiplication.sv \
src/matrix_transpose.sv \
src/scaling.sv \
src/softmax.sv

TOP_MODULE = attention_tb

OUT = $(BUILD_DIR)/V$(TOP_MODULE)

all: compile run

compile:
	mkdir -p $(BUILD_DIR)
	$(VERILATOR) --binary -j 4 --trace \
		--top-module $(TOP_MODULE) \
		-Mdir $(BUILD_DIR) \
		$(SRC) $(TB_SV)

run:
	./$(OUT)

clean:
	rm -rf $(BUILD_DIR)