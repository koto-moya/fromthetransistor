// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vuart__Syms.h"


void Vuart___024root__trace_chg_sub_0(Vuart___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_chg_top_0\n"); );
    // Init
    Vuart___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart___024root*>(voidSelf);
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuart___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart___024root__trace_chg_sub_0(Vuart___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->uart__DOT__r_rx_data_r));
        bufp->chgBit(oldp+1,(vlSelf->uart__DOT__r_rx_data));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+2,(vlSelf->uart__DOT__r_rx_DV));
        bufp->chgCData(oldp+3,(vlSelf->uart__DOT__r_rx_Byte),8);
        bufp->chgCData(oldp+4,(vlSelf->uart__DOT__r_Clock_count),8);
        bufp->chgCData(oldp+5,(vlSelf->uart__DOT__r_bit_index),3);
        bufp->chgCData(oldp+6,(vlSelf->uart__DOT__r_SM_Main),3);
    }
    bufp->chgBit(oldp+7,(vlSelf->__Vcellinp__uart__clk_i));
    bufp->chgBit(oldp+8,(vlSelf->__Vcellinp__uart__i_rx_serial));
}

void Vuart___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_cleanup\n"); );
    // Init
    Vuart___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart___024root*>(voidSelf);
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
