#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd.h>
#include <string>
#include <sstream>
#include <bitset>
#include <iostream>

#include "Vuart.h"

std::string stringToBinary(const std::string& input){
    std::string binaryString;
    std::string bits;
    std::string start = "0";
    std::string stop = "1";
    for (char c : input){
        bits = std::bitset<8>(c).to_string();
        bits.insert(0,start);
        bits += stop;
        binaryString += bits + " ";
    }
    return binaryString;
}

int sc_main(int argc, char** argv){
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    std::string vcd_file_path;
    std::string userInput;


    std::string userInput;
    std::cout << "enter some text";
    std::getline(std::cin, userInput);
    std::string binaryOutput = stringToBinary(userInput);
    std::cout << binaryOutput << std::endl;
    
    sc_clock clk_i("clock",1, SC_NS, 0.5, 0, SC_NS, true)


    return 0;
}