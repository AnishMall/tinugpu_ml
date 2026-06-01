// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTINYGPU_TOP__SYMS_H_
#define VERILATED_VTINYGPU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtinygpu_top.h"

// INCLUDE MODULE CLASSES
#include "Vtinygpu_top___024root.h"

// SYMS CLASS (contains all model state)
class Vtinygpu_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtinygpu_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtinygpu_top___024root         TOP;

    // CONSTRUCTORS
    Vtinygpu_top__Syms(VerilatedContext* contextp, const char* namep, Vtinygpu_top* modelp);
    ~Vtinygpu_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
