// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello___024root.h"

void Vhello___024root___ctor_var_reset(Vhello___024root* vlSelf);

Vhello___024root::Vhello___024root(Vhello__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , clk_i("clk_i")
    , reset_n_i("reset_n_i")
    , data_i("data_i")
    , data_o("data_o")
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhello___024root___ctor_var_reset(this);
}

void Vhello___024root___configure_coverage(Vhello___024root* vlSelf, bool first);

void Vhello___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vhello___024root___configure_coverage(this, first);
}

Vhello___024root::~Vhello___024root() {
}

// Coverage
void Vhello___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
