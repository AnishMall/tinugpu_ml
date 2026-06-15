#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <vector>

#include "Vtinygpu_top.h"
#include "verilated.h"

namespace {

constexpr uint32_t REG_CTRL = 0x00;
constexpr uint32_t REG_STATUS = 0x04;
constexpr uint32_t REG_CMD_ADDR = 0x08;
constexpr uint32_t REG_DIRECT_OP = 0x0c;
constexpr uint32_t REG_SRC0 = 0x10;
constexpr uint32_t REG_SRC1 = 0x14;
constexpr uint32_t REG_BIAS = 0x18;
constexpr uint32_t REG_DST = 0x1c;
constexpr uint32_t REG_M = 0x20;
constexpr uint32_t REG_N = 0x24;
constexpr uint32_t REG_K = 0x28;
constexpr uint32_t REG_STRIDE0 = 0x2c;
constexpr uint32_t REG_STRIDE1 = 0x30;
constexpr uint32_t REG_STRIDE_DST = 0x34;
constexpr uint32_t REG_FLAGS = 0x38;
constexpr uint32_t REG_SCALE = 0x3c;
constexpr uint32_t REG_SHIFT_ZP = 0x40;
constexpr uint32_t REG_CYCLE_COUNT = 0x44;
constexpr uint32_t REG_ACTIVE_COUNT = 0x48;
constexpr uint32_t REG_STALL_COUNT = 0x4c;
constexpr uint32_t REG_CMD_COUNT = 0x50;
constexpr uint32_t REG_IRQ_STATUS = 0x54;
constexpr uint32_t REG_CONV_IN_HW = 0x58;
constexpr uint32_t REG_CONV_CHANNELS = 0x5c;
constexpr uint32_t REG_CONV_CFG = 0x60;
constexpr uint32_t REG_CAPS = 0x64;

constexpr uint32_t CTRL_START = 1u << 0;
constexpr uint32_t CTRL_SOFT_RESET = 1u << 1;
constexpr uint32_t CTRL_IRQ_EN = 1u << 2;
constexpr uint32_t CTRL_DIRECT = 1u << 3;
constexpr uint32_t STATUS_DONE = 1u << 1;
constexpr uint32_t STATUS_ERR_OPCODE = 1u << 2;
constexpr uint32_t STATUS_ERR_SHAPE = 1u << 3;
constexpr uint32_t STATUS_ERR_MEMORY = 1u << 4;
constexpr uint32_t STATUS_ERR_FMT = 1u << 5;
constexpr uint32_t STATUS_ERRORS = STATUS_ERR_OPCODE | STATUS_ERR_SHAPE |
                                   STATUS_ERR_MEMORY | STATUS_ERR_FMT;

constexpr uint32_t FLAG_BIAS_EN = 1u << 0;
constexpr uint32_t FLAG_RELU_EN = 1u << 1;
constexpr uint32_t FLAG_CLAMP_EN = 1u << 2;
constexpr uint32_t FLAG_REQUANT_EN = 1u << 3;
constexpr uint32_t FLAG_DST_INT8 = 1u << 4;
constexpr uint32_t FLAG_DST_INT32 = 1u << 5;
constexpr uint32_t FLAG_SIGNED = 1u << 6;
constexpr uint32_t FLAG_I32_SIGNED = FLAG_DST_INT32 | FLAG_SIGNED;
constexpr uint32_t FLAG_I8_SIGNED = FLAG_DST_INT8 | FLAG_SIGNED;

constexpr uint8_t OP_GEMM = 0x01;
constexpr uint8_t OP_GEMV = 0x02;
constexpr uint8_t OP_VEC_ADD = 0x03;
constexpr uint8_t OP_VEC_MUL = 0x04;
constexpr uint8_t OP_RELU = 0x05;
constexpr uint8_t OP_CLAMP = 0x06;
constexpr uint8_t OP_CONV2D = 0x07;

constexpr uint32_t SRC0 = 0x1000;
constexpr uint32_t SRC1 = 0x3000;
constexpr uint32_t BIAS = 0x4000;
constexpr uint32_t DST = 0x5000;
constexpr uint32_t DESC = 0x7000;
constexpr size_t MEM_SIZE = 65536;

struct JobCounts {
  unsigned gemm = 0;
  unsigned vector = 0;
  unsigned conv = 0;
  unsigned error = 0;
};

uint8_t memory[MEM_SIZE];
uint64_t sim_time = 0;
uint32_t random_state = 0x31415926u;
uint32_t expected_cmd_count = 0;

uint32_t random_u32() {
  random_state = random_state * 1664525u + 1013904223u;
  return random_state;
}

int8_t random_i8() {
  return static_cast<int8_t>(static_cast<int>(random_u32() % 17u) - 8);
}

int32_t random_i32_small() {
  return static_cast<int32_t>(static_cast<int>(random_u32() % 33u) - 16);
}

int16_t random_shift() {
  return static_cast<int16_t>(static_cast<int>(random_u32() % 4u) - 1);
}

uint32_t read32(uint32_t address) {
  address &= 0xffffu;
  return static_cast<uint32_t>(memory[address]) |
         (static_cast<uint32_t>(memory[address + 1]) << 8) |
         (static_cast<uint32_t>(memory[address + 2]) << 16) |
         (static_cast<uint32_t>(memory[address + 3]) << 24);
}

void write32(uint32_t address, uint32_t data, uint8_t strobe = 0xf) {
  address &= 0xffffu;
  for (unsigned lane = 0; lane < 4; ++lane) {
    if (strobe & (1u << lane))
      memory[address + lane] = static_cast<uint8_t>(data >> (8 * lane));
  }
}

int8_t sat_i8(int32_t value) {
  if (value > 127) return 127;
  if (value < -128) return -128;
  return static_cast<int8_t>(value);
}

int32_t clamp32(int32_t value, int32_t lo, int32_t hi) {
  return std::max(lo, std::min(hi, value));
}

uint32_t pack_shift_zp(int16_t shift, int16_t zero_point) {
  return (static_cast<uint32_t>(static_cast<uint16_t>(shift)) << 16) |
         static_cast<uint16_t>(zero_point);
}

int8_t requant_i8(int32_t value, int32_t scale, int16_t shift, int16_t zero_point) {
  int32_t scaled = value * scale;
  if (shift >= 0)
    scaled = scaled >> shift;
  else
    scaled = scaled << (-shift);
  return sat_i8(scaled + zero_point);
}

int32_t gemm_post(int32_t acc, int32_t bias, uint32_t flags) {
  int32_t value = acc;
  if (flags & FLAG_BIAS_EN)
    value += bias;
  if ((flags & FLAG_RELU_EN) && value < 0)
    value = 0;
  if (flags & FLAG_CLAMP_EN)
    value = clamp32(value, -128, 127);
  return value;
}

int32_t vec_raw(uint8_t opcode, int8_t x, int8_t y) {
  switch (opcode) {
    case OP_VEC_ADD: return static_cast<int32_t>(x) + static_cast<int32_t>(y);
    case OP_VEC_MUL: return static_cast<int32_t>(x) * static_cast<int32_t>(y);
    case OP_RELU: return (x < 0) ? 0 : static_cast<int32_t>(x);
    case OP_CLAMP: return clamp32(static_cast<int32_t>(x), -128, 127);
    default: return 0;
  }
}

struct MemoryModel {
  bool pending = false;
  bool write = false;
  uint32_t address = 0;
  uint32_t data = 0;
  uint8_t strobe = 0;
  unsigned delay = 0;

