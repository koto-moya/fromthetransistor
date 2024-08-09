// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VblinkLED.h for the primary calling header

#include "verilated.h"

#include "VblinkLED__Syms.h"
#include "VblinkLED___024root.h"

void VblinkLED___024root___ctor_var_reset(VblinkLED___024root* vlSelf);

VblinkLED___024root::VblinkLED___024root(VblinkLED__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , clk_i("clk_i")
    , LED("LED")
    , vlSymsp{symsp}
 {
    // Reset structure values
    VblinkLED___024root___ctor_var_reset(this);
}

void VblinkLED___024root___configure_coverage(VblinkLED___024root* vlSelf, bool first);

void VblinkLED___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VblinkLED___024root___configure_coverage(this, first);
}

VblinkLED___024root::~VblinkLED___024root() {
}

// Coverage
void VblinkLED___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
