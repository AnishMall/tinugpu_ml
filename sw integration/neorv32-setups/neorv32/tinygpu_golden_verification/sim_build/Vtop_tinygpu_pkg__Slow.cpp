// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_tinygpu_pkg
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::OP_NOP;
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::OP_GEMM;
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::OP_GEMV;
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::OP_VEC_ADD;
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::OP_VEC_MUL;
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::OP_RELU;
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::OP_CLAMP;
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::OP_CONV2D;
constexpr CData/*7:0*/ Vtop_tinygpu_pkg::ABI_VERSION;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::ADDR_W;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::DATA_W;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::INT8_W;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::ACC_W;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::TILE_M;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::TILE_N;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::TILE_K;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::NUM_PES;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::SPM_A_BYTES;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::SPM_B_BYTES;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::SPM_C_BYTES;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::MAX_BURST;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::FLAG_BIAS_EN;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::FLAG_RELU_EN;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::FLAG_CLAMP_EN;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::FLAG_REQUANT_EN;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::FLAG_DST_INT8;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::FLAG_DST_INT32;
constexpr IData/*31:0*/ Vtop_tinygpu_pkg::FLAG_SIGNED_MODE;



Vtop_tinygpu_pkg::Vtop_tinygpu_pkg() = default;
Vtop_tinygpu_pkg::~Vtop_tinygpu_pkg() = default;

void Vtop_tinygpu_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_tinygpu_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_tinygpu_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
