// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VblinkLED.h for the primary calling header

#ifndef VERILATED_VBLINKLED___024ROOT_H_
#define VERILATED_VBLINKLED___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "verilated_cov.h"

class VblinkLED__Syms;
VL_MODULE(VblinkLED___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__blinkLED__clk_i;
    CData/*0:0*/ blinkLED__DOT__data;
    CData/*0:0*/ blinkLED__DOT____Vtogcov__clk_i;
    CData/*0:0*/ blinkLED__DOT____Vtogcov__LED;
    CData/*0:0*/ blinkLED__DOT____Vtogcov__data;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__blinkLED__clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__blinkLED__clk_i;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__blinkLED__clk_i;
    sc_in<bool> clk_i;
    sc_out<bool> LED;

    // INTERNAL VARIABLES
    VblinkLED__Syms* const vlSymsp;

    // CONSTRUCTORS
    VblinkLED___024root(VblinkLED__Syms* symsp, const char* name);
    ~VblinkLED___024root();
    VL_UNCOPYABLE(VblinkLED___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
