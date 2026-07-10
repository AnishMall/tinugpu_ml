# =============================================
# TinyGPU-ML cocotb Python Testbench
# Level 4 — Industry Standard Verification
# FIXED: Background memory responder
# =============================================
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
import numpy as np
import random

# =============================================
# REGISTER MAP
# =============================================
REG_CTRL = 0x00
REG_STATUS = 0x04
REG_DIRECT_OP = 0x0C
REG_SRC0 = 0x10
REG_SRC1 = 0x14
REG_BIAS = 0x18
REG_DST = 0x1C
REG_M = 0x20
REG_N = 0x24
REG_K = 0x28
REG_STRIDE0 = 0x2C
REG_STRIDE1 = 0x30
REG_STRIDE_DST = 0x34
REG_FLAGS = 0x38
REG_CONV_IN_HW = 0x58
REG_CONV_CHANNELS = 0x5C
REG_CONV_CFG = 0x60

CTRL_START = 0x01
CTRL_RESET = 0x02
CTRL_DIRECT = 0x08

FLAG_DST_INT32 = 1 << 5
FLAG_SIGNED = 1 << 6

OP_GEMM = 0x01
OP_VEC_ADD = 0x03
OP_RELU = 0x05
OP_CONV2D = 0x07

SRC0_ADDR = 0x1000
SRC1_ADDR = 0x2000
DST_ADDR = 0x3000

# =============================================
# FLAT MEMORY MODEL (64KB)
# =============================================
memory = bytearray(65536)


def mem_write8(addr, val):
    memory[addr & 0xFFFF] = int(val) & 0xFF


def mem_read8(addr):
    return memory[addr & 0xFFFF]


def mem_write32(addr, val):
    addr = addr & 0xFFFF
    val = int(val) & 0xFFFFFFFF
    for i in range(4):
        memory[addr + i] = (val >> (8 * i)) & 0xFF


def mem_read32s(addr):
    addr = addr & 0xFFFF
    val = 0
    for i in range(4):
        val |= memory[addr + i] << (8 * i)
    if val >= 0x80000000:
        val -= 0x100000000
    return val


# =============================================
# BACKGROUND MEMORY RESPONDER
# Runs continuously — never misses a request!
# =============================================
async def memory_responder(dut):
    """Continuous background task: respond to ALL hardware memory requests"""
    dut.mem_ready.value = 0
    dut.mem_rvalid.value = 0
    dut.mem_rdata.value = 0

    while True:
        await RisingEdge(dut.clk)

        dut.mem_ready.value = 0
        dut.mem_rvalid.value = 0

        if dut.mem_req.value == 1:
            addr = int(dut.mem_addr.value) & 0xFFFF
            we = int(dut.mem_we.value)
            wdata = int(dut.mem_wdata.value)
            wstrb = int(dut.mem_wstrb.value)

            if we:
                for i in range(4):
                    if wstrb & (1 << i):
                        memory[addr + i] = (wdata >> (8 * i)) & 0xFF
            else:
                val = 0
                for i in range(4):
                    val |= memory[addr + i] << (8 * i)
                dut.mem_rdata.value = val
                dut.mem_rvalid.value = 1

            dut.mem_ready.value = 1


# =============================================
# COCOTB HELPERS
# =============================================
async def mmio_write(dut, addr, data):
    await RisingEdge(dut.clk)
    dut.mmio_valid.value = 1
    dut.mmio_we.value = 1
    dut.mmio_addr.value = addr
    dut.mmio_wdata.value = data
    dut.mmio_wstrb.value = 0xF
    await RisingEdge(dut.clk)
    dut.mmio_valid.value = 0
    dut.mmio_we.value = 0


async def mmio_read(dut, addr):
    await RisingEdge(dut.clk)
    dut.mmio_valid.value = 1
    dut.mmio_we.value = 0
    dut.mmio_addr.value = addr
    dut.mmio_wstrb.value = 0
    await RisingEdge(dut.clk)
    val = int(dut.mmio_rdata.value)
    dut.mmio_valid.value = 0
    return val


async def wait_done(dut, timeout=2000):
    """Poll STATUS until done — memory_responder handles all DMA in background"""
    for _ in range(timeout):
        await RisingEdge(dut.clk)
        status = await mmio_read(dut, REG_STATUS)
        if status & 0x02:
            # Extra cycles: ensure all pending writes complete
            for _ in range(8):
                await RisingEdge(dut.clk)
            return True
    return False


