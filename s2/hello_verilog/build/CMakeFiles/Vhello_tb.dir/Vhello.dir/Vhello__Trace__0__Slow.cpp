// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vhello__Syms.h"


VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("hello ");
    tracep->declBus(c+5,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"reset_n_i", false,-1);
    tracep->declBus(c+3,"data_i", false,-1, 31,0);
    tracep->declBus(c+4,"data_o", false,-1, 31,0);
    tracep->declBus(c+4,"data", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vhello___024root__trace_init_top(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_top\n"); );
    // Body
    Vhello___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhello___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhello___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhello___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhello___024root__trace_register(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vhello___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vhello___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vhello___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhello___024root__trace_full_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhello___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_full_top_0\n"); );
    // Init
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhello___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhello___024root__trace_full_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__hello__clk_i));
    bufp->fullBit(oldp+2,(vlSelf->__Vcellinp__hello__reset_n_i));
    bufp->fullIData(oldp+3,(vlSelf->__Vcellinp__hello__data_i),32);
    bufp->fullIData(oldp+4,(vlSelf->hello__DOT__data),32);
    bufp->fullIData(oldp+5,(0x20U),32);
}
