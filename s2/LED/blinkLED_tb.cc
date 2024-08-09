#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd_sc.h>

#include "VblinkLED.h"

#include <iostream>


int sc_main(int argc, char** argv){
    // pass in the args to the Verilated class and turn the trace on
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // file path for the vcd file
    std::string vcd_file_path;

    // init the ports
    // init the clock
    sc_clock clk_i("clock", 1, SC_NS, 0.5, 0, SC_NS, true);

    // Init the inputs

    // Init the outputs
    sc_signal<bool> LED;

    // Create the buffer by using a smart pointer

    const std::unique_ptr<VblinkLED> buffer{new VblinkLED{"buffer"}};

    buffer->clk_i(clk_i);
    buffer->LED(LED);

    std::cout << "start the sim" << std::endl;

    // start the sim clock
    sc_start(0, SC_NS);


    // init the trace.  vcd files record the signal values in the sim.  VerilatedVcdSc allows for creating VCD files and writes to them
    VerilatedVcdSc* trace = new VerilatedVcdSc();

    // give the trace to the buffer
    buffer->trace(trace, 99);

    // create the vcd file
    if(vcd_file_path.empty()){
        trace->open("VblinkLED_tb.vcd");
    } else {
        trace->open(vcd_file_path.c_str());
    }

    // write the test bench
    sc_start(1, SC_NS);
    sc_start(1, SC_NS);
    sc_start(1, SC_NS);
    // finalize the buffer
    buffer->final();

    //flush and close the trace obj

    trace->flush();
    trace->close();

    // delete the trace
    delete trace;

    std::cout << "sim over" << std::endl;
    return 0;

}