// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtinygpu_top.h"
#include "Vtinygpu_top__Syms.h"

//============================================================
// Constructors

Vtinygpu_top::Vtinygpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtinygpu_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , mmio_valid{vlSymsp->TOP.mmio_valid}
    , mmio_we{vlSymsp->TOP.mmio_we}
    , mmio_wstrb{vlSymsp->TOP.mmio_wstrb}
    , mmio_ready{vlSymsp->TOP.mmio_ready}
    , mem_req{vlSymsp->TOP.mem_req}
    , mem_we{vlSymsp->TOP.mem_we}
    , mem_wstrb{vlSymsp->TOP.mem_wstrb}
    , mem_ready{vlSymsp->TOP.mem_ready}
    , mem_rvalid{vlSymsp->TOP.mem_rvalid}
    , irq{vlSymsp->TOP.irq}
    , mmio_addr{vlSymsp->TOP.mmio_addr}
    , mmio_wdata{vlSymsp->TOP.mmio_wdata}
    , mmio_rdata{vlSymsp->TOP.mmio_rdata}
    , mem_addr{vlSymsp->TOP.mem_addr}
    , mem_wdata{vlSymsp->TOP.mem_wdata}
    , mem_rdata{vlSymsp->TOP.mem_rdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtinygpu_top::Vtinygpu_top(const char* _vcname__)
    : Vtinygpu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtinygpu_top::~Vtinygpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtinygpu_top___024root___eval_initial(Vtinygpu_top___024root* vlSelf);
void Vtinygpu_top___024root___eval_settle(Vtinygpu_top___024root* vlSelf);
void Vtinygpu_top___024root___eval(Vtinygpu_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vtinygpu_top___024root___eval_debug_assertions(Vtinygpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtinygpu_top___024root___final(Vtinygpu_top___024root* vlSelf);

static void _eval_initial_loop(Vtinygpu_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtinygpu_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtinygpu_top___024root___eval_settle(&(vlSymsp->TOP));
        Vtinygpu_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtinygpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtinygpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtinygpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtinygpu_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtinygpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtinygpu_top::final() {
    Vtinygpu_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtinygpu_top::hierName() const { return vlSymsp->name(); }
const char* Vtinygpu_top::modelName() const { return "Vtinygpu_top"; }
unsigned Vtinygpu_top::threads() const { return 1; }
