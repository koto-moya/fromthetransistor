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
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__uart__i_rx_serial, vlSelf->i_rx_serial);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__uart__clk_i, vlSelf->clk_i);
    if (((IData)(vlSelf->__Vcellinp__uart__i_rx_serial) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__i_rx_serial))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->uart__DOT____Vtogcov__i_rx_serial = vlSelf->__Vcellinp__uart__i_rx_serial;
    }
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
    CData/*2:0*/ __Vdly__uart__DOT__r_SM_Main;
    CData/*7:0*/ __Vdly__uart__DOT__r_Clock_count;
    // Body
    __Vdly__uart__DOT__r_SM_Main = vlSelf->uart__DOT__r_SM_Main;
    __Vdly__uart__DOT__r_Clock_count = vlSelf->uart__DOT__r_Clock_count;
    ++(vlSymsp->__Vcoverage[52]);
    if ((1U & (~ ((IData)(vlSelf->uart__DOT__r_SM_Main) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
            if ((1U & (~ (IData)(vlSelf->uart__DOT__r_SM_Main)))) {
                ++(vlSymsp->__Vcoverage[46]);
                if ((0x56U > (IData)(vlSelf->uart__DOT__r_Clock_count))) {
                    ++(vlSymsp->__Vcoverage[44]);
                }
                if ((0x56U <= (IData)(vlSelf->uart__DOT__r_Clock_count))) {
                    ++(vlSymsp->__Vcoverage[45]);
                    if ((7U > (IData)(vlSelf->uart__DOT__r_bit_index))) {
                        ++(vlSymsp->__Vcoverage[42]);
                    }
                    if ((7U <= (IData)(vlSelf->uart__DOT__r_bit_index))) {
                        ++(vlSymsp->__Vcoverage[43]);
                    }
                }
            }
            if ((1U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
                ++(vlSymsp->__Vcoverage[49]);
                if ((0x56U > (IData)(vlSelf->uart__DOT__r_Clock_count))) {
                    ++(vlSymsp->__Vcoverage[47]);
                }
                if ((0x56U <= (IData)(vlSelf->uart__DOT__r_Clock_count))) {
                    ++(vlSymsp->__Vcoverage[48]);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->uart__DOT__r_SM_Main) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
                ++(vlSymsp->__Vcoverage[41]);
                if ((0x2bU == (IData)(vlSelf->uart__DOT__r_Clock_count))) {
                    ++(vlSymsp->__Vcoverage[39]);
                    if (vlSelf->uart__DOT__r_rx_data) {
                        ++(vlSymsp->__Vcoverage[38]);
                    }
                    if ((1U & (~ (IData)(vlSelf->uart__DOT__r_rx_data)))) {
                        ++(vlSymsp->__Vcoverage[37]);
                    }
                }
                if ((0x2bU != (IData)(vlSelf->uart__DOT__r_Clock_count))) {
                    ++(vlSymsp->__Vcoverage[40]);
                }
            }
            if ((1U & (~ (IData)(vlSelf->uart__DOT__r_SM_Main)))) {
                ++(vlSymsp->__Vcoverage[36]);
                if ((1U & (~ (IData)(vlSelf->uart__DOT__r_rx_data)))) {
                    ++(vlSymsp->__Vcoverage[34]);
                }
                if (vlSelf->uart__DOT__r_rx_data) {
                    ++(vlSymsp->__Vcoverage[35]);
                }
            }
        }
    }
    if ((4U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
        if ((2U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
            ++(vlSymsp->__Vcoverage[51]);
            __Vdly__uart__DOT__r_SM_Main = 0U;
        } else if ((1U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
            __Vdly__uart__DOT__r_SM_Main = 0U;
        } else {
            __Vdly__uart__DOT__r_SM_Main = 0U;
            vlSelf->uart__DOT__r_rx_DV = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->uart__DOT__r_SM_Main) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
                ++(vlSymsp->__Vcoverage[51]);
            }
            if ((1U & (~ (IData)(vlSelf->uart__DOT__r_SM_Main)))) {
                ++(vlSymsp->__Vcoverage[50]);
            }
        }
    } else if ((2U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
        if ((1U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
            if ((0x56U > (IData)(vlSelf->uart__DOT__r_Clock_count))) {
                __Vdly__uart__DOT__r_Clock_count = 
                    (0xffU & ((IData)(1U) + (IData)(vlSelf->uart__DOT__r_Clock_count)));
                __Vdly__uart__DOT__r_SM_Main = 3U;
            } else {
                __Vdly__uart__DOT__r_Clock_count = 0U;
                vlSelf->uart__DOT__r_rx_DV = 1U;
                __Vdly__uart__DOT__r_SM_Main = 4U;
            }
        } else if ((0x56U > (IData)(vlSelf->uart__DOT__r_Clock_count))) {
            __Vdly__uart__DOT__r_Clock_count = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->uart__DOT__r_Clock_count)));
            __Vdly__uart__DOT__r_SM_Main = 2U;
        } else {
            __Vdly__uart__DOT__r_Clock_count = 0U;
            vlSelf->uart__DOT__r_rx_Byte = (((~ ((IData)(1U) 
                                                 << (IData)(vlSelf->uart__DOT__r_bit_index))) 
                                             & (IData)(vlSelf->uart__DOT__r_rx_Byte)) 
                                            | (0xffU 
                                               & ((IData)(vlSelf->uart__DOT__r_rx_data) 
                                                  << (IData)(vlSelf->uart__DOT__r_bit_index))));
            if ((7U > (IData)(vlSelf->uart__DOT__r_bit_index))) {
                vlSelf->uart__DOT__r_bit_index = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->uart__DOT__r_bit_index)));
                __Vdly__uart__DOT__r_SM_Main = 2U;
            } else {
                vlSelf->uart__DOT__r_bit_index = 0U;
                __Vdly__uart__DOT__r_SM_Main = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->uart__DOT__r_SM_Main))) {
        if ((0x2bU == (IData)(vlSelf->uart__DOT__r_Clock_count))) {
            if (vlSelf->uart__DOT__r_rx_data) {
                __Vdly__uart__DOT__r_SM_Main = 0U;
            } else {
                __Vdly__uart__DOT__r_Clock_count = 0U;
                __Vdly__uart__DOT__r_SM_Main = 2U;
            }
        } else {
            __Vdly__uart__DOT__r_Clock_count = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->uart__DOT__r_Clock_count)));
            __Vdly__uart__DOT__r_SM_Main = 1U;
        }
    } else {
        __Vdly__uart__DOT__r_Clock_count = 0U;
        vlSelf->uart__DOT__r_bit_index = 0U;
        vlSelf->uart__DOT__r_rx_DV = 0U;
        __Vdly__uart__DOT__r_SM_Main = ((IData)(vlSelf->uart__DOT__r_rx_data)
                                         ? 0U : 1U);
    }
    vlSelf->uart__DOT__r_SM_Main = __Vdly__uart__DOT__r_SM_Main;
    vlSelf->uart__DOT__r_Clock_count = __Vdly__uart__DOT__r_Clock_count;
    VL_ASSIGN_SII(1,vlSelf->o_rx_DV, vlSelf->uart__DOT__r_rx_DV);
    if (((IData)(vlSelf->uart__DOT__r_rx_DV) ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_DV))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->uart__DOT____Vtogcov__o_rx_DV = vlSelf->uart__DOT__r_rx_DV;
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__r_bit_index) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_bit_index)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->uart__DOT____Vtogcov__r_bit_index = 
            ((6U & (IData)(vlSelf->uart__DOT____Vtogcov__r_bit_index)) 
             | (1U & (IData)(vlSelf->uart__DOT__r_bit_index)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__r_bit_index) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_bit_index)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->uart__DOT____Vtogcov__r_bit_index = 
            ((5U & (IData)(vlSelf->uart__DOT____Vtogcov__r_bit_index)) 
             | (2U & (IData)(vlSelf->uart__DOT__r_bit_index)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__r_bit_index) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_bit_index)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->uart__DOT____Vtogcov__r_bit_index = 
            ((3U & (IData)(vlSelf->uart__DOT____Vtogcov__r_bit_index)) 
             | (4U & (IData)(vlSelf->uart__DOT__r_bit_index)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__r_SM_Main) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_SM_Main)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->uart__DOT____Vtogcov__r_SM_Main = (
                                                   (6U 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__r_SM_Main)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->uart__DOT__r_SM_Main)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__r_SM_Main) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_SM_Main)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->uart__DOT____Vtogcov__r_SM_Main = (
                                                   (5U 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__r_SM_Main)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->uart__DOT__r_SM_Main)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__r_SM_Main) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_SM_Main)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->uart__DOT____Vtogcov__r_SM_Main = (
                                                   (3U 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__r_SM_Main)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->uart__DOT__r_SM_Main)));
    }
    VL_ASSIGN_SII(8,vlSelf->o_rx_Byte, vlSelf->uart__DOT__r_rx_Byte);
    if ((1U & ((IData)(vlSelf->uart__DOT__r_rx_Byte) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->uart__DOT____Vtogcov__o_rx_Byte = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->uart__DOT__r_rx_Byte)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__r_rx_Byte) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->uart__DOT____Vtogcov__o_rx_Byte = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->uart__DOT__r_rx_Byte)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__r_rx_Byte) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->uart__DOT____Vtogcov__o_rx_Byte = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->uart__DOT__r_rx_Byte)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__r_rx_Byte) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->uart__DOT____Vtogcov__o_rx_Byte = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->uart__DOT__r_rx_Byte)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__r_rx_Byte) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->uart__DOT____Vtogcov__o_rx_Byte = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->uart__DOT__r_rx_Byte)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__r_rx_Byte) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->uart__DOT____Vtogcov__o_rx_Byte = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->uart__DOT__r_rx_Byte)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__r_rx_Byte) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->uart__DOT____Vtogcov__o_rx_Byte = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->uart__DOT__r_rx_Byte)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__r_rx_Byte) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->uart__DOT____Vtogcov__o_rx_Byte = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_Byte)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->uart__DOT__r_rx_Byte)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__r_Clock_count) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->uart__DOT____Vtogcov__r_Clock_count 
            = ((0xfeU & (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)) 
               | (1U & (IData)(vlSelf->uart__DOT__r_Clock_count)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__r_Clock_count) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->uart__DOT____Vtogcov__r_Clock_count 
            = ((0xfdU & (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)) 
               | (2U & (IData)(vlSelf->uart__DOT__r_Clock_count)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__r_Clock_count) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->uart__DOT____Vtogcov__r_Clock_count 
            = ((0xfbU & (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)) 
               | (4U & (IData)(vlSelf->uart__DOT__r_Clock_count)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__r_Clock_count) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->uart__DOT____Vtogcov__r_Clock_count 
            = ((0xf7U & (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)) 
               | (8U & (IData)(vlSelf->uart__DOT__r_Clock_count)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__r_Clock_count) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->uart__DOT____Vtogcov__r_Clock_count 
            = ((0xefU & (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__r_Clock_count)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__r_Clock_count) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->uart__DOT____Vtogcov__r_Clock_count 
            = ((0xdfU & (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__r_Clock_count)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__r_Clock_count) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->uart__DOT____Vtogcov__r_Clock_count 
            = ((0xbfU & (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__r_Clock_count)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__r_Clock_count) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->uart__DOT____Vtogcov__r_Clock_count 
            = ((0x7fU & (IData)(vlSelf->uart__DOT____Vtogcov__r_Clock_count)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__r_Clock_count)));
    }
}