async def reset_dut(dut):
    dut.rst_n.value = 0
    dut.mmio_valid.value = 0
    dut.mmio_we.value = 0
    dut.mmio_wstrb.value = 0
    for _ in range(4):
        await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    for _ in range(4):
        await RisingEdge(dut.clk)


# =============================================
# PYTHON GOLDEN MODELS
# =============================================
def golden_gemm(A, B):
    A = np.array(A, dtype=np.int8)
    B = np.array(B, dtype=np.int8)
    return (A.astype(np.int32) @ B.astype(np.int32)).tolist()


def golden_vec_add(x, y):
    return [int(np.int8(a)) + int(np.int8(b)) for a, b in zip(x, y)]


def golden_relu(x):
    return [max(0, int(np.int32(v))) for v in x]


def golden_conv2d(image, kernel):
    ih, iw = len(image), len(image[0])
    kh, kw = len(kernel), len(kernel[0])
    oh, ow = ih - kh + 1, iw - kw + 1
    out = [[0] * ow for _ in range(oh)]
    for i in range(oh):
        for j in range(ow):
            for ki in range(kh):
                for kj in range(kw):
                    out[i][j] += int(np.int8(image[i + ki][j + kj])) * int(
                        np.int8(kernel[ki][kj])
                    )
    return out


def golden_conv2d_same_pad(image, kernel):
    ih, iw = len(image), len(image[0])
    kh, kw = len(kernel), len(kernel[0])
    pad_h = kh // 2
    pad_w = kw // 2
    out = [[0] * iw for _ in range(ih)]
    for oy in range(ih):
        for ox in range(iw):
            acc = 0
            for ky in range(kh):
                for kx in range(kw):
                    iy = oy + ky - pad_h
                    ix = ox + kx - pad_w
                    if 0 <= iy < ih and 0 <= ix < iw:
                        acc += int(np.int8(image[iy][ix])) * int(
                            np.int8(kernel[ky][kx])
                        )
            out[oy][ox] = acc
    return out


# =============================================
# TEST 1: SOFT RESET
# =============================================
@cocotb.test()
async def test_soft_reset(dut):
    """Verify soft reset clears status"""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    await reset_dut(dut)

    await mmio_write(dut, REG_CTRL, CTRL_RESET)
    await RisingEdge(dut.clk)
    status = await mmio_read(dut, REG_STATUS)

    assert (status & 0x01) == 0, f"BUSY should be 0, got {status:#x}"
    assert (status & 0x40) != 0, f"READY should be 1, got {status:#x}"
    dut._log.info(f"[PASS] Soft reset STATUS = {status:#x}")