  void drive(Vtinygpu_top *top) {
    top->mem_ready = 0;
    top->mem_rvalid = 0;
    top->mem_rdata = 0;

    if (!pending && top->mem_req) {
      pending = true;
      write = top->mem_we;
      address = top->mem_addr;
      data = top->mem_wdata;
      strobe = top->mem_wstrb;
      delay = random_u32() & 15u;
    }

    if (pending && delay != 0) {
      --delay;
      return;
    }

    if (pending) {
      top->mem_ready = 1;
      if (write) {
        write32(address, data, strobe);
      } else {
        top->mem_rdata = read32(address);
        top->mem_rvalid = 1;
      }
      pending = false;
    }
  }
};

MemoryModel mem_model;

void tick(Vtinygpu_top *top) {
  top->clk = 0;
  top->eval();
  mem_model.drive(top);
  ++sim_time;
  top->clk = 1;
  top->eval();
  ++sim_time;
}

void mmio_write(Vtinygpu_top *top, uint32_t address, uint32_t data) {
  top->mmio_valid = 1;
  top->mmio_we = 1;
  top->mmio_addr = address;
  top->mmio_wdata = data;
  top->mmio_wstrb = 0xf;
  tick(top);
  top->mmio_valid = 0;
  top->mmio_we = 0;
  top->mmio_wstrb = 0;
}

uint32_t mmio_read(Vtinygpu_top *top, uint32_t address) {
  top->mmio_valid = 1;
  top->mmio_we = 0;
  top->mmio_addr = address;
  top->mmio_wstrb = 0;
  tick(top);
  const uint32_t value = top->mmio_rdata;
  top->mmio_valid = 0;
  return value;
}

uint32_t wait_for_completion(Vtinygpu_top *top) {
  for (unsigned cycle = 0; cycle < 250000; ++cycle) {
    const uint32_t status = mmio_read(top, REG_STATUS);
    if (status & (STATUS_DONE | STATUS_ERRORS)) {
      for (unsigned drain = 0; drain < 128 && (top->mem_req || mem_model.pending);
           ++drain)
        tick(top);
      return status;
    }
    tick(top);
  }
  return 0;
}

bool finalize_command(Vtinygpu_top *top, uint32_t status, uint32_t expected_errors) {
  ++expected_cmd_count;
  const uint32_t status_read = mmio_read(top, REG_STATUS);
  if ((status_read & STATUS_DONE) == 0) {
    std::fprintf(stderr, "finalize fail: status done missing status=0x%08x read=0x%08x\n",
                 status, status_read);
    return false;
  }
  if ((status_read & STATUS_ERRORS) != expected_errors) {
    std::fprintf(stderr, "finalize fail: status errors mismatch read=0x%08x expected=0x%08x\n",
                 status_read & STATUS_ERRORS, expected_errors);
    return false;
  }
  const uint32_t irq_word = mmio_read(top, REG_IRQ_STATUS);
  if ((irq_word & 1u) == 0) {
    std::fprintf(stderr, "finalize fail: irq pending missing\n");
    return false;
  }
  const uint32_t cmd_count = mmio_read(top, REG_CMD_COUNT);
  if (cmd_count != expected_cmd_count) {
    std::fprintf(stderr, "finalize fail: cmd_count=%u expected=%u\n",
                 cmd_count, expected_cmd_count);
    return false;
  }
  mmio_write(top, REG_IRQ_STATUS, 1u);
  if ((mmio_read(top, REG_IRQ_STATUS) & 1u) != 0) {
    std::fprintf(stderr, "finalize fail: irq clear failed\n");
    return false;
  }
  return true;
}

void write_descriptor_common(uint8_t opcode, uint32_t flags, uint16_t m, uint16_t n,
                             uint16_t k, uint16_t stride0, uint16_t stride1,
                             uint16_t stride_dst, int32_t scale, int16_t shift,
                             int16_t zero_point, uint32_t src0, uint32_t src1,
                             uint32_t bias, uint32_t dst) {
  write32(DESC + 0 * 4, opcode);
  write32(DESC + 1 * 4, flags);
  write32(DESC + 2 * 4, src0);
  write32(DESC + 3 * 4, src1);
  write32(DESC + 4 * 4, bias);
  write32(DESC + 5 * 4, dst);
  write32(DESC + 6 * 4, m);
  write32(DESC + 7 * 4, n);
  write32(DESC + 8 * 4, k);
  write32(DESC + 9 * 4, stride0);
  write32(DESC + 10 * 4, stride1);
  write32(DESC + 11 * 4, stride_dst);
  write32(DESC + 12 * 4, static_cast<uint32_t>(scale));
  write32(DESC + 13 * 4, pack_shift_zp(shift, zero_point));
}

uint32_t run_direct_command(Vtinygpu_top *top, uint8_t opcode, uint32_t flags,
                            uint16_t m, uint16_t n, uint16_t k,
                            uint16_t stride0, uint16_t stride1, uint16_t stride_dst,
                            int32_t scale = 0, int16_t shift = 0, int16_t zero_point = 0,
                            uint32_t src0 = SRC0, uint32_t src1 = SRC1,
                            uint32_t bias = 0, uint32_t dst = DST) {
  mmio_write(top, REG_DIRECT_OP, opcode);
  mmio_write(top, REG_SRC0, src0);
  mmio_write(top, REG_SRC1, src1);
  mmio_write(top, REG_BIAS, bias);
  mmio_write(top, REG_DST, dst);
  mmio_write(top, REG_M, m);
  mmio_write(top, REG_N, n);
  mmio_write(top, REG_K, k);
  mmio_write(top, REG_STRIDE0, stride0);
  mmio_write(top, REG_STRIDE1, stride1);
  mmio_write(top, REG_STRIDE_DST, stride_dst);
  mmio_write(top, REG_FLAGS, flags);
  mmio_write(top, REG_SCALE, static_cast<uint32_t>(scale));
  mmio_write(top, REG_SHIFT_ZP, pack_shift_zp(shift, zero_point));
  mmio_write(top, REG_CTRL, CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
  return wait_for_completion(top);
}

uint32_t run_descriptor_command(Vtinygpu_top *top, uint8_t opcode, uint32_t flags,
                                uint16_t m, uint16_t n, uint16_t k,
                                uint16_t stride0, uint16_t stride1, uint16_t stride_dst,
                                int32_t scale = 0, int16_t shift = 0,
                                int16_t zero_point = 0, uint32_t src0 = SRC0,
                                uint32_t src1 = SRC1, uint32_t bias = 0,
                                uint32_t dst = DST) {
  write_descriptor_common(opcode, flags, m, n, k, stride0, stride1, stride_dst,
                          scale, shift, zero_point, src0, src1, bias, dst);
  mmio_write(top, REG_CMD_ADDR, DESC);
  mmio_write(top, REG_CTRL, CTRL_IRQ_EN | CTRL_START);
  return wait_for_completion(top);
}

uint32_t run_invalid_conv_descriptor(Vtinygpu_top *top, uint8_t bad_version) {
  write_descriptor_common(OP_CONV2D, FLAG_I32_SIGNED, 0, 0, 0, 0, 0, 0,
                          0, 0, 0, SRC0, SRC1, 0, DST);
  write32(DESC + 14 * 4, bad_version);
  write32(DESC + 15 * 4, (3u << 16) | 3u);
  write32(DESC + 16 * 4, (1u << 16) | 1u);
  write32(DESC + 17 * 4, 0x00111133u);
  mmio_write(top, REG_CMD_ADDR, DESC);
  mmio_write(top, REG_CTRL, CTRL_IRQ_EN | CTRL_START);
  return wait_for_completion(top);
}

bool run_mmio_protocol_checks(Vtinygpu_top *top) {
  const uint32_t caps = mmio_read(top, REG_CAPS);
  if ((caps >> 24) != 1u) {
    std::fprintf(stderr, "MMIO check fail: caps=0x%08x bad ABI\n", caps);
    return false;
  }
  if ((caps & 0xffu) != 0x44u) {
    std::fprintf(stderr, "MMIO check fail: caps=0x%08x bad tile encoding\n", caps);
    return false;
  }

  mmio_write(top, REG_CMD_ADDR, 0x12345678u);
  mmio_write(top, REG_SCALE, 0x01020304u);
  mmio_write(top, REG_SHIFT_ZP, 0x0003fffcu);
  mmio_write(top, REG_CONV_IN_HW, (5u << 16) | 7u);
  mmio_write(top, REG_CONV_CHANNELS, (9u << 16) | 3u);
  mmio_write(top, REG_CONV_CFG, 0x00112133u);
  mmio_write(top, REG_CTRL, CTRL_IRQ_EN | CTRL_DIRECT);

  if (mmio_read(top, REG_CMD_ADDR) != 0x12345678u) {
    std::fprintf(stderr, "MMIO check fail: cmd_addr readback\n");
    return false;
  }
  if (mmio_read(top, REG_SCALE) != 0x01020304u) {
    std::fprintf(stderr, "MMIO check fail: scale readback\n");
    return false;
  }
  if (mmio_read(top, REG_SHIFT_ZP) != 0x0003fffcu) {
    std::fprintf(stderr, "MMIO check fail: shift/zp readback\n");
    return false;
  }
  if (mmio_read(top, REG_CONV_IN_HW) != ((5u << 16) | 7u)) {
    std::fprintf(stderr, "MMIO check fail: conv_in_hw readback\n");
    return false;
  }
  if (mmio_read(top, REG_CONV_CHANNELS) != ((9u << 16) | 3u)) {
    std::fprintf(stderr, "MMIO check fail: conv_channels readback\n");
    return false;
  }
  if (mmio_read(top, REG_CONV_CFG) != 0x00112133u) {
    std::fprintf(stderr, "MMIO check fail: conv_cfg readback\n");
    return false;
  }
  if ((mmio_read(top, REG_CTRL) & (CTRL_IRQ_EN | CTRL_DIRECT)) !=
      (CTRL_IRQ_EN | CTRL_DIRECT)) {
    std::fprintf(stderr, "MMIO check fail: ctrl readback 0x%08x\n", mmio_read(top, REG_CTRL));
    return false;
  }

  mmio_write(top, REG_CTRL, CTRL_SOFT_RESET);
  if (mmio_read(top, REG_CMD_ADDR) != 0u) {
    std::fprintf(stderr, "MMIO check fail: cmd_addr soft reset\n");
    return false;
  }
  if (mmio_read(top, REG_SCALE) != 0u) {
    std::fprintf(stderr, "MMIO check fail: scale soft reset\n");
    return false;
  }
  if (mmio_read(top, REG_SHIFT_ZP) != 0u) {
    std::fprintf(stderr, "MMIO check fail: shift/zp soft reset\n");
    return false;
  }
  if (mmio_read(top, REG_CONV_CFG) != 0u) {
    std::fprintf(stderr, "MMIO check fail: conv_cfg soft reset\n");
    return false;
  }
  if ((mmio_read(top, REG_CTRL) & (CTRL_IRQ_EN | CTRL_DIRECT)) != 0u) {
    std::fprintf(stderr, "MMIO check fail: ctrl soft reset 0x%08x\n", mmio_read(top, REG_CTRL));
    return false;
  }
  (void)mmio_read(top, REG_CYCLE_COUNT);
  (void)mmio_read(top, REG_ACTIVE_COUNT);
  (void)mmio_read(top, REG_STALL_COUNT);
  return true;
}

bool run_vector_job(Vtinygpu_top *top) {
  const unsigned length = 1 + random_u32() % 12;
  const uint8_t opcode = [=]() {
    switch (random_u32() % 4u) {
      case 0: return OP_VEC_ADD;
      case 1: return OP_VEC_MUL;
      case 2: return OP_RELU;
      default: return OP_CLAMP;
    }
  }();
  uint32_t flags = FLAG_SIGNED;
  const bool use_int8 = (random_u32() & 1u) != 0;
  const bool use_descriptor = (random_u32() & 1u) != 0;
  const bool use_relu = (random_u32() & 1u) != 0;
  const bool use_clamp = (random_u32() & 1u) != 0;
  const bool use_requant = use_int8 && ((random_u32() & 1u) != 0);
  const int32_t scale = use_requant ? (1 + static_cast<int32_t>(random_u32() % 3u)) : 0;
  const int16_t shift = use_requant ? random_shift() : 0;
  const int16_t zero_point = use_requant ? static_cast<int16_t>((random_u32() % 9u) - 4u) : 0;

  if (use_int8) flags |= FLAG_DST_INT8;
  else flags |= FLAG_DST_INT32;
  if (use_relu) flags |= FLAG_RELU_EN;
  if (use_clamp) flags |= FLAG_CLAMP_EN;
  if (use_requant) flags |= FLAG_REQUANT_EN;

  std::memset(memory + SRC0, 0, 128);
  std::memset(memory + SRC1, 0, 128);
  std::memset(memory + DST, 0, 128);
  std::vector<int32_t> expected_i32(length, 0);
  std::vector<int8_t> expected_i8(length, 0);

  for (unsigned i = 0; i < length; ++i) {
    const int8_t x = random_i8();
    const int8_t y = random_i8();
    memory[SRC0 + i] = static_cast<uint8_t>(x);
    memory[SRC1 + i] = static_cast<uint8_t>(y);
    int32_t value = vec_raw(opcode, x, y);
    if ((flags & FLAG_RELU_EN) && value < 0)
      value = 0;
    if (flags & FLAG_CLAMP_EN)
      value = clamp32(value, -128, 127);
    expected_i32[i] = value;
    expected_i8[i] = (flags & FLAG_REQUANT_EN) ?
      requant_i8(value, scale, shift, zero_point) : sat_i8(value);
  }

  const uint32_t status = use_descriptor ?
    run_descriptor_command(top, opcode, flags, length, 1, 1, 1, 1,
                           use_int8 ? 1 : 4, scale, shift, zero_point) :
    run_direct_command(top, opcode, flags, length, 1, 1, 1, 1,
                       use_int8 ? 1 : 4, scale, shift, zero_point);
  if (!finalize_command(top, status, 0)) return false;
  for (unsigned i = 0; i < length; ++i) {
    if (use_int8) {
      if (static_cast<int8_t>(memory[DST + i]) != expected_i8[i])
        return false;
    } else if (static_cast<int32_t>(read32(DST + 4 * i)) != expected_i32[i]) {
      return false;
    }
  }
  return true;
}

bool run_gemm_job(Vtinygpu_top *top) {
  const unsigned m = 1 + random_u32() % 5;
  const unsigned n = 1 + random_u32() % 5;
  const unsigned k = 1 + random_u32() % 20;
  uint32_t flags = FLAG_SIGNED;
  const bool use_bias = (random_u32() & 1u) != 0;
  const bool use_descriptor = (random_u32() & 1u) != 0;
  const bool use_relu = (random_u32() & 1u) != 0;
  const bool use_clamp = (random_u32() & 1u) != 0;
  const bool use_int8 = (random_u32() & 1u) != 0;
  const bool use_requant = use_int8 && ((random_u32() & 1u) != 0);
  const int32_t scale = use_requant ? (1 + static_cast<int32_t>(random_u32() % 3u)) : 0;
  const int16_t shift = use_requant ? random_shift() : 0;
  const int16_t zero_point = use_requant ? static_cast<int16_t>((random_u32() % 9u) - 4u) : 0;

  if (use_bias) flags |= FLAG_BIAS_EN;
  if (use_relu) flags |= FLAG_RELU_EN;
  if (use_clamp) flags |= FLAG_CLAMP_EN;
  if (use_requant) flags |= FLAG_REQUANT_EN;
  if (use_int8) flags |= FLAG_DST_INT8;
  else flags |= FLAG_DST_INT32;

  std::vector<int8_t> a(m * k), b(k * n);
  std::vector<int32_t> bias(n, 0), expected_i32(m * n, 0);
  std::vector<int8_t> expected_i8(m * n, 0);
  for (auto &value : a) value = random_i8();
  for (auto &value : b) value = random_i8();
  if (use_bias) {
    for (auto &value : bias) value = random_i32_small();
  }

  for (unsigned row = 0; row < m; ++row) {
    for (unsigned col = 0; col < n; ++col) {
      int32_t acc = 0;
      for (unsigned kk = 0; kk < k; ++kk)
        acc += a[row * k + kk] * b[kk * n + col];
      const int32_t post = gemm_post(acc, bias[col], flags);
      expected_i32[row * n + col] = post;
      expected_i8[row * n + col] = (flags & FLAG_REQUANT_EN) ?
        requant_i8(post, scale, shift, zero_point) : sat_i8(post);
    }
  }

  std::memset(memory + SRC0, 0, 4096);
  std::memset(memory + SRC1, 0, 4096);
  std::memset(memory + BIAS, 0, 1024);
  std::memset(memory + DST, 0, 4096);
  for (unsigned i = 0; i < a.size(); ++i) memory[SRC0 + i] = static_cast<uint8_t>(a[i]);
  for (unsigned i = 0; i < b.size(); ++i) memory[SRC1 + i] = static_cast<uint8_t>(b[i]);
  for (unsigned i = 0; i < bias.size(); ++i) write32(BIAS + 4 * i, static_cast<uint32_t>(bias[i]));

  const uint32_t status = use_descriptor ?
    run_descriptor_command(top, OP_GEMM, flags, m, n, k, k, n,
                           use_int8 ? n : n * 4, scale, shift, zero_point,
                           SRC0, SRC1, use_bias ? BIAS : 0, DST) :
    run_direct_command(top, OP_GEMM, flags, m, n, k, k, n,
                       use_int8 ? n : n * 4, scale, shift, zero_point,
                       SRC0, SRC1, use_bias ? BIAS : 0, DST);
  if (!finalize_command(top, status, 0)) return false;
  for (unsigned i = 0; i < expected_i32.size(); ++i) {
    if (use_int8) {
      if (static_cast<int8_t>(memory[DST + i]) != expected_i8[i])
        return false;
    } else if (static_cast<int32_t>(read32(DST + 4 * i)) != expected_i32[i]) {
      return false;
    }
  }
  return true;
}

bool run_conv_job(Vtinygpu_top *top) {
  const unsigned input_h = 2 + random_u32() % 4;
  const unsigned input_w = 2 + random_u32() % 4;
  const unsigned input_c = 1 + random_u32() % 3;
  const unsigned output_c = 1 + random_u32() % 5;
  const unsigned kernel = (random_u32() & 1u) ? 1u : 3u;
  const unsigned stride_h = 1 + (random_u32() & 1u);
  const unsigned stride_w = 1 + (random_u32() & 1u);
  const unsigned pad_h = (kernel == 3u) ? (random_u32() & 1u) : 0u;
  const unsigned pad_w = (kernel == 3u) ? (random_u32() & 1u) : 0u;
  if (input_h + 2 * pad_h < kernel || input_w + 2 * pad_w < kernel)
    return true;

  const unsigned output_h = (input_h + 2 * pad_h - kernel) / stride_h + 1;
  const unsigned output_w = (input_w + 2 * pad_w - kernel) / stride_w + 1;
  const unsigned flat_k = kernel * kernel * input_c;
  uint32_t flags = FLAG_SIGNED;
  const bool use_bias = (random_u32() & 1u) != 0;
  const bool use_descriptor = (random_u32() & 1u) != 0;
  const bool use_relu = (random_u32() & 1u) != 0;
  const bool use_clamp = (random_u32() & 1u) != 0;
  const bool use_int8 = (random_u32() & 1u) != 0;
  const bool use_requant = use_int8 && ((random_u32() & 1u) != 0);
  const bool use_explicit_stride = (random_u32() & 1u) != 0;
  const int32_t scale = use_requant ? (1 + static_cast<int32_t>(random_u32() % 3u)) : 0;
  const int16_t shift = use_requant ? random_shift() : 0;
  const int16_t zero_point = use_requant ? static_cast<int16_t>((random_u32() % 9u) - 4u) : 0;

  if (use_bias) flags |= FLAG_BIAS_EN;
  if (use_relu) flags |= FLAG_RELU_EN;
  if (use_clamp) flags |= FLAG_CLAMP_EN;
  if (use_requant) flags |= FLAG_REQUANT_EN;
  if (use_int8) flags |= FLAG_DST_INT8;
  else flags |= FLAG_DST_INT32;

  std::vector<int8_t> input(input_h * input_w * input_c);
  std::vector<int8_t> weights(flat_k * output_c);
  std::vector<int32_t> bias(output_c, 0);
  std::vector<int32_t> expected_i32(output_h * output_w * output_c, 0);
  std::vector<int8_t> expected_i8(output_h * output_w * output_c, 0);
  for (auto &value : input) value = random_i8();
  for (auto &value : weights) value = random_i8();
  if (use_bias)
    for (auto &value : bias) value = random_i32_small();

  for (unsigned oy = 0; oy < output_h; ++oy) {
    for (unsigned ox = 0; ox < output_w; ++ox) {
      for (unsigned oc = 0; oc < output_c; ++oc) {
        int32_t sum = 0;
        for (unsigned ky = 0; ky < kernel; ++ky) {
          for (unsigned kx = 0; kx < kernel; ++kx) {
            const int iy = static_cast<int>(oy * stride_h + ky) - static_cast<int>(pad_h);
            const int ix = static_cast<int>(ox * stride_w + kx) - static_cast<int>(pad_w);
            if (iy < 0 || ix < 0 || iy >= static_cast<int>(input_h) ||
                ix >= static_cast<int>(input_w))
              continue;
            for (unsigned ic = 0; ic < input_c; ++ic) {
              const unsigned in_index = (iy * input_w + ix) * input_c + ic;
              const unsigned wt_index = (((ky * kernel) + kx) * input_c + ic) * output_c + oc;
              sum += input[in_index] * weights[wt_index];
            }
          }
        }
        const unsigned out_index = (oy * output_w + ox) * output_c + oc;
        const int32_t post = gemm_post(sum, bias[oc], flags);
        expected_i32[out_index] = post;
        expected_i8[out_index] = (flags & FLAG_REQUANT_EN) ?
          requant_i8(post, scale, shift, zero_point) : sat_i8(post);
      }
    }
  }

  std::memset(memory + SRC0, 0, 8192);
  std::memset(memory + SRC1, 0, 8192);
  std::memset(memory + BIAS, 0, 1024);
  std::memset(memory + DST, 0, 8192);
  for (unsigned i = 0; i < input.size(); ++i) memory[SRC0 + i] = static_cast<uint8_t>(input[i]);
  for (unsigned i = 0; i < weights.size(); ++i) memory[SRC1 + i] = static_cast<uint8_t>(weights[i]);
  for (unsigned i = 0; i < bias.size(); ++i) write32(BIAS + 4 * i, static_cast<uint32_t>(bias[i]));

  mmio_write(top, REG_CONV_IN_HW, (input_h << 16) | input_w);
  mmio_write(top, REG_CONV_CHANNELS, (output_c << 16) | input_c);
  mmio_write(top, REG_CONV_CFG,
             (pad_h << 20) | (pad_w << 16) |
             (stride_h << 12) | (stride_w << 8) |
             (kernel << 4) | kernel);
  const uint16_t stride0 = use_explicit_stride ? static_cast<uint16_t>(input_w * input_c) : 0;
  const uint16_t stride1 = use_explicit_stride ? static_cast<uint16_t>(output_c) : 0;
  const uint16_t stride_dst = use_explicit_stride ?
    static_cast<uint16_t>(output_c * (use_int8 ? 1u : 4u)) : 0;
  uint32_t status = 0;
  if (use_descriptor) {
    write_descriptor_common(OP_CONV2D, flags, 0, 0, 0, stride0, stride1, stride_dst,
                            scale, shift, zero_point, SRC0, SRC1,
                            use_bias ? BIAS : 0, DST);
    write32(DESC + 14 * 4, 1u);
    write32(DESC + 15 * 4, (input_h << 16) | input_w);
    write32(DESC + 16 * 4, (output_c << 16) | input_c);
    write32(DESC + 17 * 4,
            (pad_h << 20) | (pad_w << 16) |
            (stride_h << 12) | (stride_w << 8) |
            (kernel << 4) | kernel);
    mmio_write(top, REG_CMD_ADDR, DESC);
    mmio_write(top, REG_CTRL, CTRL_IRQ_EN | CTRL_START);
    status = wait_for_completion(top);
  } else {
    status = run_direct_command(top, OP_CONV2D, flags, 0, 0, 0,
                                stride0, stride1, stride_dst,
                                scale, shift, zero_point,
                                SRC0, SRC1, use_bias ? BIAS : 0, DST);
  }
  if (!finalize_command(top, status, 0)) return false;
  for (unsigned i = 0; i < expected_i32.size(); ++i) {
    if (use_int8) {
      if (static_cast<int8_t>(memory[DST + i]) != expected_i8[i])
        return false;
    } else if (static_cast<int32_t>(read32(DST + 4 * i)) != expected_i32[i]) {
      return false;
    }
  }
  return true;
}

bool run_error_job(Vtinygpu_top *top) {
  const unsigned mode = random_u32() % 5u;
  uint32_t status = 0;
  switch (mode) {
    case 0:
      status = run_direct_command(top, 0xff, FLAG_I32_SIGNED, 1, 1, 1, 1, 1, 4);
      return finalize_command(top, status, STATUS_ERR_OPCODE);
    case 1:
      mmio_write(top, REG_CONV_IN_HW, (3u << 16) | 3u);
      mmio_write(top, REG_CONV_CHANNELS, (1u << 16) | 1u);
      mmio_write(top, REG_CONV_CFG, 0x00001122u);
      status = run_direct_command(top, OP_CONV2D, FLAG_I32_SIGNED, 0, 0, 0, 0, 0, 0);
      return finalize_command(top, status, STATUS_ERR_SHAPE);
    case 2:
      status = run_invalid_conv_descriptor(top, 2);
      return finalize_command(top, status, STATUS_ERR_SHAPE);
    case 3:
      status = run_direct_command(top, OP_GEMM, FLAG_I32_SIGNED, 0, 2, 2, 2, 2, 8);
      return finalize_command(top, status, STATUS_ERR_SHAPE);
    default:
      status = run_direct_command(top, OP_GEMM, FLAG_DST_INT8 | FLAG_DST_INT32, 2, 2, 2, 2, 2, 8);
      return finalize_command(top, status, STATUS_ERR_FMT);
  }
}

}  // namespace

double sc_time_stamp() { return static_cast<double>(sim_time); }

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  auto *top = new Vtinygpu_top;
  std::memset(memory, 0, sizeof(memory));
  top->clk = 0;
  top->rst_n = 0;
  top->mmio_valid = 0;
  top->mmio_we = 0;
  top->mmio_addr = 0;
  top->mmio_wdata = 0;
  top->mmio_wstrb = 0;
  top->mem_ready = 0;
  top->mem_rvalid = 0;
  top->mem_rdata = 0;
  for (unsigned i = 0; i < 4; ++i) tick(top);
  top->rst_n = 1;
  for (unsigned i = 0; i < 4; ++i) tick(top);

