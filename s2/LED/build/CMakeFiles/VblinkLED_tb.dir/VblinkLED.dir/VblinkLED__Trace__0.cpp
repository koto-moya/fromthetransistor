// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "VblinkLED__Syms.h"


void VblinkLED___024root__trace_chg_sub_0(VblinkLED___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VblinkLED___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root__trace_chg_top_0\n"); );
    // Init
    VblinkLED___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VblinkLED___024root*>(voidSelf);
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VblinkLED___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VblinkLED___024root__trace_chg_sub_0(VblinkLED___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__blinkLED__clk_i));
    bufp->chgBit(oldp+1,(vlSelf->blinkLED__DOT__data));
}

void VblinkLED___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root__trace_cleanup\n"); );
    // Init
    VblinkLED___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VblinkLED___024root*>(voidSelf);
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
