#include "Vhello.h"  // Include the generated Verilator header
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);  // Initialize Verilator
    Vhello* top = new Vhello;           // Create an instance of the module

    // Simulate for a few clock cycles (if needed)
    for (int i = 0; i < 10; i++) {
        top->eval();  // Evaluate the model
    }

    delete top;  // Clean up
    return 0;    // Exit successfully
}