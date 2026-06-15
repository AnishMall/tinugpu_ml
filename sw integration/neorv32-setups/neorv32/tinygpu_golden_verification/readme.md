# TinyGPU-ML — Python Golden Verification Suite

---

## 🛠️ Tools & Versions

| Tool | Version | Purpose |
|------|---------|---------|
| **Python** | 3.10.12 | Golden reference model + cocotb tests |
| **NumPy** | 2.2.6 | INT8/INT32 arithmetic model |
| **cocotb** | 2.0.1 | Python-to-RTL interface |
| **cocotb-test** | 0.2.6 | Test runner framework |
| **Verilator** | 5.048 | RTL simulator (SystemVerilog) |
| **pip** | 24.0 | Package manager |
| **Git** | — | Version control |
| **VS Code** | — | Development environment |
| **Docker** | Dev Container: Hardware Dev | Isolated build environment |

Install dependencies:
```bash
pip3 install cocotb cocotb-test numpy
```

---

## ✅ What We Achieved

### cocotb Test Results (7/7 PASS)

```
*******************************************************************************
** TEST                             STATUS   OPERATIONS VERIFIED             **
*******************************************************************************
** test_tinygpu.test_soft_reset      PASS    MMIO + control logic            **
** test_tinygpu.test_vec_add_fixed   PASS    z = {11, 22, 33, 44}           **
** test_tinygpu.test_gemm_fixed      PASS    C = [[16,20],[4,4]]            **
** test_tinygpu.test_gemm_random     PASS    50/50 random INT8 cases        **
** test_tinygpu.test_relu_fixed      PASS    y = {0, 3, 0, 7}              **
** test_tinygpu.test_conv2d_fixed    PASS    16/16 output elements          **
** test_tinygpu.test_conv2d_random   PASS    10/10 random cases             **
*******************************************************************************
** TESTS=7  PASS=7  FAIL=0  SKIP=0                                         **
*******************************************************************************
```

### Coverage Results

```
Python cocotb suite (independent contribution):
  line     : 69.2%   (213/308)
  branch   : 74.1%   (304/410)
  expr     : 75.3%   (216/287)
  overall  : 65.0%   (1614/2478)

Full team combined (cocotb + Icarus 26 tb + Verilator 1000 jobs):
  line             : 94.35%  (2338/2478)
  functional cov   : 100.00% (32/32 bins)
  branch           : 24.59%  (controller paths dominate)
```

### Coverage Progression

```
Start (Python cocotb alone) : 69.2%
After team L4 Icarus tests  : 89.83%
After controller_cov_tb     : 94.35%  ← current
```

### Python Verification Levels Completed

| Level | Method | Status |
|-------|--------|--------|
| 1 | Pure Python loops — convolution concept | ✅ Done |
| 2 | NumPy-based im2col + GEMM | ✅ Done |
| 3 | Randomized test generation | ✅ Done |
| 4 | **cocotb — Python drives real RTL** | ✅ Done |

---

## 🏗️ Where This Fits in the Architecture Verification Plan

The project defines 5 hardware verification levels (from Architecture Spec v2, Section 9.1).
This Python suite covers **L4 — Kernel-level verification**.

```
L1  Arithmetic unit    Single PE: signed multiply, accumulate, reset, overflow
    ─────────────────  Method: Icarus unit tests (RTL team)
    Status: COMPLETE

L2  Array              4×4 array against software model, full + partial tiles
    ─────────────────  Method: Icarus array tests (RTL team)
    Status: COMPLETE

L3  Scratchpad + DMA   Bank select, load/store ordering, burst, stride handling
    ─────────────────  Method: Icarus DMA tests (RTL team)
    Status: COMPLETE

L4  Kernel-level  ◄─── THIS SUITE
    ─────────────────  Method: Python Golden Reference Model + cocotb
    Operations:
      ✅ GEMM    — 50 randomized INT8 cases
      ✅ VEC_ADD — fixed + random
      ✅ RELU    — fixed values
      ✅ Conv2D  — fixed + 10 randomized cases
    Status: PASSING (7/7 tests)
    Line coverage (Python alone) : 69.2%
    Team total                   : 94.35% line, 100% functional

L5  SoC-level          NEORV32 firmware launches kernels, checks vs C reference
    ─────────────────  Method: GHDL firmware simulation
    Status: IN PROGRESS
```

### What "Golden Reference Model at L4" Means

At L4, the Python golden model acts as the **independent mathematical reference**:

```
L4 Kernel Verification Flow:

  Software (Python)               Hardware (RTL)
  ─────────────────               ──────────────
  1. Generate random INT8         1. Same inputs written
     inputs (A, B matrices)          to memory model

  2. Compute expected output      2. tinygpu_top.sv runs
     using Python golden model       GEMM/VEC_ADD/RELU/Conv2D

  3. Golden result stored         3. Hardware result stored
     (correct answer)                in output memory

                  ↓ cocotb compares both ↓

            PASS if they match
            FAIL if they differ → bug found in RTL
```

This is called **"Golden Model Verification"** or **"Reference Model Verification"** — the standard industry methodology for kernel-level hardware verification.

