// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VblinkLED.h for the primary calling header

#include "verilated.h"

#include "VblinkLED__Syms.h"
#include "VblinkLED___024root.h"

VL_INLINE_OPT void VblinkLED___024root___combo__TOP__0(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___combo__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->__Vcellinp__blinkLED__clk_i) 
         ^ (IData)(vlSelf->blinkLED__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->blinkLED__DOT____Vtogcov__clk_i = vlSelf->__Vcellinp__blinkLED__clk_i;
    }
}

VL_INLINE_OPT void VblinkLED___024root___sequent__TOP__0(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[3]);
    vlSelf->blinkLED__DOT__data = vlSelf->__Vcellinp__blinkLED__clk_i;
    VL_ASSIGN_SII(1,vlSelf->LED, vlSelf->blinkLED__DOT__data);
    if (((IData)(vlSelf->blinkLED__DOT__data) ^ (IData)(vlSelf->blinkLED__DOT____Vtogcov__LED))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->blinkLED__DOT____Vtogcov__LED = vlSelf->blinkLED__DOT__data;
    }
    if (((IData)(vlSelf->blinkLED__DOT__data) ^ (IData)(vlSelf->blinkLED__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->blinkLED__DOT____Vtogcov__data = vlSelf->blinkLED__DOT__data;
    }
}