# =============================================
# TEST 1B: Demo vectors match Icarus RTL demo
# =============================================
@cocotb.test()
async def test_demo_vectors_match_rtl_demo(dut):
    """Mirror the fixed inputs used by tb_tinygpu_top_demo_tb.sv"""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    cocotb.start_soon(memory_responder(dut))
    memory[:] = bytearray(65536)
    await reset_dut(dut)

    # Direct GEMM demo: A[2][2] x B[2][2] -> [[19,22],[43,50]].
    A = [[1, 2], [3, 4]]
    B = [[5, 6], [7, 8]]
    golden = golden_gemm(A, B)

    for r in range(2):
        for c in range(2):
            mem_write8(SRC0_ADDR + r * 2 + c, A[r][c])
            mem_write8(SRC1_ADDR + r * 2 + c, B[r][c])

    await mmio_write(dut, REG_DIRECT_OP, OP_GEMM)
    await mmio_write(dut, REG_SRC0, SRC0_ADDR)
    await mmio_write(dut, REG_SRC1, SRC1_ADDR)
    await mmio_write(dut, REG_DST, DST_ADDR)
    await mmio_write(dut, REG_M, 2)
    await mmio_write(dut, REG_N, 2)
    await mmio_write(dut, REG_K, 2)
    await mmio_write(dut, REG_STRIDE0, 2)
    await mmio_write(dut, REG_STRIDE1, 2)
    await mmio_write(dut, REG_STRIDE_DST, 8)
    await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
    await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

    assert await wait_done(dut), "TIMEOUT waiting for demo GEMM"
    for r in range(2):
        for c in range(2):
            hw = mem_read32s(DST_ADDR + (r * 2 + c) * 4)
            exp = int(golden[r][c])
            assert hw == exp, f"demo GEMM C[{r}][{c}]: got {hw}, expected {exp}"
    dut._log.info(f"[PASS] Demo direct/descriptor GEMM golden = {golden}")

    # Vector add demo: {1,-2,3,4} + {5,6,-7,8} -> {6,4,-4,12}.
    await mmio_write(dut, REG_CTRL, CTRL_RESET)
    await RisingEdge(dut.clk)
    x = [1, -2, 3, 4]
    y = [5, 6, -7, 8]
    golden_vec = golden_vec_add(x, y)
    for i, v in enumerate(x):
        mem_write8(SRC0_ADDR + i, v)
    for i, v in enumerate(y):
        mem_write8(SRC1_ADDR + i, v)

    await mmio_write(dut, REG_DIRECT_OP, OP_VEC_ADD)
    await mmio_write(dut, REG_SRC0, SRC0_ADDR)
    await mmio_write(dut, REG_SRC1, SRC1_ADDR)
    await mmio_write(dut, REG_DST, DST_ADDR)
    await mmio_write(dut, REG_M, 4)
    await mmio_write(dut, REG_N, 1)
    await mmio_write(dut, REG_K, 1)
    await mmio_write(dut, REG_STRIDE0, 1)
    await mmio_write(dut, REG_STRIDE1, 1)
    await mmio_write(dut, REG_STRIDE_DST, 4)
    await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
    await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

    assert await wait_done(dut), "TIMEOUT waiting for demo VEC_ADD"
    for i, exp in enumerate(golden_vec):
        hw = mem_read32s(DST_ADDR + i * 4)
        assert hw == exp, f"demo vector z[{i}]: got {hw}, expected {exp}"
    dut._log.info(f"[PASS] Demo vector add golden = {golden_vec}")

    # Conv2D demo: 3x3 input, center-only 3x3 kernel, pad 1 -> identity.
    await mmio_write(dut, REG_CTRL, CTRL_RESET)
    await RisingEdge(dut.clk)
    image = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    kernel = [[0, 0, 0], [0, 1, 0], [0, 0, 0]]
    golden_conv = golden_conv2d_same_pad(image, kernel)

    for r in range(3):
        for c in range(3):
            mem_write8(SRC0_ADDR + r * 3 + c, image[r][c])
            mem_write8(SRC1_ADDR + r * 3 + c, kernel[r][c])

    await mmio_write(dut, REG_DIRECT_OP, OP_CONV2D)
    await mmio_write(dut, REG_SRC0, SRC0_ADDR)
    await mmio_write(dut, REG_SRC1, SRC1_ADDR)
    await mmio_write(dut, REG_BIAS, 0)
    await mmio_write(dut, REG_DST, DST_ADDR)
    await mmio_write(dut, REG_STRIDE0, 3)
    await mmio_write(dut, REG_STRIDE1, 1)
    await mmio_write(dut, REG_STRIDE_DST, 4)
    await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
    await mmio_write(dut, REG_CONV_IN_HW, (3 << 16) | 3)
    await mmio_write(dut, REG_CONV_CHANNELS, (1 << 16) | 1)
    await mmio_write(dut, REG_CONV_CFG, 0x00111133)
    await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

    assert await wait_done(dut, timeout=4000), "TIMEOUT waiting for demo Conv2D"
    for r in range(3):
        for c in range(3):
            hw = mem_read32s(DST_ADDR + (r * 3 + c) * 4)
            exp = int(golden_conv[r][c])
            assert hw == exp, f"demo Conv2D out[{r}][{c}]: got {hw}, expected {exp}"
    dut._log.info(f"[PASS] Demo Conv2D golden = {golden_conv}")


# =============================================
# TEST 2: VEC_ADD Fixed
# =============================================
@cocotb.test()
async def test_vec_add_fixed(dut):
    """VEC_ADD z[4] = {1,2,3,4} + {10,20,30,40}"""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    # START background memory responder
    cocotb.start_soon(memory_responder(dut))
    memory[:] = bytearray(65536)
    await reset_dut(dut)

    x = [1, 2, 3, 4]
    y = [10, 20, 30, 40]
    for i, v in enumerate(x):
        mem_write8(SRC0_ADDR + i, v)
    for i, v in enumerate(y):
        mem_write8(SRC1_ADDR + i, v)

    golden = golden_vec_add(x, y)

    await mmio_write(dut, REG_DIRECT_OP, OP_VEC_ADD)
    await mmio_write(dut, REG_SRC0, SRC0_ADDR)
    await mmio_write(dut, REG_SRC1, SRC1_ADDR)
    await mmio_write(dut, REG_DST, DST_ADDR)
    await mmio_write(dut, REG_M, 4)
    await mmio_write(dut, REG_N, 1)
    await mmio_write(dut, REG_K, 1)
    await mmio_write(dut, REG_STRIDE0, 1)
    await mmio_write(dut, REG_STRIDE1, 1)
    await mmio_write(dut, REG_STRIDE_DST, 4)
    await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
    await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

    done = await wait_done(dut)
    assert done, "TIMEOUT waiting for VEC_ADD"

    for i in range(4):
        hw = mem_read32s(DST_ADDR + i * 4)
        exp = golden[i]
        assert hw == exp, f"z[{i}]: got {hw}, expected {exp}"
        dut._log.info(f"[PASS] z[{i}] = {hw}")


