// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuart.h"
#include "Vuart__Syms.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vuart::Vuart(sc_module_name /* unused */)
    : vlSymsp{new Vuart__Syms(nullptr, name(), this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , i_rx_serial{vlSymsp->TOP.i_rx_serial}
    , o_rx_DV{vlSymsp->TOP.o_rx_DV}
    , o_rx_Byte{vlSymsp->TOP.o_rx_Byte}
    , rootp{&(vlSymsp->TOP)}
{
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk_i;
    sensitive << i_rx_serial;

}

//============================================================
// Destructor

Vuart::~Vuart() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vuart___024root___eval_initial(Vuart___024root* vlSelf);
void Vuart___024root___eval_settle(Vuart___024root* vlSelf);
void Vuart___024root___eval(Vuart___024root* vlSelf);
#ifdef VL_DEBUG
void Vuart___024root___eval_debug_assertions(Vuart___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart___024root___final(Vuart___024root* vlSelf);

static void _eval_initial_loop(Vuart__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vuart___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vuart___024root___eval_settle(&(vlSymsp->TOP));
        Vuart___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vuart::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuart___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vuart___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vuart::contextp() const {
    return vlSymsp->_vm_contextp__;
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vuart::final() {
    Vuart___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vuart___024root__trace_init_top(Vuart___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vuart___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart___024root*>(voidSelf);
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vuart___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vuart___024root__trace_register(Vuart___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vuart::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vuart::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vuart___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
