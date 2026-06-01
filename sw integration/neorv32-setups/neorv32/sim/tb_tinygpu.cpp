// =============================================================================
// tb_tinygpu.cpp
// Complete Verilator testbench for tinygpu_top.sv
//
// Tests:
//   1. Register read/write sanity
//   2. Soft reset — STATUS = READY
//   3. VEC_ADD  z[4] = {1,2,3,4} + {10,20,30,40} → {11,22,33,44}
//   4. GEMM     C[2][2] = A[2][8] * B[8][2]      → [[16,20],[4,4]]
//   5. RELU     y[4]    = max(0, {-5,3,-1,7})     → {0,3,0,7}
//   6. Performance counters — cycles > 0
//
// Memory model: 64KB flat array, 2-cycle read latency
// VCD output  : tinygpu_sim.vcd  (open in VaporView)
// =============================================================================

#include <cstdio>
#include <cstring>
#include <cinttypes>
#include <cassert>
#include "Vtinygpu_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

// ── Simulation time ──────────────────────────────────────────────────────────
static vluint64_t main_time = 0;
double sc_time_stamp() { return (double)main_time; }

// ── VCD tracer ───────────────────────────────────────────────────────────────
static VerilatedVcdC* vcd = nullptr;

// ── Simple 64KB memory model ─────────────────────────────────────────────────
static uint8_t sim_mem[65536];

static uint32_t mem_read32(uint32_t addr) {
    addr &= 0xFFFF;
    return  ((uint32_t)sim_mem[addr+0])        |
            ((uint32_t)sim_mem[addr+1] << 8)   |
            ((uint32_t)sim_mem[addr+2] << 16)  |
            ((uint32_t)sim_mem[addr+3] << 24);
}

static void mem_write32(uint32_t addr, uint32_t data, uint8_t strb) {
    addr &= 0xFFFF;
    if (strb & 1) sim_mem[addr+0] = (data >>  0) & 0xFF;
    if (strb & 2) sim_mem[addr+1] = (data >>  8) & 0xFF;
    if (strb & 4) sim_mem[addr+2] = (data >> 16) & 0xFF;
    if (strb & 8) sim_mem[addr+3] = (data >> 24) & 0xFF;
}

static void mem_write8(uint32_t addr, int8_t val) {
    sim_mem[addr & 0xFFFF] = (uint8_t)val;
}

static int8_t mem_read8(uint32_t addr) {
    return (int8_t)sim_mem[addr & 0xFFFF];
}

static int32_t mem_read32s(uint32_t addr) {
    return (int32_t)mem_read32(addr);
}

// ── Clock tick with memory model ─────────────────────────────────────────────
static int mem_resp_countdown = 0;
static uint32_t mem_pending_addr = 0;
static bool mem_pending_read = false;

void tick(Vtinygpu_top* top) {
    // falling edge
    top->clk = 0;
    top->eval();
    if (vcd) vcd->dump(main_time);
    main_time++;

    // ── memory model: handle DMA bus ──
    top->mem_ready  = 0;
    top->mem_rvalid = 0;
    top->mem_rdata  = 0;

    if (top->mem_req) {
        if (top->mem_we) {
            // write: immediate ack
            mem_write32(top->mem_addr, top->mem_wdata, top->mem_wstrb);
            top->mem_ready = 1;
        } else {
            // read: 2-cycle latency
            if (mem_resp_countdown == 0) {
                mem_pending_addr = top->mem_addr;
                mem_pending_read = true;
                mem_resp_countdown = 2;
            }
        }
    }

    if (mem_pending_read && mem_resp_countdown > 0) {
        mem_resp_countdown--;
        if (mem_resp_countdown == 0) {
            top->mem_rdata  = mem_read32(mem_pending_addr);
            top->mem_rvalid = 1;
            top->mem_ready  = 1;
            mem_pending_read = false;
        }
    }

    // rising edge
    top->clk = 1;
    top->eval();
    if (vcd) vcd->dump(main_time);
    main_time++;
}

// ── MMIO helpers ─────────────────────────────────────────────────────────────
#define TGPU_BASE  0x0000u  // use low addresses in standalone sim

