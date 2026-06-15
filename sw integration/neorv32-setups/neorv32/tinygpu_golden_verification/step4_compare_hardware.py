# =============================================
# STEP 4: Compare Python vs Hardware Output
# TinyGPU Golden Reference Model
# =============================================
# HOW THIS WORKS:
#
# 1. Python computes EXPECTED output (golden)
# 2. You paste ACTUAL hardware output from Verilator
# 3. This script compares both
# 4. Prints PASS or FAIL for each value
# =============================================

import numpy as np


# =============================================
# COPY from step3 (reuse same functions)
# =============================================
def to_int8(value):
    return int(np.clip(value, -128, 127))


def im2col(image, ker_rows, ker_cols):
    img_rows = len(image)
    img_cols = len(image[0])
    out_rows = img_rows - ker_rows + 1
    out_cols = img_cols - ker_cols + 1
    col_matrix = []
    for i in range(out_rows):
        for j in range(out_cols):
            patch = []
            for ki in range(ker_rows):
                for kj in range(ker_cols):
                    patch.append(to_int8(image[i + ki][j + kj]))
            col_matrix.append(patch)
    return col_matrix, out_rows, out_cols


def gemm_int8(A, B):
    M = len(A)
    K = len(A[0])
    N = len(B[0])
    C = [[0] * N for _ in range(M)]
    for i in range(M):
        for j in range(N):
            acc = 0
            for k in range(K):
                acc += to_int8(A[i][k]) * to_int8(B[k][j])
            C[i][j] = int(acc)
    return C


def relu(matrix):
    return [[max(0, val) for val in row] for row in matrix]


def conv2d_via_gemm(image, kernel, apply_relu=False):
    ker_rows = len(kernel)
    ker_cols = len(kernel[0])
    col_matrix, out_rows, out_cols = im2col(image, ker_rows, ker_cols)
    flat_kernel = [
        [to_int8(kernel[ki][kj])] for ki in range(ker_rows) for kj in range(ker_cols)
    ]
    gemm_out = gemm_int8(col_matrix, flat_kernel)
    if apply_relu:
        gemm_out = relu(gemm_out)
    result = []
    for i in range(out_rows):
        row = []
        for j in range(out_cols):
            row.append(gemm_out[i * out_cols + j][0])
        result.append(row)
    return result


# =============================================
# COMPARE FUNCTION
# =============================================
def compare(test_name, golden, hardware):
    print(f"\n{'='*50}")
    print(f"TEST: {test_name}")
    print(f"{'='*50}")
    print(f"  {'Index':<10} {'Python':>10} {'Hardware':>10} {'Result':>10}")
    print(f"  {'-'*42}")

    all_pass = True
    for i in range(len(golden)):
        for j in range(len(golden[0])):
            exp = golden[i][j]
            act = hardware[i][j]
            ok = "PASS" if exp == act else "FAIL ←"
            if "FAIL" in ok:
                all_pass = False
            print(f"  [{i}][{j}]      {exp:>10}   {act:>10}   {ok}")

    print(f"\n  {'ALL PASS ✓' if all_pass else 'MISMATCH FOUND ✗'}")
    return all_pass


# =============================================
# YOUR TEST INPUTS
# (keep same as what you send to hardware)
# =============================================

# --- TEST 1: Basic Conv2D ---
image_1 = [[1, 2, 3, 4], [5, 6, 7, 8], [1, 2, 3, 4], [5, 6, 7, 8]]
kernel_1 = [[1, 0], [0, 1]]

# Python golden output
golden_1 = conv2d_via_gemm(image_1, kernel_1)

# ↓↓↓ PASTE YOUR HARDWARE OUTPUT HERE ↓↓↓
# When your friend finishes RTL Conv2D,
# run Verilator and paste the output values here
hardware_1 = [[7, 9, 11], [7, 9, 11], [7, 9, 11]]
# ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

# --- TEST 2: Verilator GEMM values ---
A_2 = [[1, 2, 3, 4, 5, 6, 7, 8], [1, 1, 1, 1, 1, 1, 1, 1]]
B_2 = [[1, 0], [0, 1], [1, 0], [0, 1], [1, 0], [0, 1], [1, 0], [0, 1]]

golden_2 = gemm_int8(A_2, B_2)

# ↓↓↓ PASTE YOUR HARDWARE OUTPUT HERE ↓↓↓
hardware_2 = [[16, 20], [4, 4]]
# ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

# --- TEST 3: With ReLU ---
image_3 = [[-5, 3, -1, 7], [1, 2, 3, 4], [-2, -3, 0, 1], [5, 6, -7, -8]]
kernel_3 = [[1, 0], [0, 1]]

golden_3 = conv2d_via_gemm(image_3, kernel_3, apply_relu=True)

# ↓↓↓ PASTE YOUR HARDWARE OUTPUT HERE ↓↓↓
hardware_3 = [[0, 6, 3], [0, 2, 4], [4, 0, 0]]
# ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

# =============================================
# RUN COMPARISON
# =============================================
if __name__ == "__main__":

    print("=" * 50)
    print("TinyGPU — Python vs Hardware Comparison")
    print("=" * 50)

    all_ok = True
    all_ok = compare("Conv2D Basic", golden_1, hardware_1) and all_ok
    all_ok = compare("GEMM (Verilator)", golden_2, hardware_2) and all_ok
    all_ok = compare("Conv2D + ReLU", golden_3, hardware_3) and all_ok

    print(f"\n{'='*50}")
    print("FINAL SUMMARY")
    print(f"{'='*50}")
    if all_ok:
        print("  ALL PASS — Hardware matches Golden Model!")
        print("  RTL Conv2D implementation is CORRECT!")
    else:
        print("  MISMATCH — Bug exists in RTL!")
        print("  Share this output with your RTL teammate!")
