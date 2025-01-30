# Variables
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --build -Wall
VERILOG_SOURCE = hello.v
CPP_TESTBENCH = hello_tb.cpp
SIM_EXECUTABLE = obj_dir/Vhello

# Compile Verilog and testbench into an executable
compile: $(SIM_EXECUTABLE)

# Generate C++ code and compile into an executable
$(SIM_EXECUTABLE): $(VERILOG_SOURCE) $(CPP_TESTBENCH)
	@echo "Compiling Verilog and testbench..."
	@$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCE) $(CPP_TESTBENCH)

# Run the simulation
run: $(SIM_EXECUTABLE)
	@echo "Running simulation..."
	@./$(SIM_EXECUTABLE)

# Clean up generated files
clean:
	@echo "Cleaning up..."
	@rm -rf obj_dir

# Phony targets
.PHONY: compile run clean