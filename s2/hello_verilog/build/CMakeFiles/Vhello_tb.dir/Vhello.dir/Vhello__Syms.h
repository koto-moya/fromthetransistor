// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHELLO__SYMS_H_
#define VERILATED_VHELLO__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhello.h"

// INCLUDE MODULE CLASSES
#include "Vhello___024root.h"

// SYMS CLASS (contains all model state)
class Vhello__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhello* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhello___024root               TOP;

    // COVERAGE
    uint32_t __Vcoverage[69];

    // CONSTRUCTORS
    Vhello__Syms(VerilatedContext* contextp, const char* namep, Vhello* modelp);
    ~Vhello__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