# =============================================
# TEST 3: GEMM Fixed
# =============================================
@cocotb.test()
async def test_gemm_fixed(dut):
    """GEMM C[2][2] = A[2][8] x B[8][2]"""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    cocotb.start_soon(memory_responder(dut))
    memory[:] = bytearray(65536)
    await reset_dut(dut)

    A = [[1, 2, 3, 4, 5, 6, 7, 8], [1, 1, 1, 1, 1, 1, 1, 1]]
    B = [[1, 0], [0, 1], [1, 0], [0, 1], [1, 0], [0, 1], [1, 0], [0, 1]]

    for r in range(2):
        for c in range(8):
            mem_write8(SRC0_ADDR + r * 8 + c, A[r][c])
    for r in range(8):
        for c in range(2):
            mem_write8(SRC1_ADDR + r * 2 + c, B[r][c])

    golden = golden_gemm(A, B)

    await mmio_write(dut, REG_DIRECT_OP, OP_GEMM)
    await mmio_write(dut, REG_SRC0, SRC0_ADDR)
    await mmio_write(dut, REG_SRC1, SRC1_ADDR)
    await mmio_write(dut, REG_DST, DST_ADDR)
    await mmio_write(dut, REG_M, 2)
    await mmio_write(dut, REG_N, 2)
    await mmio_write(dut, REG_K, 8)
    await mmio_write(dut, REG_STRIDE0, 8)
    await mmio_write(dut, REG_STRIDE1, 2)
    await mmio_write(dut, REG_STRIDE_DST, 8)
    await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
    await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

    done = await wait_done(dut)
    assert done, "TIMEOUT waiting for GEMM"

    for r in range(2):
        for c in range(2):
            hw = mem_read32s(DST_ADDR + (r * 2 + c) * 4)
            exp = int(golden[r][c])
            assert hw == exp, f"C[{r}][{c}]: got {hw}, expected {exp}"
            dut._log.info(f"[PASS] C[{r}][{c}] = {hw}")


# =============================================
# TEST 4: GEMM Randomized (50 cases)
# =============================================
@cocotb.test()
async def test_gemm_random(dut):
    """GEMM with 50 random INT8 test cases"""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    cocotb.start_soon(memory_responder(dut))
    await reset_dut(dut)

    passed = 0
    failed = 0

    for trial in range(50):
        memory[:] = bytearray(65536)

        M = random.randint(1, 4)
        N = random.randint(1, 4)
        K = random.randint(1, 8)

        A = [[random.randint(-8, 7) for _ in range(K)] for _ in range(M)]
        B = [[random.randint(-8, 7) for _ in range(N)] for _ in range(K)]

        for r in range(M):
            for c in range(K):
                mem_write8(SRC0_ADDR + r * K + c, A[r][c] & 0xFF)
        for r in range(K):
            for c in range(N):
                mem_write8(SRC1_ADDR + r * N + c, B[r][c] & 0xFF)

        golden = golden_gemm(A, B)

        await mmio_write(dut, REG_CTRL, CTRL_RESET)
        await RisingEdge(dut.clk)
        await mmio_write(dut, REG_DIRECT_OP, OP_GEMM)
        await mmio_write(dut, REG_SRC0, SRC0_ADDR)
        await mmio_write(dut, REG_SRC1, SRC1_ADDR)
        await mmio_write(dut, REG_DST, DST_ADDR)
        await mmio_write(dut, REG_M, M)
        await mmio_write(dut, REG_N, N)
        await mmio_write(dut, REG_K, K)
        await mmio_write(dut, REG_STRIDE0, K)
        await mmio_write(dut, REG_STRIDE1, N)
        await mmio_write(dut, REG_STRIDE_DST, N * 4)
        await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
        await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

        done = await wait_done(dut)
        if not done:
            failed += 1
            dut._log.error(f"Trial {trial}: TIMEOUT")
            continue

        ok = True
        for r in range(M):
            for c in range(N):
                hw = mem_read32s(DST_ADDR + (r * N + c) * 4)
                exp = int(golden[r][c])
                if hw != exp:
                    ok = False
                    dut._log.error(
                        f"Trial {trial} C[{r}][{c}]: got {hw}, expected {exp}"
                    )

        if ok:
            passed += 1
        else:
            failed += 1

    dut._log.info(f"Random GEMM: {passed}/50 passed, {failed} failed")
    assert failed == 0, f"{failed} random GEMM tests failed!"