  if (!run_mmio_protocol_checks(top)) {
    std::fprintf(stderr, "MMIO protocol checks failed\n");
    delete top;
    return 1;
  }

  constexpr unsigned jobs = 1000;
  JobCounts counts;
  for (unsigned job = 0; job < jobs; ++job) {
    bool pass = false;
    switch (job % 4u) {
      case 0:
        pass = run_gemm_job(top);
        counts.gemm++;
        break;
      case 1:
        pass = run_vector_job(top);
        counts.vector++;
        break;
      case 2:
        pass = run_conv_job(top);
        counts.conv++;
        break;
      default:
        pass = run_error_job(top);
        counts.error++;
        break;
    }
    if (!pass) {
      std::fprintf(stderr, "differential failure at deterministic job %u\n", job);
      delete top;
      return 1;
    }
  }

  top->final();
  Verilated::threadContextp()->coveragep()->write("build/coverage.dat");
  delete top;
  std::printf("Verilator differential PASS: %u jobs, memory latency 0-15 cycles\n", jobs);
  std::printf("job_counts gemm=%u vector=%u conv=%u error=%u\n",
              counts.gemm, counts.vector, counts.conv, counts.error);
  std::printf("coverage written to build/coverage.dat (use make coverage-report for ranking)\n");
  return 0;
}
