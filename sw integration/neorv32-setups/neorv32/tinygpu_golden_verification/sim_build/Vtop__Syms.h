// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_tinygpu_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_tinygpu_pkg               TOP__tinygpu_pkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_tinygpu_pkg;
    VerilatedScope* __Vscopep_tinygpu_top;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET____g_col__BRA__0__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET____g_col__BRA__1__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET____g_col__BRA__2__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET____g_col__BRA__3__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET____g_col__BRA__0__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET____g_col__BRA__1__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET____g_col__BRA__2__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET____g_col__BRA__3__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET____g_col__BRA__0__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET____g_col__BRA__1__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET____g_col__BRA__2__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET____g_col__BRA__3__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET____g_col__BRA__0__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET____g_col__BRA__1__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET____g_col__BRA__2__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET____g_col__BRA__3__KET__;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_array4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____u_pe;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_dma;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_epilogue;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_epilogue__unnamedblk1;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_epilogue__unnamedblk1__unnamedblk2;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_im2col;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_mem_arbiter;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_shared_mul;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm__unnamedblk1;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm__unnamedblk1__unnamedblk2;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm__unnamedblk3;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm__unnamedblk3__unnamedblk4;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm__unnamedblk5;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm__unnamedblk6;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm__unnamedblk7;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_spm__unnamedblk8;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__u_vec_alu;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__unnamedblk1;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__unnamedblk2;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__unnamedblk3;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__unnamedblk4;
    VerilatedScope* __Vscopep_tinygpu_top__u_cmd_ctrl__unnamedblk5;
    VerilatedScope* __Vscopep_tinygpu_top__u_counters;
    VerilatedScope* __Vscopep_tinygpu_top__u_regs;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
