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
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"start_i", false,-1);
    tracep->declBus(c+3,"data_i", false,-1, 31,0);
    tracep->declBit(c+4,"tx_o", false,-1);
    tracep->declBus(c+5,"temp", false,-1, 31,0);
    tracep->declQuad(c+6,"shift", false,-1, 33,0);
    tracep->declBus(c+8,"bit_count", false,-1, 3,0);
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
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__uart__clk_i));
    bufp->fullBit(oldp+2,(vlSelf->__Vcellinp__uart__start_i));
    bufp->fullIData(oldp+3,(vlSelf->__Vcellinp__uart__data_i),32);
    bufp->fullBit(oldp+4,(vlSelf->__Vcellout__uart__tx_o));
    bufp->fullIData(oldp+5,(vlSelf->__Vcellout__uart__temp),32);
    bufp->fullQData(oldp+6,(vlSelf->uart__DOT__shift),34);
    bufp->fullCData(oldp+8,(vlSelf->uart__DOT__bit_count),4);
}
