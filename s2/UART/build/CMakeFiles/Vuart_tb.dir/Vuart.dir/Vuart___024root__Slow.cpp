// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "verilated.h"

#include "Vuart__Syms.h"
#include "Vuart___024root.h"

void Vuart___024root___ctor_var_reset(Vuart___024root* vlSelf);

Vuart___024root::Vuart___024root(Vuart__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , clk_i("clk_i")
    , start_i("start_i")
    , tx_o("tx_o")
    , data_i("data_i")
    , temp("temp")
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vuart___024root___ctor_var_reset(this);
}

void Vuart___024root___configure_coverage(Vuart___024root* vlSelf, bool first);

void Vuart___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vuart___024root___configure_coverage(this, first);
}

Vuart___024root::~Vuart___024root() {
}

// Coverage
void Vuart___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