# =============================================
# TEST 5: RELU Fixed
# =============================================
@cocotb.test()
async def test_relu_fixed(dut):
    """RELU y[4] = max(0, {-5,3,-1,7})"""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    cocotb.start_soon(memory_responder(dut))
    memory[:] = bytearray(65536)
    await reset_dut(dut)

    # Write INT32 inputs
    inputs = [-5, 3, -1, 7]
    for i, v in enumerate(inputs):
        mem_write32(SRC0_ADDR + i * 4, v & 0xFFFFFFFF)

    # Golden model
    golden = golden_relu(inputs)

    # Program hardware
    await mmio_write(dut, REG_DIRECT_OP, OP_RELU)
    await mmio_write(dut, REG_SRC0, SRC0_ADDR)
    await mmio_write(dut, REG_SRC1, 0)
    await mmio_write(dut, REG_DST, DST_ADDR)
    await mmio_write(dut, REG_M, 4)
    await mmio_write(dut, REG_N, 1)
    await mmio_write(dut, REG_K, 1)
    await mmio_write(dut, REG_STRIDE0, 4)
    await mmio_write(dut, REG_STRIDE1, 4)
    await mmio_write(dut, REG_STRIDE_DST, 4)
    await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
    await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

    done = await wait_done(dut)
    assert done, "TIMEOUT waiting for RELU"

    for i in range(4):
        hw = mem_read32s(DST_ADDR + i * 4)
        exp = golden[i]
        assert hw == exp, f"y[{i}]: got {hw}, expected {exp}"
        dut._log.info(f"[PASS] y[{i}] = {hw}")


# =============================================
# TEST 6: Conv2D Fixed (1x1 kernel)
# =============================================
@cocotb.test()
async def test_conv2d_fixed(dut):
    """Conv2D: 4x4 input, 1x1 kernel, 1 channel in, 1 channel out"""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    cocotb.start_soon(memory_responder(dut))
    memory[:] = bytearray(65536)
    await reset_dut(dut)

    # Input: 4x4x1 INT8 (NHWC layout)
    input_h, input_w, input_c, output_c = 4, 4, 1, 1
    kernel_size = 1

    inputs = list(range(1, 17))  # 1..16
    weights = [3]  # 1x1x1x1 weight = 3

    for i, v in enumerate(inputs):
        mem_write8(SRC0_ADDR + i, v)
    for i, v in enumerate(weights):
        mem_write8(SRC1_ADDR + i, v)

    # Golden model: output[y][x] = input[y][x] * weight
    golden_flat = [v * 3 for v in inputs]

    # Program Conv2D registers
    await mmio_write(dut, REG_CONV_IN_HW, (input_h << 16) | input_w)
    await mmio_write(dut, REG_CONV_CHANNELS, (output_c << 16) | input_c)
    await mmio_write(
        dut,
        REG_CONV_CFG,
        (0 << 20)
        | (0 << 16)  # pad_h=0, pad_w=0
        | (1 << 12)
        | (1 << 8)  # stride_h=1, stride_w=1
        | (1 << 4)
        | 1,
    )  # kernel=1x1

    # Program main registers (M=N=K=0 for Conv2D, strides=0 for auto)
    await mmio_write(dut, REG_DIRECT_OP, OP_CONV2D)
    await mmio_write(dut, REG_SRC0, SRC0_ADDR)
    await mmio_write(dut, REG_SRC1, SRC1_ADDR)
    await mmio_write(dut, REG_BIAS, 0)
    await mmio_write(dut, REG_DST, DST_ADDR)
    await mmio_write(dut, REG_M, 0)
    await mmio_write(dut, REG_N, 0)
    await mmio_write(dut, REG_K, 0)
    await mmio_write(dut, REG_STRIDE0, 0)
    await mmio_write(dut, REG_STRIDE1, 0)
    await mmio_write(dut, REG_STRIDE_DST, 0)
    await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
    await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

    done = await wait_done(dut)
    assert done, "TIMEOUT waiting for Conv2D"

    output_h = (input_h + 0 + 0 - kernel_size) // 1 + 1
    output_w = (input_w + 0 + 0 - kernel_size) // 1 + 1

    dut._log.info(f"Conv2D output size: {output_h}x{output_w}")
    all_pass = True
    for i in range(output_h * output_w * output_c):
        hw = mem_read32s(DST_ADDR + i * 4)
        exp = golden_flat[i]
        if hw == exp:
            dut._log.info(f"[PASS] out[{i}] = {hw}")
        else:
            dut._log.error(f"[FAIL] out[{i}]: got {hw}, expected {exp}")
            all_pass = False

    assert all_pass, "Conv2D fixed test failed!"


