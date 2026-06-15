# =============================================
# STEP 3: Golden Reference Model
# TinyGPU — INT8 Input, INT32 Accumulation
# This mirrors EXACTLY what your RTL does!
# =============================================

import numpy as np


# =============================================
# BLOCK 1: Clamp to INT8 range (-128 to +127)
# =============================================
def to_int8(value):
    return int(np.clip(value, -128, 127))


# =============================================
# BLOCK 2: Direct Conv2D (Ground Truth)
# =============================================
def conv2d_direct(image, kernel):

    img_rows = len(image)
    img_cols = len(image[0])
    ker_rows = len(kernel)
    ker_cols = len(kernel[0])
    out_rows = img_rows - ker_rows + 1
    out_cols = img_cols - ker_cols + 1

    output = [[0] * out_cols for _ in range(out_rows)]

    for i in range(out_rows):
        for j in range(out_cols):
            acc = 0
            for ki in range(ker_rows):
                for kj in range(ker_cols):
                    acc += to_int8(image[i + ki][j + kj]) * to_int8(kernel[ki][kj])
            output[i][j] = int(acc)

    return output


# =============================================
# BLOCK 3: im2col Transformation
# =============================================
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


# =============================================
# BLOCK 4: GEMM (mirrors your TinyGPU MAC array)
# =============================================
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


# =============================================
# BLOCK 5: ReLU (mirrors tinygpu_epilogue.sv)
# =============================================
def relu(matrix):
    return [[max(0, val) for val in row] for row in matrix]


# =============================================
# BLOCK 6: Full Pipeline
# =============================================
def conv2d_via_gemm(image, kernel, apply_relu=False):

    ker_rows = len(kernel)
    ker_cols = len(kernel[0])

    # Step 1: im2col (software on NEORV32)
    col_matrix, out_rows, out_cols = im2col(image, ker_rows, ker_cols)

    # Step 2: flatten kernel
    flat_kernel = [
        [to_int8(kernel[ki][kj])] for ki in range(ker_rows) for kj in range(ker_cols)
    ]

    # Step 3: GEMM (TinyGPU hardware)
    gemm_out = gemm_int8(col_matrix, flat_kernel)

    # Step 4: ReLU (optional epilogue)
    if apply_relu:
        gemm_out = relu(gemm_out)

    # Step 5: reshape to 2D
    result = []
    for i in range(out_rows):
        row = []
        for j in range(out_cols):
            row.append(gemm_out[i * out_cols + j][0])
        result.append(row)

    return result


# =============================================
# VERIFY FUNCTION
# =============================================
def verify(name, expected, got):
    print(f"\n{'='*40}")
    print(f"TEST: {name}")
    print(f"{'='*40}")
    all_pass = True
    for i in range(len(expected)):
        for j in range(len(expected[0])):
            exp = expected[i][j]
            act = got[i][j]
            ok = "PASS" if exp == act else "FAIL"
            if ok == "FAIL":
                all_pass = False
            print(f"  [{ok}] [{i}][{j}] = {act}  (expected {exp})")
    if all_pass:
        print(f"\n  ALL PASS!")
    else:
        print(f"\n  MISMATCH FOUND!")
    return all_pass


# =============================================
# MAIN TESTS
# =============================================
if __name__ == "__main__":

    all_ok = True

    # TEST A: Basic 4x4 image, 2x2 kernel
    image_A = [[1, 2, 3, 4], [5, 6, 7, 8], [1, 2, 3, 4], [5, 6, 7, 8]]
    kernel_A = [[1, 0], [0, 1]]
    direct_A = conv2d_direct(image_A, kernel_A)
    gemm_A = conv2d_via_gemm(image_A, kernel_A)
    all_ok = verify("4x4 image, 2x2 kernel", direct_A, gemm_A) and all_ok

    # TEST B: Matches your Verilator GEMM test
    A = [[1, 2, 3, 4, 5, 6, 7, 8], [1, 1, 1, 1, 1, 1, 1, 1]]
    B = [[1, 0], [0, 1], [1, 0], [0, 1], [1, 0], [0, 1], [1, 0], [0, 1]]
    C = gemm_int8(A, B)
    print(f"\n{'='*40}")
    print(f"TEST: Verilator GEMM match")
    print(f"{'='*40}")
    print(f"  [{'PASS' if C[0][0]==16 else 'FAIL'}] C[0][0] = {C[0][0]} (expected 16)")
    print(f"  [{'PASS' if C[0][1]==20 else 'FAIL'}] C[0][1] = {C[0][1]} (expected 20)")
    print(f"  [{'PASS' if C[1][0]==4  else 'FAIL'}] C[1][0] = {C[1][0]} (expected  4)")
    print(f"  [{'PASS' if C[1][1]==4  else 'FAIL'}] C[1][1] = {C[1][1]} (expected  4)")

    # TEST C: Negative values (signed INT8)
    image_C = [[-5, 3], [-1, 7]]
    kernel_C = [[1, 0], [0, 1]]
    direct_C = conv2d_direct(image_C, kernel_C)
    gemm_C = conv2d_via_gemm(image_C, kernel_C)
    all_ok = verify("Negative INT8 values", direct_C, gemm_C) and all_ok

    # TEST D: With ReLU
    image_D = [[-5, 3, -1, 7], [1, 2, 3, 4], [-2, -3, 0, 1], [5, 6, -7, -8]]
    kernel_D = [[1, 0], [0, 1]]
    direct_D = relu(conv2d_direct(image_D, kernel_D))
    gemm_D = conv2d_via_gemm(image_D, kernel_D, apply_relu=True)
    all_ok = verify("With ReLU epilogue", direct_D, gemm_D) and all_ok

    # FINAL
    print(f"\n{'='*40}")
    print("FINAL RESULT")
    print(f"{'='*40}")
    if all_ok:
        print("  ALL TESTS PASS")
        print("  Golden Model is ready!")
    else:
        print("  SOME TESTS FAILED")
