# TinyGPU-ML — Python Golden Verification Suite

## Overview

This folder contains the **Python-based Golden Reference Model and cocotb testbench** for verifying the TinyGPU-ML hardware accelerator.

The verification suite runs alongside the Verilator RTL simulation and confirms that the hardware produces mathematically correct outputs for all supported operations.

---

## Project Context

**TinyGPU-ML** is an INT8 ML accelerator integrated with the NEORV32 RISC-V SoC on the Tang Nano 20K FPGA. The accelerator supports:

- GEMM (matrix multiply): INT8 inputs, INT32 accumulation
- VEC_ADD: element-wise vector addition
- RELU: activation function
- CLAMP: value clamping
- Conv2D: hardware convolution via streaming im2col

This verification suite focuses on the **software verification side** of the HW/SW co-design boundary. The hardware RTL is verified by the team using Icarus Verilog and Verilator. This Python suite provides an independent golden reference model and a Level 4 industry-standard cocotb testbench.

---

## Verification Levels

| Level | Method | Status |
|-------|--------|--------|
| 1 | Pure Python loops (basic concept) | ✅ Done |
| 2 | NumPy-based golden model | ✅ Done |
| 3 | Randomized test generation | ✅ Done |
| 4 | cocotb — Python drives real RTL | ✅ Done |

---

## Folder Structure

```
tinygpu_golden_verification/
│
├── step1_convolution.py        ← What is convolution (beginner)
├── step2_im2col.py             ← im2col + GEMM explained
├── step3_golden_model.py       ← INT8/INT32 golden reference model
├── step4_compare_hardware.py   ← Python vs hardware output comparison
│
├── test_tinygpu.py             ← cocotb Level 4 testbench (main)
├── Makefile                    ← cocotb build system with coverage
│
└── README.md                   ← This file
```

---

## Requirements

```bash
# Already installed in Docker container
Python      3.10.12
NumPy       2.2.6
cocotb      2.0.1
cocotb-test 0.2.6
Verilator   5.048
```

Install if needed:
```bash
pip3 install cocotb cocotb-test numpy
```

---

## How to Run

### Step-by-step Python learning (beginner):
```bash
python3 step1_convolution.py
python3 step2_im2col.py
python3 step3_golden_model.py
python3 step4_compare_hardware.py
```

### cocotb testbench (drives real RTL):
```bash
make
```

### Coverage report (after make):
```bash
make coverage
```

---

## cocotb Test Results

```
** test_tinygpu.test_soft_reset      PASS
** test_tinygpu.test_vec_add_fixed   PASS   z = {11, 22, 33, 44}
** test_tinygpu.test_gemm_fixed      PASS   C = [[16,20],[4,4]]
** test_tinygpu.test_gemm_random     PASS   50/50 random INT8 cases

** TESTS=4 PASS=4 FAIL=0 SKIP=0
```

---

## What cocotb Does

```
Python Golden Model          Real RTL (.sv files)
      |                            |
      |   via cocotb + Verilator   |
      └──────── compare ───────────┘
                    |
              PASS / FAIL
```

Unlike a standard Verilator C++ testbench, cocotb allows Python to:
- Drive clock and reset signals directly
- Write to MMIO registers cycle-accurately
- Respond to hardware memory requests in real time
- Run randomized test cases automatically
- Compare hardware output against Python golden values

---

## How to Read the cocotb Output

```
120.00ns  INFO  [PASS] Soft reset STATUS = 0x40
1120.00ns INFO  [PASS] z[0] = 11
1120.00ns INFO  [PASS] z[1] = 22
1120.00ns INFO  [PASS] z[2] = 33
1120.00ns INFO  [PASS] z[3] = 44
```

- **ns** = simulation time (not real time)
- **INFO** = passing result
- **WARNING/ERROR** = failing result

---

## Golden Reference Model

The Python golden model (`step3_golden_model.py`) mirrors the hardware exactly:

| Hardware | Python equivalent |
|----------|-------------------|
| INT8 input (signed, -128 to +127) | `np.clip(value, -128, 127)` |
| INT8 × INT8 multiply | `int(a) * int(b)` |
| INT32 accumulation | `np.int32` accumulator |
| ReLU epilogue | `max(0, value)` |
| GEMM: C = A × B | `A.astype(int32) @ B.astype(int32)` |

---

## Conv2D Approach

The TinyGPU hardware supports **hardware Conv2D** using a streaming im2col engine (`tinygpu_im2col_loader.sv`). Software does NOT need to perform im2col — the hardware does it internally.

New registers for Conv2D:

| Register | Offset | Description |
|----------|--------|-------------|
| REG_CONV_IN_HW | 0x58 | Input height and width |
| REG_CONV_CHANNELS | 0x5c | Output and input channels |
| REG_CONV_CFG | 0x60 | Padding, stride, kernel size |

Input layout: `[H][W][Cin]` (NHWC, INT8)
Weight layout: `[KH][KW][Cin][Cout]` (INT8)
Output layout: `[OH][OW][Cout]` (INT32 or INT8)

---

## Team Split

| Person | Task |
|--------|------|
| RTL teammate | Conv2D hardware (`tinygpu_im2col_loader.sv`), coverage improvement |
| This person | Python golden model + cocotb testbench |

---

## Reference Papers

1. **Gemmini** — RISC-V systolic array with im2col+GEMM (DAC 2021)
   `https://arxiv.org/abs/1911.09925`

2. **Energy-Efficient GeMM-Based Convolution Accelerator With On-the-Fly im2col**
   IEEE TVLSI 2023 — `https://ieeexplore.ieee.org/document/10167453`

3. **TinyVers** — Python golden model for RISC-V ML inference verification
   `https://arxiv.org/abs/2301.03537`

---

## Platform

- **FPGA:** Tang Nano 20K (GW2AR-18)
- **SoC:** NEORV32 RISC-V
- **PE Array:** 2×2 (4 PEs), INT8 input, INT32 accumulation
- **Clock:** 27 MHz
- **MMIO Base:** 0xFFEE0000

---

*TinyGPU-ML — Hardware/Software Co-Design Project*
*June 2026*