# =============================================
# TEST 7: Conv2D Random (10 cases, 1x1 kernel)
# =============================================
@cocotb.test()
async def test_conv2d_random(dut):
    """Conv2D with 10 random cases (1x1 kernel, 1 channel)"""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    cocotb.start_soon(memory_responder(dut))
    await reset_dut(dut)

    passed = 0
    failed = 0

    for trial in range(10):
        memory[:] = bytearray(65536)

        # Random dimensions
        input_h = random.randint(2, 6)
        input_w = random.randint(2, 6)
        input_c = 1
        output_c = 1
        kernel_size = 1

        # Random INT8 inputs and weights
        num_inputs = input_h * input_w * input_c
        num_weights = kernel_size * kernel_size * input_c * output_c

        inputs = [random.randint(-8, 7) for _ in range(num_inputs)]
        weights = [random.randint(-8, 7) for _ in range(num_weights)]

        for i, v in enumerate(inputs):
            mem_write8(SRC0_ADDR + i, v & 0xFF)
        for i, v in enumerate(weights):
            mem_write8(SRC1_ADDR + i, v & 0xFF)

        # Python golden model
        output_h = input_h
        output_w = input_w
        golden_flat = []
        for oy in range(output_h):
            for ox in range(output_w):
                acc = 0
                for ic in range(input_c):
                    in_idx = (oy * input_w + ox) * input_c + ic
                    wt_idx = ic * output_c + 0
                    acc += int(np.int8(inputs[in_idx])) * int(np.int8(weights[wt_idx]))
                golden_flat.append(acc)

        # Program hardware
        await mmio_write(dut, REG_CTRL, CTRL_RESET)
        await RisingEdge(dut.clk)
        await mmio_write(dut, REG_DIRECT_OP, OP_CONV2D)
        await mmio_write(dut, REG_CONV_IN_HW, (input_h << 16) | input_w)
        await mmio_write(dut, REG_CONV_CHANNELS, (output_c << 16) | input_c)
        await mmio_write(
            dut,
            REG_CONV_CFG,
            (0 << 20) | (0 << 16) | (1 << 12) | (1 << 8) | (1 << 4) | 1,
        )
        await mmio_write(dut, REG_SRC0, SRC0_ADDR)
        await mmio_write(dut, REG_SRC1, SRC1_ADDR)
        await mmio_write(dut, REG_BIAS, 0)
        await mmio_write(dut, REG_DST, DST_ADDR)
        await mmio_write(dut, REG_M, 0)
        await mmio_write(dut, REG_N, 0)
        await mmio_write(dut, REG_K, 0)
        await mmio_write(dut, REG_STRIDE0, 0)
        await mmio_write(dut, REG_STRIDE1, 0)
        await mmio_write(dut, REG_STRIDE_DST, 0)
        await mmio_write(dut, REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED)
        await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

        done = await wait_done(dut)
        if not done:
            failed += 1
            dut._log.error(f"Trial {trial}: TIMEOUT")
            continue

        ok = True
        for i in range(output_h * output_w * output_c):
            hw = mem_read32s(DST_ADDR + i * 4)
            exp = golden_flat[i]
            if hw != exp:
                ok = False
                dut._log.error(f"Trial {trial} out[{i}]: got {hw}, expected {exp}")

        if ok:
            passed += 1
            dut._log.info(f"Trial {trial} PASS ({input_h}x{input_w} input)")
        else:
            failed += 1

    dut._log.info(f"Random Conv2D: {passed}/10 passed, {failed} failed")
    assert failed == 0, f"{failed} random Conv2D tests failed!"
