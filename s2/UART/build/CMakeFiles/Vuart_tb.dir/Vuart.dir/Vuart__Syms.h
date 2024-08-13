// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUART__SYMS_H_
#define VERILATED_VUART__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vuart.h"

// INCLUDE MODULE CLASSES
#include "Vuart___024root.h"

// SYMS CLASS (contains all model state)
class Vuart__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vuart* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vuart___024root                TOP;

    // COVERAGE
    uint32_t __Vcoverage[53];

    // CONSTRUCTORS
    Vuart__Syms(VerilatedContext* contextp, const char* namep, Vuart* modelp);
    ~Vuart__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
