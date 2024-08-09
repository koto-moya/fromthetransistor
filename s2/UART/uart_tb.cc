#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd.h>
#include <string>
#include <sstream>
#include <bitset>
#include <iostream>

#include "Vuart.h"

std::vector<uint8_t> stringToBinary(const std::string& input){
    std::vector<uint8_t> binaryData;
    std::string bits;
    for (char c : input){
        std::bitset<8> bits(c);
        binaryData.push_back(static_cast<uint8_t>(bits.to_ulong()));
    }
    return binaryData;
}

int sc_main(int argc, char** argv){
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    std::string vcd_file_path;
    std::string userInput;


    std::string userInput;
    std::cout << "enter some text";
    std::getline(std::cin, userInput);
    std::vector<uint8_t> binaryData = stringToBinary(userInput);
    
    // this defines the baud rate
    sc_clock clk_i("clock",1, SC_US, 0.5, 0, SC_US, true)
    
    // opening a buffer for interacting with the UART device
    const std::unique_ptr<Vuart> buffer{new Vuart("buffer")}
    
    buffer->clk_i(clk_i)
    buffer->start_i(0)

    sc_start(0, SC_US);

    VerilatedVcdSc* trace = new VerilatedVcdSc();

    buffer->trace(trace, 99);

    if(vcd_file_path.empty()){
        trace->open("Vuart.vcd");
    } else {
        trace->open(vcd_file_path.c_str());
    }

   for (uint8_t byte : binaryData){
        buffer->start_i(1)
        buffer->data_i(std::bitset<8>(byte))
        buffer->start_i(0)
    }

    return 0;
}