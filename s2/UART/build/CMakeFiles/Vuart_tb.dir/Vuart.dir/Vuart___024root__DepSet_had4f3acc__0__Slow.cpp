// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "verilated.h"

#include "Vuart__Syms.h"
#include "Vuart___024root.h"

VL_ATTR_COLD void Vuart___024root___initial__TOP__0(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->uart__DOT__r_rx_data_r = 1U;
    ++(vlSymsp->__Vcoverage[12]);
    vlSelf->uart__DOT__r_rx_DV = 0U;
    ++(vlSymsp->__Vcoverage[29]);
    vlSelf->uart__DOT__r_rx_Byte = 0U;
    ++(vlSymsp->__Vcoverage[28]);
    vlSelf->uart__DOT__r_rx_data = 1U;
    ++(vlSymsp->__Vcoverage[14]);
    vlSelf->uart__DOT__r_bit_index = 0U;
    ++(vlSymsp->__Vcoverage[27]);
    vlSelf->uart__DOT__r_SM_Main = 0U;
    ++(vlSymsp->__Vcoverage[33]);
    vlSelf->uart__DOT__r_Clock_count = 0U;
    ++(vlSymsp->__Vcoverage[23]);
    if ((1U & (~ (IData)(vlSelf->uart__DOT____Vtogcov__r_rx_data_r)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->uart__DOT____Vtogcov__r_rx_data_r = vlSelf->uart__DOT__r_rx_data_r;
    }
    if ((1U & (~ (IData)(vlSelf->uart__DOT____Vtogcov__r_rx_data)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->uart__DOT____Vtogcov__r_rx_data = vlSelf->uart__DOT__r_rx_data;
    }
}

VL_ATTR_COLD void Vuart___024root___settle__TOP__0(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___settle__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__uart__i_rx_serial, vlSelf->i_rx_serial);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__uart__clk_i, vlSelf->clk_i);
    if (((IData)(vlSelf->uart__DOT__r_rx_data_r) ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_rx_data_r))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->uart__DOT____Vtogcov__r_rx_data_r = vlSelf->uart__DOT__r_rx_data_r;
    }
    VL_ASSIGN_SII(1,vlSelf->o_rx_DV, vlSelf->uart__DOT__r_rx_DV);
    if (((IData)(vlSelf->uart__DOT__r_rx_DV) ^ (IData)(vlSelf->uart__DOT____Vtogcov__o_rx_DV))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->uart__DOT____Vtogcov__o_rx_DV = vlSelf->uart__DOT__r_rx_DV;
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
    if (((IData)(vlSelf->uart__DOT__r_rx_data) ^ (IData)(vlSelf->uart__DOT____Vtogcov__r_rx_data))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->uart__DOT____Vtogcov__r_rx_data = vlSelf->uart__DOT__r_rx_data;
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

VL_ATTR_COLD void Vuart___024root___configure_coverage(Vuart___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "uart.v", 4, 11, ".uart", "v_toggle/uart", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "uart.v", 5, 11, ".uart", "v_toggle/uart", "i_rx_serial", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "uart.v", 6, 12, ".uart", "v_toggle/uart", "o_rx_DV", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "uart.v", 7, 18, ".uart", "v_toggle/uart", "o_rx_Byte[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "uart.v", 7, 18, ".uart", "v_toggle/uart", "o_rx_Byte[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "uart.v", 7, 18, ".uart", "v_toggle/uart", "o_rx_Byte[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "uart.v", 7, 18, ".uart", "v_toggle/uart", "o_rx_Byte[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "uart.v", 7, 18, ".uart", "v_toggle/uart", "o_rx_Byte[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "uart.v", 7, 18, ".uart", "v_toggle/uart", "o_rx_Byte[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "uart.v", 7, 18, ".uart", "v_toggle/uart", "o_rx_Byte[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "uart.v", 7, 18, ".uart", "v_toggle/uart", "o_rx_Byte[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "uart.v", 18, 8, ".uart", "v_toggle/uart", "r_rx_data_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "uart.v", 18, 22, ".uart", "v_line/uart", "block", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "uart.v", 19, 8, ".uart", "v_toggle/uart", "r_rx_data", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "uart.v", 19, 20, ".uart", "v_line/uart", "block", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "uart.v", 20, 14, ".uart", "v_toggle/uart", "r_Clock_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "uart.v", 20, 14, ".uart", "v_toggle/uart", "r_Clock_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "uart.v", 20, 14, ".uart", "v_toggle/uart", "r_Clock_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "uart.v", 20, 14, ".uart", "v_toggle/uart", "r_Clock_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "uart.v", 20, 14, ".uart", "v_toggle/uart", "r_Clock_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "uart.v", 20, 14, ".uart", "v_toggle/uart", "r_Clock_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "uart.v", 20, 14, ".uart", "v_toggle/uart", "r_Clock_count[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "uart.v", 20, 14, ".uart", "v_toggle/uart", "r_Clock_count[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "uart.v", 20, 30, ".uart", "v_line/uart", "block", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "uart.v", 21, 14, ".uart", "v_toggle/uart", "r_bit_index[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "uart.v", 21, 14, ".uart", "v_toggle/uart", "r_bit_index[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "uart.v", 21, 14, ".uart", "v_toggle/uart", "r_bit_index[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "uart.v", 21, 28, ".uart", "v_line/uart", "block", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "uart.v", 22, 14, ".uart", "v_toggle/uart", "r_rx_Byte[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "uart.v", 22, 14, ".uart", "v_toggle/uart", "r_rx_Byte[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "uart.v", 22, 14, ".uart", "v_toggle/uart", "r_rx_Byte[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "uart.v", 22, 14, ".uart", "v_toggle/uart", "r_rx_Byte[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "uart.v", 22, 14, ".uart", "v_toggle/uart", "r_rx_Byte[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "uart.v", 22, 14, ".uart", "v_toggle/uart", "r_rx_Byte[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "uart.v", 22, 14, ".uart", "v_toggle/uart", "r_rx_Byte[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "uart.v", 22, 14, ".uart", "v_toggle/uart", "r_rx_Byte[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "uart.v", 22, 26, ".uart", "v_line/uart", "block", "22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "uart.v", 23, 8, ".uart", "v_toggle/uart", "r_rx_DV", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "uart.v", 23, 18, ".uart", "v_line/uart", "block", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "uart.v", 24, 14, ".uart", "v_toggle/uart", "r_SM_Main[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "uart.v", 24, 14, ".uart", "v_toggle/uart", "r_SM_Main[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "uart.v", 24, 14, ".uart", "v_toggle/uart", "r_SM_Main[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "uart.v", 24, 26, ".uart", "v_line/uart", "block", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "uart.v", 37, 17, ".uart", "v_branch/uart", "if", "37-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "uart.v", 37, 18, ".uart", "v_branch/uart", "else", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "uart.v", 32, 15, ".uart", "v_line/uart", "case", "32-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "uart.v", 53, 25, ".uart", "v_branch/uart", "if", "53-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "uart.v", 53, 26, ".uart", "v_branch/uart", "else", "59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "uart.v", 51, 17, ".uart", "v_branch/uart", "if", "51-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "uart.v", 51, 18, ".uart", "v_branch/uart", "else", "63-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "uart.v", 49, 25, ".uart", "v_line/uart", "case", "49-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "uart.v", 88, 25, ".uart", "v_branch/uart", "if", "88-91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "uart.v", 88, 26, ".uart", "v_branch/uart", "else", "94-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "uart.v", 79, 17, ".uart", "v_branch/uart", "if", "79-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "uart.v", 79, 18, ".uart", "v_branch/uart", "else", "85-87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "uart.v", 77, 25, ".uart", "v_line/uart", "case", "77-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "uart.v", 103, 17, ".uart", "v_branch/uart", "if", "103-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "uart.v", 103, 18, ".uart", "v_branch/uart", "else", "109-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "uart.v", 101, 24, ".uart", "v_line/uart", "case", "101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "uart.v", 116, 20, ".uart", "v_line/uart", "case", "116-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "uart.v", 122, 11, ".uart", "v_line/uart", "case", "122-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "uart.v", 28, 4, ".uart", "v_line/uart", "block", "28-29");
}
