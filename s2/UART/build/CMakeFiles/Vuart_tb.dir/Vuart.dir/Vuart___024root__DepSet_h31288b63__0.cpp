// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "verilated.h"

#include "Vuart___024root.h"

void Vuart___024root___combo__TOP__0(Vuart___024root* vlSelf);
void Vuart___024root___sequent__TOP__0(Vuart___024root* vlSelf);
void Vuart___024root___combo__TOP__1(Vuart___024root* vlSelf);

void Vuart___024root___eval(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval\n"); );
    // Body
    Vuart___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->__Vcellinp__uart__clk_i) & 
         (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__uart__clk_i)))) {
        Vuart___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vuart___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__uart__clk_i 
        = vlSelf->__Vcellinp__uart__clk_i;
}

#ifdef VL_DEBUG
void Vuart___024root___eval_debug_assertions(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
