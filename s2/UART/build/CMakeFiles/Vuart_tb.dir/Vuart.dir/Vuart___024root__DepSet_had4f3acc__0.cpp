// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "verilated.h"

#include "Vuart__Syms.h"
#include "Vuart___024root.h"

VL_INLINE_OPT void Vuart___024root___combo__TOP__0(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___combo__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__uart__clk_i, vlSelf->clk_i);
    if (((IData)(vlSelf->__Vcellinp__uart__clk_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->uart__DOT____Vtogcov__clk_i = vlSelf->__Vcellinp__uart__clk_i;
    }
}

VL_INLINE_OPT void Vuart___024root___sequent__TOP__0(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___sequent__TOP__0\n"); );
    // Init
    QData/*33:0*/ __Vdly__uart__DOT__shift;
    CData/*3:0*/ __Vdly__uart__DOT__bit_count;
    // Body
    __Vdly__uart__DOT__bit_count = vlSelf->uart__DOT__bit_count;
    __Vdly__uart__DOT__shift = vlSelf->uart__DOT__shift;
    ++(vlSymsp->__Vcoverage[108]);
    if (vlSelf->__Vcellinp__uart__start_i) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->__Vcellout__uart__temp = vlSelf->__Vcellinp__uart__data_i;
        __Vdly__uart__DOT__shift = (0x200000000ULL 
                                    | ((QData)((IData)(vlSelf->__Vcellinp__uart__data_i)) 
                                       << 1U));
        __Vdly__uart__DOT__bit_count = 0U;
    } else if ((0xaU > (IData)(vlSelf->uart__DOT__bit_count))) {
        __Vdly__uart__DOT__bit_count = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelf->uart__DOT__bit_count)));
        vlSelf->__Vcellout__uart__tx_o = (1U & (IData)(vlSelf->uart__DOT__shift));
        __Vdly__uart__DOT__shift = (0x3ffffffffULL 
                                    & (vlSelf->uart__DOT__shift 
                                       >> 1U));
    }
    if ((1U & (~ (IData)(vlSelf->__Vcellinp__uart__start_i)))) {
        if ((0xaU > (IData)(vlSelf->uart__DOT__bit_count))) {
            ++(vlSymsp->__Vcoverage[105]);
        }
        if ((0xaU <= (IData)(vlSelf->uart__DOT__bit_count))) {
            ++(vlSymsp->__Vcoverage[106]);
        }
    }
    vlSelf->uart__DOT__bit_count = __Vdly__uart__DOT__bit_count;
    vlSelf->uart__DOT__shift = __Vdly__uart__DOT__shift;
    VL_ASSIGN_SII(32,vlSelf->temp, vlSelf->__Vcellout__uart__temp);
    if ((1U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffffffeU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (1U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((2U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffffffdU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (2U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((4U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffffffbU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (4U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((8U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffffff7U 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (8U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x10U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffffffefU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x10U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x20U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffffffdfU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x20U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x40U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffffffbfU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x40U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x80U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffffff7fU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x80U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x100U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffffeffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x100U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x200U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffffdffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x200U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x400U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffffbffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x400U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x800U & (vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffff7ffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x800U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x1000U & (vlSelf->__Vcellout__uart__temp 
                    ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffffefffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x1000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x2000U & (vlSelf->__Vcellout__uart__temp 
                    ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffffdfffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x2000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x4000U & (vlSelf->__Vcellout__uart__temp 
                    ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffffbfffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x4000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x8000U & (vlSelf->__Vcellout__uart__temp 
                    ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffff7fffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x8000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x10000U & (vlSelf->__Vcellout__uart__temp 
                     ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffeffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x10000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x20000U & (vlSelf->__Vcellout__uart__temp 
                     ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffdffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x20000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x40000U & (vlSelf->__Vcellout__uart__temp 
                     ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfffbffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x40000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x80000U & (vlSelf->__Vcellout__uart__temp 
                     ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfff7ffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x80000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x100000U & (vlSelf->__Vcellout__uart__temp 
                      ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffefffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x100000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x200000U & (vlSelf->__Vcellout__uart__temp 
                      ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffdfffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x200000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x400000U & (vlSelf->__Vcellout__uart__temp 
                      ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xffbfffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x400000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x800000U & (vlSelf->__Vcellout__uart__temp 
                      ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xff7fffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x800000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x1000000U & (vlSelf->__Vcellout__uart__temp 
                       ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfeffffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x1000000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x2000000U & (vlSelf->__Vcellout__uart__temp 
                       ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfdffffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x2000000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x4000000U & (vlSelf->__Vcellout__uart__temp 
                       ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xfbffffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x4000000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x8000000U & (vlSelf->__Vcellout__uart__temp 
                       ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xf7ffffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x8000000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x10000000U & (vlSelf->__Vcellout__uart__temp 
                        ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xefffffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x10000000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x20000000U & (vlSelf->__Vcellout__uart__temp 
                        ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xdfffffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x20000000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if ((0x40000000U & (vlSelf->__Vcellout__uart__temp 
                        ^ vlSelf->uart__DOT____Vtogcov__temp))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0xbfffffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x40000000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    if (((vlSelf->__Vcellout__uart__temp ^ vlSelf->uart__DOT____Vtogcov__temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->uart__DOT____Vtogcov__temp = ((0x7fffffffU 
                                               & vlSelf->uart__DOT____Vtogcov__temp) 
                                              | (0x80000000U 
                                                 & vlSelf->__Vcellout__uart__temp));
    }
    VL_ASSIGN_SII(1,vlSelf->tx_o, vlSelf->__Vcellout__uart__tx_o);
    if (((IData)(vlSelf->__Vcellout__uart__tx_o) ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_o))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->uart__DOT____Vtogcov__tx_o = vlSelf->__Vcellout__uart__tx_o;
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__bit_count) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->uart__DOT____Vtogcov__bit_count = (
                                                   (0xeU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__bit_count)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->uart__DOT__bit_count)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__bit_count) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->uart__DOT____Vtogcov__bit_count = (
                                                   (0xdU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__bit_count)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->uart__DOT__bit_count)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__bit_count) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->uart__DOT____Vtogcov__bit_count = (
                                                   (0xbU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__bit_count)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->uart__DOT__bit_count)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__bit_count) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->uart__DOT____Vtogcov__bit_count = (
                                                   (7U 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__bit_count)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->uart__DOT__bit_count)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__shift) ^ (IData)(vlSelf->uart__DOT____Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffffffeULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->uart__DOT__shift)))));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 1U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffffffdULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 1U))))) 
                                                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 2U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffffffbULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 2U))))) 
                                                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 3U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffffff7ULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 3U))))) 
                                                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 4U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffffffefULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 4U))))) 
                                                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 5U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffffffdfULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 5U))))) 
                                                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 6U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffffffbfULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 6U))))) 
                                                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 7U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffffff7fULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 7U))))) 
                                                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 8U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffffeffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 8U))))) 
                                                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 9U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffffdffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 9U))))) 
                                                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0xaU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffffbffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0xbU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffff7ffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0xcU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffffefffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0xdU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffffdfffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0xeU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffffbfffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0xfU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffff7fffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x10U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffeffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x11U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffdffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x12U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fffbffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x13U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fff7ffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x14U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffefffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x15U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffdfffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x16U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ffbfffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x17U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3ff7fffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x18U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3feffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x19U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fdffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x1aU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3fbffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x1bU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3f7ffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x1cU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3efffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x1dU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3dfffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x1eU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x3bfffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x1fU)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x37fffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->uart__DOT__shift >> 0x20U)) 
               ^ (IData)((vlSelf->uart__DOT____Vtogcov__shift 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x2ffffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    }
    if ((IData)(((vlSelf->uart__DOT__shift ^ vlSelf->uart__DOT____Vtogcov__shift) 
                 >> 0x21U))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->uart__DOT____Vtogcov__shift = ((0x1ffffffffULL 
                                                & vlSelf->uart__DOT____Vtogcov__shift) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->uart__DOT__shift 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    }
}

VL_INLINE_OPT void Vuart___024root___combo__TOP__1(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__uart__start_i, vlSelf->start_i);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__uart__data_i, vlSelf->data_i);
    if (((IData)(vlSelf->__Vcellinp__uart__start_i) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__start_i))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->uart__DOT____Vtogcov__start_i = vlSelf->__Vcellinp__uart__start_i;
    }
    if ((1U & (vlSelf->__Vcellinp__uart__data_i ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffffffeU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (1U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((2U & (vlSelf->__Vcellinp__uart__data_i ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffffffdU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (2U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((4U & (vlSelf->__Vcellinp__uart__data_i ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffffffbU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (4U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((8U & (vlSelf->__Vcellinp__uart__data_i ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffffff7U 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (8U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x10U & (vlSelf->__Vcellinp__uart__data_i 
                  ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffffffefU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x10U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x20U & (vlSelf->__Vcellinp__uart__data_i 
                  ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffffffdfU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x20U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x40U & (vlSelf->__Vcellinp__uart__data_i 
                  ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffffffbfU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x40U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x80U & (vlSelf->__Vcellinp__uart__data_i 
                  ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffffff7fU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x80U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x100U & (vlSelf->__Vcellinp__uart__data_i 
                   ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffffeffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x100U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x200U & (vlSelf->__Vcellinp__uart__data_i 
                   ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffffdffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x200U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x400U & (vlSelf->__Vcellinp__uart__data_i 
                   ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffffbffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x400U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x800U & (vlSelf->__Vcellinp__uart__data_i 
                   ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffff7ffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x800U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x1000U & (vlSelf->__Vcellinp__uart__data_i 
                    ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffffefffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x1000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x2000U & (vlSelf->__Vcellinp__uart__data_i 
                    ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffffdfffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x2000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x4000U & (vlSelf->__Vcellinp__uart__data_i 
                    ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffffbfffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x4000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x8000U & (vlSelf->__Vcellinp__uart__data_i 
                    ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffff7fffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x8000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x10000U & (vlSelf->__Vcellinp__uart__data_i 
                     ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffeffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x10000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x20000U & (vlSelf->__Vcellinp__uart__data_i 
                     ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffdffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x20000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x40000U & (vlSelf->__Vcellinp__uart__data_i 
                     ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfffbffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x40000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x80000U & (vlSelf->__Vcellinp__uart__data_i 
                     ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfff7ffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x80000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x100000U & (vlSelf->__Vcellinp__uart__data_i 
                      ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffefffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x100000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x200000U & (vlSelf->__Vcellinp__uart__data_i 
                      ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffdfffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x200000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x400000U & (vlSelf->__Vcellinp__uart__data_i 
                      ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xffbfffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x400000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x800000U & (vlSelf->__Vcellinp__uart__data_i 
                      ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xff7fffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x800000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x1000000U & (vlSelf->__Vcellinp__uart__data_i 
                       ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfeffffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x1000000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x2000000U & (vlSelf->__Vcellinp__uart__data_i 
                       ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfdffffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x2000000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x4000000U & (vlSelf->__Vcellinp__uart__data_i 
                       ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xfbffffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x4000000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x8000000U & (vlSelf->__Vcellinp__uart__data_i 
                       ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xf7ffffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x8000000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x10000000U & (vlSelf->__Vcellinp__uart__data_i 
                        ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xefffffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x10000000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x20000000U & (vlSelf->__Vcellinp__uart__data_i 
                        ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xdfffffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x20000000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if ((0x40000000U & (vlSelf->__Vcellinp__uart__data_i 
                        ^ vlSelf->uart__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0xbfffffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x40000000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
    if (((vlSelf->__Vcellinp__uart__data_i ^ vlSelf->uart__DOT____Vtogcov__data_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->uart__DOT____Vtogcov__data_i = ((0x7fffffffU 
                                                 & vlSelf->uart__DOT____Vtogcov__data_i) 
                                                | (0x80000000U 
                                                   & vlSelf->__Vcellinp__uart__data_i));
    }
}