#define REG_CTRL        (TGPU_BASE + 0x00)
#define REG_STATUS      (TGPU_BASE + 0x04)
#define REG_CMD_ADDR    (TGPU_BASE + 0x08)
#define REG_DIRECT_OP   (TGPU_BASE + 0x0C)
#define REG_SRC0_ADDR   (TGPU_BASE + 0x10)
#define REG_SRC1_ADDR   (TGPU_BASE + 0x14)
#define REG_BIAS_ADDR   (TGPU_BASE + 0x18)
#define REG_DST_ADDR    (TGPU_BASE + 0x1C)
#define REG_DIM_M       (TGPU_BASE + 0x20)
#define REG_DIM_N       (TGPU_BASE + 0x24)
#define REG_DIM_K       (TGPU_BASE + 0x28)
#define REG_STRIDE0     (TGPU_BASE + 0x2C)
#define REG_STRIDE1     (TGPU_BASE + 0x30)
#define REG_STRIDE_DST  (TGPU_BASE + 0x34)
#define REG_FLAGS       (TGPU_BASE + 0x38)
#define REG_CYCLE_COUNT (TGPU_BASE + 0x44)
#define REG_ACTIVE_CNT  (TGPU_BASE + 0x48)
#define REG_STALL_CNT   (TGPU_BASE + 0x4C)
#define REG_CMD_COUNT   (TGPU_BASE + 0x50)

// Opcodes
#define OP_GEMM    0x01
#define OP_VEC_ADD 0x03
#define OP_RELU    0x05

// Flags
#define FLAG_DST_INT32 (1u << 5)
#define FLAG_SIGNED    (1u << 6)

// STATUS bits
#define STATUS_BUSY  (1u << 0)
#define STATUS_READY (1u << 6)

// CTRL bits
#define CTRL_START      (1u << 0)
#define CTRL_SOFT_RESET (1u << 1)
#define CTRL_DIRECT     (1u << 3)

void mmio_write(Vtinygpu_top* top, uint32_t addr, uint32_t data) {
    top->mmio_valid = 1;
    top->mmio_we    = 1;
    top->mmio_addr  = addr;
    top->mmio_wdata = data;
    top->mmio_wstrb = 0xF;
    tick(top);
    top->mmio_valid = 0;
    top->mmio_we    = 0;
    top->mmio_wstrb = 0;
}

uint32_t mmio_read(Vtinygpu_top* top, uint32_t addr) {
    top->mmio_valid = 1;
    top->mmio_we    = 0;
    top->mmio_addr  = addr;
    top->mmio_wstrb = 0;
    tick(top);
    uint32_t r = top->mmio_rdata;
    top->mmio_valid = 0;
    return r;
}

// Wait for BUSY to clear (poll STATUS)
bool wait_done(Vtinygpu_top* top, int timeout = 50000) {
    for (int i = 0; i < timeout; i++) {
        uint32_t s = mmio_read(top, REG_STATUS);
        if (!(s & STATUS_BUSY)) return true;
        tick(top);
    }
    return false; // timeout
}

// ── Test infrastructure ───────────────────────────────────────────────────────
static int pass_count = 0;
static int fail_count = 0;

void check(const char* name, bool cond) {
    if (cond) {
        printf("  [PASS] %s\n", name);
        pass_count++;
    } else {
        printf("  [FAIL] %s\n", name);
        fail_count++;
    }
}