---

## 📋 Overview

This folder contains the **Python-based Golden Reference Model and cocotb testbench** for verifying the TinyGPU-ML hardware accelerator.

**TinyGPU-ML** is an INT8 ML accelerator integrated with the NEORV32 RISC-V SoC on the Tang Nano 20K FPGA. It supports:

- GEMM: INT8 inputs, INT32 accumulation
- VEC_ADD: element-wise vector addition
- RELU: activation function
- CLAMP: value clamping
- Conv2D: hardware convolution via streaming im2col engine

This suite provides the **software verification side** of the HW/SW co-design boundary:

```
Python Golden Model              Real RTL (.sv files)
      |                                |
      | cocotb + Verilator 5.048       |
      └──────── compare ───────────────┘
                      |
                PASS / FAIL
```

---

## 📁 Folder Structure

```
tinygpu_golden_verification/
│
├── step1_convolution.py        ← What is convolution (beginner)
├── step2_im2col.py             ← im2col + GEMM explained
├── step3_golden_model.py       ← INT8/INT32 golden reference model
├── step4_compare_hardware.py   ← Python vs hardware output comparison
│
├── test_tinygpu.py             ← cocotb Level 4 testbench (main)
├── Makefile                    ← cocotb build + coverage reporting
│
└── README.md                   ← This file
```

---

## 🚀 How to Run

### Step-by-step Python (beginner to advanced):
```bash
python3 step1_convolution.py      # What is convolution
python3 step2_im2col.py           # im2col + GEMM
python3 step3_golden_model.py     # INT8/INT32 golden model
python3 step4_compare_hardware.py # Compare vs hardware
```

### cocotb testbench (Python drives real RTL):
```bash
make
```

### Coverage report (after make):
```bash
make coverage
```

---

## 🔍 How cocotb Works

Unlike a standard C++ Verilator testbench, cocotb allows Python to:

- Drive clock and reset signals directly
- Write to MMIO registers cycle-accurately
- Respond to hardware memory requests in real time via background memory responder
- Run randomized test cases automatically
- Compare hardware output against Python golden values independently

```python
# Python drives real RTL register directly
await mmio_write(dut, REG_CTRL, CTRL_DIRECT | CTRL_START)

# Python golden model computes expected answer
golden = golden_gemm(A, B)

# Compare hardware output vs Python expected
assert hw == exp, f"C[{r}][{c}]: got {hw}, expected {exp}"
```

---

## 🧮 Golden Reference Model

Python mirrors hardware arithmetic exactly:

| Hardware (RTL) | Python equivalent |
|----------------|-------------------|
| INT8 signed input (-128 to +127) | `np.clip(value, -128, 127)` |
| INT8 × INT8 multiply | `int(a) * int(b)` |
| INT32 accumulation | `acc += a * b` (int32) |
| ReLU epilogue | `max(0, value)` |
| GEMM: C = A × B | `A.astype(int32) @ B.astype(int32)` |
| Conv2D (1x1) | nested loop over patches |

---

## 🆕 Conv2D Hardware Support

The TinyGPU hardware uses a streaming im2col engine (`tinygpu_im2col_loader.sv`).
Software does NOT perform im2col — hardware does it internally via opcode `OP_CONV2D = 0x07`.

New registers:

| Register | Offset | Description |
|----------|--------|-------------|
| REG_CONV_IN_HW | 0x58 | Input height \| width |
| REG_CONV_CHANNELS | 0x5c | Output channels \| input channels |
| REG_CONV_CFG | 0x60 | pad \| stride \| kernel size |

Data layout:
```
Input   : [H][W][Cin]          (NHWC, INT8)
Weights : [KH][KW][Cin][Cout]  (INT8)
Output  : [OH][OW][Cout]       (INT32 or INT8)
```

---

## 👥 Team Split

| Person | Task | Result |
|--------|------|--------|
| RTL teammate | Conv2D hardware, Icarus 26 testbenches, controller coverage tb, formal verification | 94.35% line, 100% functional |
| This person | Python golden model (L1→L4), cocotb testbench | 7/7 PASS, 69.2% line (independent) |

---

## 📚 Reference Papers

1. **Gemmini** — RISC-V systolic array + im2col+GEMM (DAC 2021)
   `https://arxiv.org/abs/1911.09925`

2. **Energy-Efficient GeMM-Based Conv Accelerator With On-the-Fly im2col**
   IEEE TVLSI 2023 — `https://ieeexplore.ieee.org/document/10167453`

3. **TinyVers** — Python golden model for RISC-V ML inference verification
   `https://arxiv.org/abs/2301.03537`

---

## 💻 Platform

| Parameter | Value |
|-----------|-------|
| FPGA | Tang Nano 20K (GW2AR-18) |
| SoC | NEORV32 RISC-V |
| PE Array | 2×2 (4 PEs) |
| Data type | INT8 input, INT32 accumulation |
| Clock | 27 MHz |
| MMIO Base | 0xFFEE0000 |

---

*TinyGPU-ML — Hardware/Software Co-Design Project — June 2026*