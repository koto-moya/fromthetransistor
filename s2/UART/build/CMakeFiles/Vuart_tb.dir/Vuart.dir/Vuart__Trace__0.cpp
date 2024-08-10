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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__uart__clk_i));
        bufp->chgBit(oldp+1,(vlSelf->__Vcellinp__uart__start_i));
        bufp->chgIData(oldp+2,(vlSelf->__Vcellinp__uart__data_i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+3,(vlSelf->__Vcellout__uart__tx_o));
        bufp->chgIData(oldp+4,(vlSelf->__Vcellout__uart__temp),32);
        bufp->chgQData(oldp+5,(vlSelf->uart__DOT__shift),34);
        bufp->chgCData(oldp+7,(vlSelf->uart__DOT__bit_count),4);
    }
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
