// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VblinkLED.h for the primary calling header

#include "verilated.h"

#include "VblinkLED___024root.h"

VL_ATTR_COLD void VblinkLED___024root___eval_initial(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__blinkLED__clk_i 
        = vlSelf->__VinpClk__TOP____Vcellinp__blinkLED__clk_i;
}

VL_ATTR_COLD void VblinkLED___024root___settle__TOP__0(VblinkLED___024root* vlSelf);

VL_ATTR_COLD void VblinkLED___024root___eval_settle(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___eval_settle\n"); );
    // Body
    VblinkLED___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VblinkLED___024root___final(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___final\n"); );
}

VL_ATTR_COLD void VblinkLED___024root___ctor_var_reset(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__blinkLED__clk_i = VL_RAND_RESET_I(1);
    vlSelf->blinkLED__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->blinkLED__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->blinkLED__DOT____Vtogcov__LED = VL_RAND_RESET_I(1);
    vlSelf->blinkLED__DOT____Vtogcov__data = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP____Vcellinp__blinkLED__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP____Vcellinp__blinkLED__clk_i = VL_RAND_RESET_I(1);
}
