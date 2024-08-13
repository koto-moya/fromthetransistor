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
    CData/*0:0*/ __Vcellinp__uart__i_rx_serial;
    CData/*0:0*/ uart__DOT__r_rx_data_r;
    CData/*0:0*/ uart__DOT__r_rx_data;
    CData/*7:0*/ uart__DOT__r_Clock_count;
    CData/*2:0*/ uart__DOT__r_bit_index;
    CData/*7:0*/ uart__DOT__r_rx_Byte;
    CData/*0:0*/ uart__DOT__r_rx_DV;
    CData/*2:0*/ uart__DOT__r_SM_Main;
    CData/*0:0*/ uart__DOT____Vtogcov__clk_i;
    CData/*0:0*/ uart__DOT____Vtogcov__i_rx_serial;
    CData/*0:0*/ uart__DOT____Vtogcov__o_rx_DV;
    CData/*7:0*/ uart__DOT____Vtogcov__o_rx_Byte;
    CData/*0:0*/ uart__DOT____Vtogcov__r_rx_data_r;
    CData/*0:0*/ uart__DOT____Vtogcov__r_rx_data;
    CData/*7:0*/ uart__DOT____Vtogcov__r_Clock_count;
    CData/*2:0*/ uart__DOT____Vtogcov__r_bit_index;
    CData/*2:0*/ uart__DOT____Vtogcov__r_SM_Main;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__uart__clk_i;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_in<bool> clk_i;
    sc_in<bool> i_rx_serial;
    sc_out<bool> o_rx_DV;
    sc_out<uint32_t> o_rx_Byte;

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
