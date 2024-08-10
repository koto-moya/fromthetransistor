// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "verilated.h"

#include "Vuart___024root.h"

VL_ATTR_COLD void Vuart___024root___eval_initial(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____Vcellinp__uart__clk_i 
        = vlSelf->__Vcellinp__uart__clk_i;
}

VL_ATTR_COLD void Vuart___024root___settle__TOP__0(Vuart___024root* vlSelf);

VL_ATTR_COLD void Vuart___024root___eval_settle(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_settle\n"); );
    // Body
    Vuart___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vuart___024root___final(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___final\n"); );
}

VL_ATTR_COLD void Vuart___024root___ctor_var_reset(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellout__uart__temp = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__uart__tx_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__uart__data_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__uart__start_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__uart__clk_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__shift = VL_RAND_RESET_Q(34);
    vlSelf->uart__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->uart__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__start_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__data_i = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT____Vtogcov__tx_o = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__temp = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT____Vtogcov__shift = VL_RAND_RESET_Q(34);
    vlSelf->uart__DOT____Vtogcov__bit_count = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
