// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VHELLO_H_
#define VERILATED_VHELLO_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "verilated_cov.h"

class Vhello__Syms;
class Vhello___024root;
class VerilatedVcdSc;

// This class is the main interface to the Verilated model
SC_MODULE(Vhello) {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vhello__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_in<bool> &clk_i;
    sc_in<bool> &reset_n_i;
    sc_in<uint32_t> &data_i;
    sc_out<uint32_t> &data_o;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vhello___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vhello);
    virtual ~Vhello();
  private:
    VL_UNCOPYABLE(Vhello);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// SC tracing; avoid overloaded virtual function lint warning
    virtual void trace(sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
