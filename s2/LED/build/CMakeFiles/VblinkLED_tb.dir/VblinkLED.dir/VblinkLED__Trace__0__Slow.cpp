// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "VblinkLED__Syms.h"


VL_ATTR_COLD void VblinkLED___024root__trace_init_sub__TOP__0(VblinkLED___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("blinkLED ");
    tracep->declBus(c+3,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBus(c+2,"LED", false,-1, 0,0);
    tracep->declBus(c+2,"data", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VblinkLED___024root__trace_init_top(VblinkLED___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root__trace_init_top\n"); );
    // Body
    VblinkLED___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VblinkLED___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VblinkLED___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VblinkLED___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VblinkLED___024root__trace_register(VblinkLED___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VblinkLED___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&VblinkLED___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&VblinkLED___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VblinkLED___024root__trace_full_sub_0(VblinkLED___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VblinkLED___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root__trace_full_top_0\n"); );
    // Init
    VblinkLED___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VblinkLED___024root*>(voidSelf);
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VblinkLED___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VblinkLED___024root__trace_full_sub_0(VblinkLED___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VblinkLED__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VblinkLED___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__blinkLED__clk_i));
    bufp->fullBit(oldp+2,(vlSelf->blinkLED__DOT__data));
    bufp->fullIData(oldp+3,(1U),32);
}
