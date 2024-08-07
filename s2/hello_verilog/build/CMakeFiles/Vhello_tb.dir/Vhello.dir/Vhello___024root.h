// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello.h for the primary calling header

#ifndef VERILATED_VHELLO___024ROOT_H_
#define VERILATED_VHELLO___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "verilated_cov.h"

class Vhello__Syms;
VL_MODULE(Vhello___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__hello__reset_n_i;
    CData/*0:0*/ __Vcellinp__hello__clk_i;
    CData/*0:0*/ hello__DOT____Vtogcov__clk_i;
    CData/*0:0*/ hello__DOT____Vtogcov__reset_n_i;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__hello__reset_n_i;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__hello__clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__hello__reset_n_i;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__hello__reset_n_i;
    IData/*31:0*/ __Vcellinp__hello__data_i;
    IData/*31:0*/ hello__DOT__data;
    IData/*31:0*/ hello__DOT____Vtogcov__data_i;
    IData/*31:0*/ hello__DOT____Vtogcov__data_o;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_in<bool> clk_i;
    sc_in<bool> reset_n_i;
    sc_in<uint32_t> data_i;
    sc_out<uint32_t> data_o;

    // INTERNAL VARIABLES
    Vhello__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello___024root(Vhello__Syms* symsp, const char* name);
    ~Vhello___024root();
    VL_UNCOPYABLE(Vhello___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
