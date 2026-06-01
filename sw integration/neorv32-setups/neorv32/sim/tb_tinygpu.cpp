#include <cstdio>
#include <cinttypes>
#include "Vtinygpu_top.h"
#include "verilated.h"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// Clock tick: 2 half-cycles
void tick(Vtinygpu_top* top) {
    top->clk = 0;
    top->eval();
    main_time++;

    top->clk = 1;
    top->eval();
    main_time++;
}

// MMIO helpers
void mmio_write(Vtinygpu_top* top, uint32_t addr, uint32_t data) {
    top->mmio_valid = 1;
    top->mmio_we    = 1;
    top->mmio_addr  = addr;
    top->mmio_wdata = data;
    top->mmio_wstrb = 0xF;

    tick(top);  // one-cycle handshake

    top->mmio_valid = 0;
    top->mmio_we    = 0;
    top->mmio_wstrb = 0;
}

uint32_t mmio_read(Vtinygpu_top* top, uint32_t addr) {
    top->mmio_valid = 1;
    top->mmio_we    = 0;
    top->mmio_addr  = addr;

    tick(top);
    uint32_t r = top->mmio_rdata;

    top->mmio_valid = 0;
    return r;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* top = new Vtinygpu_top;

    // Reset + default inputs
    top->rst_n      = 0;
    top->mmio_valid = 0;
    top->mmio_we    = 0;
    top->mmio_addr  = 0;
    top->mmio_wdata = 0;
    top->mmio_wstrb = 0;

    // Dummy memory: will refine later
    top->mem_rdata  = 0;
    top->mem_ready  = 0;
    top->mem_rvalid = 0;

    for (int i = 0; i < 10; ++i) tick(top);
    top->rst_n = 1;

    // MMIO register offsets (tinygpu_regs.sv)
    constexpr uint32_t REGCTRL      = 0x00;
    constexpr uint32_t REGSTATUS    = 0x04;
    constexpr uint32_t REGCMDADDR   = 0x08;
    constexpr uint32_t REGDIRECTOP  = 0x0C;
    constexpr uint32_t REGSRC0ADDR  = 0x10;
    constexpr uint32_t REGSRC1ADDR  = 0x14;
    constexpr uint32_t REGBIASADDR  = 0x18;
    constexpr uint32_t REGDSTADDR   = 0x1C;
    constexpr uint32_t REGDIMM      = 0x20;
    constexpr uint32_t REGDIMN      = 0x24;
    constexpr uint32_t REGDIMK      = 0x28;
    constexpr uint32_t REGSTRIDE0   = 0x2C;
    constexpr uint32_t REGSTRIDE1   = 0x30;
    constexpr uint32_t REGSTRIDEDST = 0x34;
    constexpr uint32_t REGFLAGS     = 0x38;
    constexpr uint32_t REGIRQSTATUS = 0x54;  // {31:1=0, 0=irq_pending_q} [file:5]

    // Opcodes (tinygpu_pkg.sv)
    constexpr uint32_t OP_NOP     = 0x00;
    constexpr uint32_t OP_GEMM    = 0x01;
    constexpr uint32_t OP_GEMV    = 0x02;
    constexpr uint32_t OP_VEC_ADD = 0x03;
    constexpr uint32_t OP_VEC_MUL = 0x04;
    constexpr uint32_t OP_RELU    = 0x05;
    constexpr uint32_t OP_CLAMP   = 0x06;    // [file:6]

    uint32_t status0 = mmio_read(top, REGSTATUS);
    printf("Initial REGSTATUS = 0x%08" PRIx32 "\n", status0);

    // Program a minimal direct-mode VEC_ADD command

    // 1) Direct opcode
    mmio_write(top, REGDIRECTOP, OP_VEC_ADD);

    // 2) Dimensions (small but non-zero)
    mmio_write(top, REGDIMM, 1);
    mmio_write(top, REGDIMN, 1);
    mmio_write(top, REGDIMK, 1);  // [file:11]

    // 3) Strides in bytes (toy values)
    mmio_write(top, REGSTRIDE0, 1);
    mmio_write(top, REGSTRIDE1, 1);
    mmio_write(top, REGSTRIDEDST, 1);

    // 4) Flags = 0 (no bias, no relu/clamp/requant)
    mmio_write(top, REGFLAGS, 0); // [file:6][file:11]

    // 5) Dummy base addresses in external memory space
    mmio_write(top, REGSRC0ADDR, 0x00000000);
    mmio_write(top, REGSRC1ADDR, 0x00000100);
    mmio_write(top, REGDSTADDR,  0x00000200);
    mmio_write(top, REGBIASADDR, 0x00000300); // [file:9][file:11]

    // 6) Direct mode + IRQ enable in REGCTRL
    // REG_CTRL readback: {28'd0, direct_mode_o, irq_enable_o, 1'b0, 1'b0}
    // bits: [3]=directmode, [2]=irq_enable, [1]=0, [0]=0 when read.
    // We still use bit0 as 'start' write strobe (start_pulse_o). [file:5]
    uint32_t ctrl_base = 0b0000'0000'0000'0000'0000'0000'0000'1100;
    mmio_write(top, REGCTRL, ctrl_base);        // directmode=1, irq_enable=1, start=0
    mmio_write(top, REGCTRL, ctrl_base | 0x1);  // pulse start bit

    // Run for some cycles, simple memory model: ready=1, rvalid=0, rdata=0
    bool irq_seen = false;
    for (int i = 0; i < 5000; ++i) {
        top->mem_ready  = 1;
        top->mem_rvalid = 0;
        top->mem_rdata  = 0;   // DMA reads get zero, but handshake can still progress [file:9]

        tick(top);

        if ((i % 100) == 0) {
            uint32_t status = mmio_read(top, REGSTATUS);
            uint32_t irqst  = mmio_read(top, REGIRQSTATUS);

            bool busy         = status & (1u << 0);
            bool done_sticky  = status & (1u << 1);
            bool illegal_op   = status & (1u << 2);
            bool shape_error  = status & (1u << 3);
            bool memory_error = status & (1u << 4);
            bool unsupported  = status & (1u << 5);
            bool idle         = status & (1u << 6); // [file:5]

            printf("cycle %4d: STATUS=0x%08" PRIx32
                   " [busy=%d, done=%d, ill=%d, shape=%d, mem=%d, unsup=%d, idle=%d]"
                   " IRQST=0x%08" PRIx32 "\n",
                   i, status,
                   busy, done_sticky, illegal_op, shape_error, memory_error, unsupported, idle,
                   irqst);
        }

        if (top->irq && !irq_seen) {
            printf("IRQ asserted at time %" PRIu64 " (cycle %d)\n", main_time, i);
            irq_seen = true;
        }
    }

    printf("Simulation finished, time = %" PRIu64 "\n", main_time);

    delete top;
    return 0;
}