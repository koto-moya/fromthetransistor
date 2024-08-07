// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello___024root.h"

VL_ATTR_COLD void Vhello___024root___settle__TOP__0(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___settle__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->__Vcellinp__hello__reset_n_i) 
         ^ (IData)(vlSelf->hello__DOT____Vtogcov__reset_n_i))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->hello__DOT____Vtogcov__reset_n_i = vlSelf->__Vcellinp__hello__reset_n_i;
    }
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__hello__clk_i, vlSelf->clk_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__hello__reset_n_i, vlSelf->reset_n_i);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__hello__data_i, vlSelf->data_i);
    VL_ASSIGN_SII(32,vlSelf->data_o, vlSelf->hello__DOT__data);
    if ((1U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffffffeU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (1U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((2U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffffffdU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (2U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((4U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffffffbU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (4U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((8U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffffff7U 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (8U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x10U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffffffefU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x10U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x20U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffffffdfU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x20U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x40U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffffffbfU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x40U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x80U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffffff7fU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x80U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x100U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffffeffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x100U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x200U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffffdffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x200U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x400U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffffbffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x400U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x800U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffff7ffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x800U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x1000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffffefffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x1000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x2000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffffdfffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x2000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x4000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffffbfffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x4000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x8000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffff7fffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x8000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x10000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffeffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x10000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x20000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffdffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x20000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x40000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfffbffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x40000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x80000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfff7ffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x80000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x100000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffefffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x100000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x200000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffdfffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x200000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x400000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xffbfffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x400000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x800000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xff7fffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x800000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x1000000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfeffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x1000000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x2000000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfdffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x2000000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x4000000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xfbffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x4000000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x8000000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xf7ffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x8000000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x10000000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xefffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x10000000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x20000000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xdfffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x20000000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if ((0x40000000U & (vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0xbfffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x40000000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if (((vlSelf->hello__DOT__data ^ vlSelf->hello__DOT____Vtogcov__data_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->hello__DOT____Vtogcov__data_o = ((0x7fffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_o) 
                                                 | (0x80000000U 
                                                    & vlSelf->hello__DOT__data));
    }
    if (((IData)(vlSelf->__Vcellinp__hello__clk_i) 
         ^ (IData)(vlSelf->hello__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->hello__DOT____Vtogcov__clk_i = vlSelf->__Vcellinp__hello__clk_i;
    }
    if ((1U & (vlSelf->__Vcellinp__hello__data_i ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffffffeU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (1U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((2U & (vlSelf->__Vcellinp__hello__data_i ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffffffdU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (2U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((4U & (vlSelf->__Vcellinp__hello__data_i ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffffffbU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (4U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((8U & (vlSelf->__Vcellinp__hello__data_i ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffffff7U 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (8U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x10U & (vlSelf->__Vcellinp__hello__data_i 
                  ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffffffefU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x10U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x20U & (vlSelf->__Vcellinp__hello__data_i 
                  ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffffffdfU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x20U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x40U & (vlSelf->__Vcellinp__hello__data_i 
                  ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffffffbfU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x40U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x80U & (vlSelf->__Vcellinp__hello__data_i 
                  ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffffff7fU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x80U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x100U & (vlSelf->__Vcellinp__hello__data_i 
                   ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffffeffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x100U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x200U & (vlSelf->__Vcellinp__hello__data_i 
                   ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffffdffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x200U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x400U & (vlSelf->__Vcellinp__hello__data_i 
                   ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffffbffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x400U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x800U & (vlSelf->__Vcellinp__hello__data_i 
                   ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffff7ffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x800U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x1000U & (vlSelf->__Vcellinp__hello__data_i 
                    ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffffefffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x1000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x2000U & (vlSelf->__Vcellinp__hello__data_i 
                    ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffffdfffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x2000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x4000U & (vlSelf->__Vcellinp__hello__data_i 
                    ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffffbfffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x4000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x8000U & (vlSelf->__Vcellinp__hello__data_i 
                    ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffff7fffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x8000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x10000U & (vlSelf->__Vcellinp__hello__data_i 
                     ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffeffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x10000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x20000U & (vlSelf->__Vcellinp__hello__data_i 
                     ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffdffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x20000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x40000U & (vlSelf->__Vcellinp__hello__data_i 
                     ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfffbffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x40000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x80000U & (vlSelf->__Vcellinp__hello__data_i 
                     ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfff7ffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x80000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x100000U & (vlSelf->__Vcellinp__hello__data_i 
                      ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffefffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x100000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x200000U & (vlSelf->__Vcellinp__hello__data_i 
                      ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffdfffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x200000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x400000U & (vlSelf->__Vcellinp__hello__data_i 
                      ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xffbfffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x400000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x800000U & (vlSelf->__Vcellinp__hello__data_i 
                      ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xff7fffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x800000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x1000000U & (vlSelf->__Vcellinp__hello__data_i 
                       ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfeffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x1000000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x2000000U & (vlSelf->__Vcellinp__hello__data_i 
                       ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfdffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x2000000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x4000000U & (vlSelf->__Vcellinp__hello__data_i 
                       ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xfbffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x4000000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x8000000U & (vlSelf->__Vcellinp__hello__data_i 
                       ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xf7ffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x8000000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x10000000U & (vlSelf->__Vcellinp__hello__data_i 
                        ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xefffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x10000000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x20000000U & (vlSelf->__Vcellinp__hello__data_i 
                        ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xdfffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x20000000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if ((0x40000000U & (vlSelf->__Vcellinp__hello__data_i 
                        ^ vlSelf->hello__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0xbfffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x40000000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
    if (((vlSelf->__Vcellinp__hello__data_i ^ vlSelf->hello__DOT____Vtogcov__data_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->hello__DOT____Vtogcov__data_i = ((0x7fffffffU 
                                                  & vlSelf->hello__DOT____Vtogcov__data_i) 
                                                 | (0x80000000U 
                                                    & vlSelf->__Vcellinp__hello__data_i));
    }
}

VL_ATTR_COLD void Vhello___024root___configure_coverage(Vhello___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "hello.v", 5, 11, ".hello", "v_toggle/hello", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "hello.v", 6, 11, ".hello", "v_toggle/hello", "reset_n_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "hello.v", 7, 27, ".hello", "v_toggle/hello", "data_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "hello.v", 8, 28, ".hello", "v_toggle/hello", "data_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "hello.v", 10, 25, ".hello", "v_toggle/hello", "data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "hello.v", 14, 9, ".hello", "v_branch/hello", "if", "14-15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "hello.v", 14, 10, ".hello", "v_branch/hello", "else", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "hello.v", 12, 5, ".hello", "v_line/hello", "block", "12");
}
