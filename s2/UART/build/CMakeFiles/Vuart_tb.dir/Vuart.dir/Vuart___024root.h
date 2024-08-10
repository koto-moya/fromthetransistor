// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart.h for the primary calling header

#ifndef VERILATED_VUART___024ROOT_H_
#define VERILATED_VUART___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "verilated_cov.h"

class Vuart__Syms;
VL_MODULE(Vuart___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__uart__clk_i;
    CData/*0:0*/ __Vcellout__uart__tx_o;
    CData/*0:0*/ __Vcellinp__uart__start_i;
    CData/*3:0*/ uart__DOT__bit_count;
    CData/*0:0*/ uart__DOT____Vtogcov__clk_i;
    CData/*0:0*/ uart__DOT____Vtogcov__start_i;
    CData/*0:0*/ uart__DOT____Vtogcov__tx_o;
    CData/*3:0*/ uart__DOT____Vtogcov__bit_count;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__uart__clk_i;
    IData/*31:0*/ __Vcellout__uart__temp;
    IData/*31:0*/ __Vcellinp__uart__data_i;
    IData/*31:0*/ uart__DOT____Vtogcov__data_i;
    IData/*31:0*/ uart__DOT____Vtogcov__temp;
    QData/*33:0*/ uart__DOT__shift;
    QData/*33:0*/ uart__DOT____Vtogcov__shift;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    sc_in<bool> clk_i;
    sc_in<bool> start_i;
    sc_out<bool> tx_o;
    sc_in<uint32_t> data_i;
    sc_out<uint32_t> temp;

    // INTERNAL VARIABLES
    Vuart__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart___024root(Vuart__Syms* symsp, const char* name);
    ~Vuart___024root();
    VL_UNCOPYABLE(Vuart___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
