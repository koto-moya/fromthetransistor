// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VblinkLED.h for the primary calling header

#include "verilated.h"

#include "VblinkLED___024root.h"

VL_INLINE_OPT void VblinkLED___024root___combo__TOP__1(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__blinkLED__clk_i, vlSelf->clk_i);
}

void VblinkLED___024root___combo__TOP__0(VblinkLED___024root* vlSelf);
void VblinkLED___024root___sequent__TOP__0(VblinkLED___024root* vlSelf);

void VblinkLED___024root___eval(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___eval\n"); );
    // Body
    VblinkLED___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->__VinpClk__TOP____Vcellinp__blinkLED__clk_i) 
         ^ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__blinkLED__clk_i))) {
        VblinkLED___024root___sequent__TOP__0(vlSelf);
    }
    VblinkLED___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__blinkLED__clk_i 
        = vlSelf->__VinpClk__TOP____Vcellinp__blinkLED__clk_i;
    vlSelf->__VinpClk__TOP____Vcellinp__blinkLED__clk_i 
        = vlSelf->__Vcellinp__blinkLED__clk_i;
}

QData VblinkLED___024root___change_request_1(VblinkLED___024root* vlSelf);

VL_INLINE_OPT QData VblinkLED___024root___change_request(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___change_request\n"); );
    // Body
    return (VblinkLED___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VblinkLED___024root___change_request_1(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->__Vcellinp__blinkLED__clk_i ^ vlSelf->__Vchglast__TOP____Vcellinp__blinkLED__clk_i));
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__blinkLED__clk_i ^ vlSelf->__Vchglast__TOP____Vcellinp__blinkLED__clk_i))) VL_DBG_MSGF("        CHANGE: blinkLED.v:5: __Vcellinp__blinkLED__clk_i\n"); );
    // Final
    vlSelf->__Vchglast__TOP____Vcellinp__blinkLED__clk_i 
        = vlSelf->__Vcellinp__blinkLED__clk_i;
    return __req;
}

#ifdef VL_DEBUG
void VblinkLED___024root___eval_debug_assertions(VblinkLED___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
