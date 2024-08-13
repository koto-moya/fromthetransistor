// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "verilated.h"

#include "Vuart___024root.h"

VL_ATTR_COLD void Vuart___024root___initial__TOP__0(Vuart___024root* vlSelf);

VL_ATTR_COLD void Vuart___024root___eval_initial(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_initial\n"); );
    // Body
    Vuart___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->__Vcellinp__uart__i_rx_serial = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__uart__clk_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__r_rx_data_r = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__r_rx_data = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__r_Clock_count = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT__r_bit_index = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT__r_rx_Byte = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT__r_rx_DV = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__r_SM_Main = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__i_rx_serial = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__o_rx_DV = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__o_rx_Byte = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT____Vtogcov__r_rx_data_r = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__r_rx_data = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__r_Clock_count = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT____Vtogcov__r_bit_index = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT____Vtogcov__r_SM_Main = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
