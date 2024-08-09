// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VblinkLED__Syms.h"
#include "VblinkLED.h"
#include "VblinkLED___024root.h"

// FUNCTIONS
VblinkLED__Syms::~VblinkLED__Syms()
{
}

VblinkLED__Syms::VblinkLED__Syms(VerilatedContext* contextp, const char* namep,VblinkLED* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