// ── MAIN ─────────────────────────────────────────────────────────────────────
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* top = new Vtinygpu_top;

    // VCD output
    vcd = new VerilatedVcdC;
    top->trace(vcd, 99);
    vcd->open("tinygpu_sim.vcd");

    // ── Init memory ──
    memset(sim_mem, 0, sizeof(sim_mem));

    // ── Reset ──
    top->rst_n      = 0;
    top->mmio_valid = 0;
    top->mmio_we    = 0;
    top->mmio_addr  = 0;
    top->mmio_wdata = 0;
    top->mmio_wstrb = 0;
    top->mem_rdata  = 0;
    top->mem_ready  = 0;
    top->mem_rvalid = 0;
    for (int i = 0; i < 10; i++) tick(top);
    top->rst_n = 1;
    for (int i = 0; i < 5;  i++) tick(top);

    printf("\n========================================\n");
    printf(" TinyGPU-ML Verilator Simulation\n");
    printf(" Tang Nano 20K / NEORV32\n");
    printf(" Array: 2x2 PEs, INT8 in, INT32 acc\n");
    printf("========================================\n\n");

    // ====================================================================
    // TEST 1 — Register read/write
    // ====================================================================
    printf("[TEST 1] Register read/write\n");

    mmio_write(top, REG_SRC0_ADDR, 0xDEADBEEF);
    uint32_t rb = mmio_read(top, REG_SRC0_ADDR);
    check("SRC0_ADDR read-back == 0xDEADBEEF", rb == 0xDEADBEEF);
    mmio_write(top, REG_SRC0_ADDR, 0); // clean up

    // ====================================================================
    // TEST 2 — Soft reset
    // ====================================================================
    printf("\n[TEST 2] Soft reset\n");

    mmio_write(top, REG_CTRL, CTRL_SOFT_RESET);
    for (int i = 0; i < 5; i++) tick(top);
    uint32_t status = mmio_read(top, REG_STATUS);
    check("STATUS[BUSY]=0 after reset",  !(status & STATUS_BUSY));
    check("STATUS[READY]=1 after reset",  (status & STATUS_READY));
    printf("  STATUS = 0x%08X\n", status);

    // ====================================================================
    // TEST 3 — VEC_ADD  z[4] = {1,2,3,4} + {10,20,30,40}
    //          Expected: {11, 22, 33, 44}
    // ====================================================================
    printf("\n[TEST 3] VEC_ADD z[4] = {1,2,3,4} + {10,20,30,40}\n");

    // Memory layout
    const uint32_t VEC_X   = 0x1000;
    const uint32_t VEC_Y   = 0x2000;
    const uint32_t VEC_Z   = 0x3000;

    // Write INT8 inputs to memory
    mem_write8(VEC_X+0, 1); mem_write8(VEC_X+1, 2);
    mem_write8(VEC_X+2, 3); mem_write8(VEC_X+3, 4);
    mem_write8(VEC_Y+0,10); mem_write8(VEC_Y+1,20);
    mem_write8(VEC_Y+2,30); mem_write8(VEC_Y+3,40);

    // Program registers
    mmio_write(top, REG_DIRECT_OP,  OP_VEC_ADD);
    mmio_write(top, REG_SRC0_ADDR,  VEC_X);
    mmio_write(top, REG_SRC1_ADDR,  VEC_Y);
    mmio_write(top, REG_DST_ADDR,   VEC_Z);
    mmio_write(top, REG_DIM_M,      1);
    mmio_write(top, REG_DIM_N,      4);
    mmio_write(top, REG_DIM_K,      1);
    mmio_write(top, REG_STRIDE0,    4);
    mmio_write(top, REG_STRIDE1,    4);
    mmio_write(top, REG_STRIDE_DST, 16);
    mmio_write(top, REG_FLAGS,      FLAG_DST_INT32 | FLAG_SIGNED);

    // Fire
    mmio_write(top, REG_CTRL, CTRL_DIRECT | CTRL_START);

    // Wait for completion
    if (!wait_done(top)) {
        printf("  TIMEOUT waiting for VEC_ADD\n");
        fail_count++;
    } else {
        int32_t z0 = mem_read32s(VEC_Z+0);
        int32_t z1 = mem_read32s(VEC_Z+4);
        int32_t z2 = mem_read32s(VEC_Z+8);
        int32_t z3 = mem_read32s(VEC_Z+12);
        printf("  z = {%d, %d, %d, %d}\n", z0, z1, z2, z3);
        check("VEC_ADD z[0]==11", z0 == 11);
        check("VEC_ADD z[1]==22", z1 == 22);
        check("VEC_ADD z[2]==33", z2 == 33);
        check("VEC_ADD z[3]==44", z3 == 44);
    }

    // ====================================================================
    // TEST 4 — GEMM  C[2][2] = A[2][8] * B[8][2]
    //          A = [[1,2,3,4,5,6,7,8],[1,1,1,1,1,1,1,1]]
    //          B col0={1,0,1,0,1,0,1,0} col1={0,1,0,1,0,1,0,1}
    //          C[0][0]=1+3+5+7=16  C[0][1]=2+4+6+8=20
    //          C[1][0]=4           C[1][1]=4
    // ====================================================================
    printf("\n[TEST 4] GEMM C[2][2] = A[2][8] * B[8][2]\n");

    const uint32_t MAT_A = 0x4000;
    const uint32_t MAT_B = 0x5000;
    const uint32_t MAT_C = 0x6000;

    // Write A (2 rows x 8 cols, INT8, row-major)
    int8_t a[2][8] = {{1,2,3,4,5,6,7,8},{1,1,1,1,1,1,1,1}};
    for (int r = 0; r < 2; r++)
        for (int c = 0; c < 8; c++)
            mem_write8(MAT_A + r*8 + c, a[r][c]);

    // Write B (8 rows x 2 cols, INT8, row-major)
    int8_t b[8][2] = {{1,0},{0,1},{1,0},{0,1},{1,0},{0,1},{1,0},{0,1}};
    for (int r = 0; r < 8; r++)
        for (int c = 0; c < 2; c++)
            mem_write8(MAT_B + r*2 + c, b[r][c]);

    // Program registers
    mmio_write(top, REG_DIRECT_OP,  OP_GEMM);
    mmio_write(top, REG_SRC0_ADDR,  MAT_A);
    mmio_write(top, REG_SRC1_ADDR,  MAT_B);
    mmio_write(top, REG_BIAS_ADDR,  0);
    mmio_write(top, REG_DST_ADDR,   MAT_C);
    mmio_write(top, REG_DIM_M,      2);
    mmio_write(top, REG_DIM_N,      2);
    mmio_write(top, REG_DIM_K,      8);
    mmio_write(top, REG_STRIDE0,    8);   // K bytes per row of A
    mmio_write(top, REG_STRIDE1,    2);   // N bytes per row of B
    mmio_write(top, REG_STRIDE_DST, 8);   // N*4 bytes per row of C
    mmio_write(top, REG_FLAGS,      FLAG_DST_INT32 | FLAG_SIGNED);

    // Fire
    mmio_write(top, REG_CTRL, CTRL_DIRECT | CTRL_START);

    if (!wait_done(top)) {
        printf("  TIMEOUT waiting for GEMM\n");
        fail_count++;
    } else {
        int32_t c00 = mem_read32s(MAT_C+0);
        int32_t c01 = mem_read32s(MAT_C+4);
        int32_t c10 = mem_read32s(MAT_C+8);
        int32_t c11 = mem_read32s(MAT_C+12);
        printf("  C = [[%d, %d], [%d, %d]]\n", c00, c01, c10, c11);
        check("GEMM C[0][0]==16", c00 == 16);
        check("GEMM C[0][1]==20", c01 == 20);
        check("GEMM C[1][0]==4",  c10 == 4);
        check("GEMM C[1][1]==4",  c11 == 4);
    }

    // ====================================================================
    // TEST 5 — RELU  y[4] = max(0, {-5, 3, -1, 7})
    //          Expected: {0, 3, 0, 7}
    // ====================================================================
    printf("\n[TEST 5] RELU y[4] = max(0, {-5,3,-1,7})\n");

    const uint32_t RELU_IN  = 0x7000;
    const uint32_t RELU_OUT = 0x8000;

    // Write INT32 inputs
    mem_write32(RELU_IN+0,  (uint32_t)(-5), 0xF);
    mem_write32(RELU_IN+4,  3,  0xF);
    mem_write32(RELU_IN+8,  (uint32_t)(-1), 0xF);
    mem_write32(RELU_IN+12, 7,  0xF);

    mmio_write(top, REG_DIRECT_OP,  OP_RELU);
    mmio_write(top, REG_SRC0_ADDR,  RELU_IN);
    mmio_write(top, REG_SRC1_ADDR,  0);
    mmio_write(top, REG_DST_ADDR,   RELU_OUT);
    mmio_write(top, REG_DIM_M,      1);
    mmio_write(top, REG_DIM_N,      4);
    mmio_write(top, REG_DIM_K,      1);
    mmio_write(top, REG_STRIDE0,    16);
    mmio_write(top, REG_STRIDE1,    16);
    mmio_write(top, REG_STRIDE_DST, 16);
    mmio_write(top, REG_FLAGS,      FLAG_DST_INT32 | FLAG_SIGNED);

    mmio_write(top, REG_CTRL, CTRL_DIRECT | CTRL_START);

    if (!wait_done(top)) {
        printf("  TIMEOUT waiting for RELU\n");
        fail_count++;
    } else {
        int32_t y0 = mem_read32s(RELU_OUT+0);
        int32_t y1 = mem_read32s(RELU_OUT+4);
        int32_t y2 = mem_read32s(RELU_OUT+8);
        int32_t y3 = mem_read32s(RELU_OUT+12);
        printf("  y = {%d, %d, %d, %d}\n", y0, y1, y2, y3);
        check("RELU y[0]==0", y0 == 0);
        check("RELU y[1]==3", y1 == 3);
        check("RELU y[2]==0", y2 == 0);
        check("RELU y[3]==7", y3 == 7);
    }

    // ====================================================================
    // TEST 6 — Performance counters
    // ====================================================================
    printf("\n[TEST 6] Performance counters\n");

    uint32_t cyc  = mmio_read(top, REG_CYCLE_COUNT);
    uint32_t act  = mmio_read(top, REG_ACTIVE_CNT);
    uint32_t stl  = mmio_read(top, REG_STALL_CNT);
    uint32_t cmds = mmio_read(top, REG_CMD_COUNT);
    printf("  Cycles : %u\n",  cyc);
    printf("  Active : %u\n",  act);
    printf("  Stalls : %u\n",  stl);
    printf("  Cmds   : %u\n",  cmds);
    check("Cycle count > 0",  cyc  > 0);
    check("Active <= Cycles", act  <= cyc);
    check("CMD count > 0",    cmds > 0);

    // ====================================================================
    // RESULTS
    // ====================================================================
    printf("\n========================================\n");
    printf(" Results: %d passed, %d failed\n", pass_count, fail_count);
    printf("========================================\n");
    printf(" Simulation time: %" PRIu64 " cycles\n", main_time / 2);
    printf(" VCD written to : tinygpu_sim.vcd\n");
    printf("========================================\n\n");

    if (vcd) { vcd->close(); delete vcd; }
    top->final();
    delete top;

    return (fail_count > 0) ? 1 : 0;
}