// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TINYGPU_PKG_H_
#define VERILATED_VTOP_TINYGPU_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tinygpu_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*7:0*/ OP_NOP = 0U;
    static constexpr CData/*7:0*/ OP_GEMM = 1U;
    static constexpr CData/*7:0*/ OP_GEMV = 2U;
    static constexpr CData/*7:0*/ OP_VEC_ADD = 3U;
    static constexpr CData/*7:0*/ OP_VEC_MUL = 4U;
    static constexpr CData/*7:0*/ OP_RELU = 5U;
    static constexpr CData/*7:0*/ OP_CLAMP = 6U;
    static constexpr CData/*7:0*/ OP_CONV2D = 7U;
    static constexpr CData/*7:0*/ ABI_VERSION = 1U;
    static constexpr IData/*31:0*/ ADDR_W = 0x00000020U;
    static constexpr IData/*31:0*/ DATA_W = 0x00000020U;
    static constexpr IData/*31:0*/ INT8_W = 8U;
    static constexpr IData/*31:0*/ ACC_W = 0x00000020U;
    static constexpr IData/*31:0*/ TILE_M = 4U;
    static constexpr IData/*31:0*/ TILE_N = 4U;
    static constexpr IData/*31:0*/ TILE_K = 0x00000010U;
    static constexpr IData/*31:0*/ NUM_PES = 0x00000010U;
    static constexpr IData/*31:0*/ SPM_A_BYTES = 0x00000040U;
    static constexpr IData/*31:0*/ SPM_B_BYTES = 0x00000040U;
    static constexpr IData/*31:0*/ SPM_C_BYTES = 0x00000040U;
    static constexpr IData/*31:0*/ MAX_BURST = 0x00000010U;
    static constexpr IData/*31:0*/ FLAG_BIAS_EN = 0U;
    static constexpr IData/*31:0*/ FLAG_RELU_EN = 1U;
    static constexpr IData/*31:0*/ FLAG_CLAMP_EN = 2U;
    static constexpr IData/*31:0*/ FLAG_REQUANT_EN = 3U;
    static constexpr IData/*31:0*/ FLAG_DST_INT8 = 4U;
    static constexpr IData/*31:0*/ FLAG_DST_INT32 = 5U;
    static constexpr IData/*31:0*/ FLAG_SIGNED_MODE = 6U;

    // CONSTRUCTORS
    Vtop_tinygpu_pkg();
    ~Vtop_tinygpu_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_tinygpu_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
