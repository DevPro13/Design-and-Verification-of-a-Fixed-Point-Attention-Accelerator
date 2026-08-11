IVERILOG = iverilog
VVP      = vvp

BUILD_DIR = verification/build
TB        = verification/tb.sv

SRC = \
	src/attention_mechanism.sv \
    src/matrix_multiplication.sv \
    src/matrix_transpose.sv \
    src/scaling.sv \
    src/softmax.sv

OUT = $(BUILD_DIR)/tb.out

all: compile run

compile:
	mkdir -p $(BUILD_DIR)
	$(IVERILOG) -g2012 -o $(OUT) $(SRC) $(TB)

run:
	$(VVP) $(OUT)

clean:
	rm -rf $(BUILD_DIR)