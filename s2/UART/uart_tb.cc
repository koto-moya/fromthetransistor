#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd_sc.h>
#include <string>
#include <sstream>
#include <bitset>
#include <iostream>

#include "Vuart.h"

std::vector<uint8_t> stringToBinary(const std::string& input){
    std::vector<uint8_t> binaryData;
    for (char c : input){
        std::bitset<8> bits(c);
        binaryData.push_back(static_cast<uint8_t>(bits.to_ulong()));
    }
    return binaryData;
}

int sc_main(int argc, char** argv){
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);


    // Gathering input text
    std::string vcd_file_path;
    std::string userInput;
    std::cout << "enter some text: ";
    std::getline(std::cin, userInput);
    std::vector<uint8_t> binaryData = stringToBinary(userInput);
    
    // intializing the clock
    sc_clock clk_i("clock",1, SC_US, 0.5, 0, SC_US, true);

    // define input signals
    sc_signal<bool> i_rx_serial;

    // define output signals
    sc_signal<uint8_t> o_rx_Byte;

    // start the sim
   
    // opening a buffer for interacting with the UART device
    const std::unique_ptr<Vuart> buffer{new Vuart("buffer")};

    buffer->clk_i(clk_i);
    buffer->i_rx_serial(i_rx_serial);
    buffer->o_rx_Byte(o_rx_Byte);

    std::cout << "Vhello start!" << std::endl;

    sc_start(0, SC_NS);

    VerilatedVcdSc* trace = new VerilatedVcdSc();
    buffer->trace(trace, 99);
    
    if(vcd_file_path.empty()){
        trace->open("Vuart.vcd");
    } else {
        trace->open(vcd_file_path.c_str());
    }

    sc_start(1, SC_NS);
    sc_start(1, SC_NS);


    buffer->final();

    //flush and close the trace obj

    trace->flush();
    trace->close();

    // delete the trace
    delete trace;

    std::cout << "sim over" << std::endl;
    return 0;
}