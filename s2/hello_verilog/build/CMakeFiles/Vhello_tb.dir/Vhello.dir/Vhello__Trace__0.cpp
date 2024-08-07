// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vhello__Syms.h"


void Vhello___024root__trace_chg_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhello___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_chg_top_0\n"); );
    // Init
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhello___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vhello___024root__trace_chg_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__hello__clk_i));
        bufp->chgBit(oldp+1,(vlSelf->__Vcellinp__hello__reset_n_i));
        bufp->chgIData(oldp+2,(vlSelf->__Vcellinp__hello__data_i),32);
    }
    bufp->chgIData(oldp+3,(vlSelf->hello__DOT__data),32);
}

void Vhello___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_cleanup\n"); );
    // Init
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
