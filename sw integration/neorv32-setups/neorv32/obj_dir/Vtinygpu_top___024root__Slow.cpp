// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinygpu_top.h for the primary calling header

#include "verilated.h"

#include "Vtinygpu_top__Syms.h"
#include "Vtinygpu_top___024root.h"

void Vtinygpu_top___024root___ctor_var_reset(Vtinygpu_top___024root* vlSelf);

Vtinygpu_top___024root::Vtinygpu_top___024root(Vtinygpu_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtinygpu_top___024root___ctor_var_reset(this);
}

void Vtinygpu_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtinygpu_top___024root::~Vtinygpu_top___024root() {
}
