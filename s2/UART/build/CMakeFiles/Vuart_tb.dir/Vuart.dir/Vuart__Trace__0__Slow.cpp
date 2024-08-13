// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vuart__Syms.h"


VL_ATTR_COLD void Vuart___024root__trace_init_sub__TOP__0(Vuart___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("uart ");
    tracep->declBus(c+10,"CLCKS_PER_BIT", false,-1, 31,0);
    tracep->declBit(c+8,"clk_i", false,-1);
    tracep->declBit(c+9,"i_rx_serial", false,-1);
    tracep->declBit(c+3,"o_rx_DV", false,-1);
    tracep->declBus(c+4,"o_rx_Byte", false,-1, 7,0);
    tracep->declBus(c+11,"s_idle", false,-1, 2,0);
    tracep->declBus(c+12,"s_rx_start_bit", false,-1, 2,0);
    tracep->declBus(c+13,"s_rx_data_bits", false,-1, 2,0);
    tracep->declBus(c+14,"s_rx_stop_bit", false,-1, 2,0);
    tracep->declBus(c+15,"s_cleanup", false,-1, 2,0);
    tracep->declBit(c+1,"r_rx_data_r", false,-1);
    tracep->declBit(c+2,"r_rx_data", false,-1);
    tracep->declBus(c+5,"r_Clock_count", false,-1, 7,0);
    tracep->declBus(c+6,"r_bit_index", false,-1, 2,0);
    tracep->declBus(c+4,"r_rx_Byte", false,-1, 7,0);
    tracep->declBit(c+3,"r_rx_DV", false,-1);
    tracep->declBus(c+7,"r_SM_Main", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vuart___024root__trace_init_top(Vuart___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_init_top\n"); );
    // Body
    Vuart___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vuart___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vuart___024root__trace_register(Vuart___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vuart___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vuart___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vuart___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vuart___024root__trace_full_sub_0(Vuart___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuart___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_full_top_0\n"); );
    // Init
    Vuart___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart___024root*>(voidSelf);
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuart___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart___024root__trace_full_sub_0(Vuart___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->uart__DOT__r_rx_data_r));
    bufp->fullBit(oldp+2,(vlSelf->uart__DOT__r_rx_data));
    bufp->fullBit(oldp+3,(vlSelf->uart__DOT__r_rx_DV));
    bufp->fullCData(oldp+4,(vlSelf->uart__DOT__r_rx_Byte),8);
    bufp->fullCData(oldp+5,(vlSelf->uart__DOT__r_Clock_count),8);
    bufp->fullCData(oldp+6,(vlSelf->uart__DOT__r_bit_index),3);
    bufp->fullCData(oldp+7,(vlSelf->uart__DOT__r_SM_Main),3);
    bufp->fullBit(oldp+8,(vlSelf->__Vcellinp__uart__clk_i));
    bufp->fullBit(oldp+9,(vlSelf->__Vcellinp__uart__i_rx_serial));
    bufp->fullIData(oldp+10,(0x57U),32);
    bufp->fullCData(oldp+11,(0U),3);
    bufp->fullCData(oldp+12,(1U),3);
    bufp->fullCData(oldp+13,(2U),3);
    bufp->fullCData(oldp+14,(3U),3);
    bufp->fullCData(oldp+15,(4U),3);
}
