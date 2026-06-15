# =============================================
# STEP 2: What is im2col?
# TinyGPU Golden Reference Model
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
                    patch.append(image[i + ki][j + kj])
            col_matrix.append(patch)

    return col_matrix, out_rows, out_cols


def gemm(A, B):

    M = len(A)
    K = len(A[0])
    N = len(B[0])

    C = [[0] * N for _ in range(M)]

    for i in range(M):
        for j in range(N):
            total = 0
            for k in range(K):
                total += A[i][k] * B[k][j]
            C[i][j] = total

    return C


# --- TEST DATA ---
image = [[1, 2, 3, 4], [5, 6, 7, 8], [1, 2, 3, 4], [5, 6, 7, 8]]

kernel = [[1, 0], [0, 1]]

# --- RUN im2col ---
col_matrix, out_rows, out_cols = im2col(image, 2, 2)

# --- Flatten kernel into column ---
flat_kernel = [[kernel[ki][kj]] for ki in range(2) for kj in range(2)]

# --- RUN GEMM ---
result = gemm(col_matrix, flat_kernel)

# --- PRINT ---
print("================================")
print("STEP 2: im2col + GEMM")
print("================================")

print("\ncol_matrix (each row = one patch):")
for idx, row in enumerate(col_matrix):
    print(f"  Row {idx}: {row}")

print("\nflat_kernel:")
for row in flat_kernel:
    print(" ", row)

print("\nGEMM Output:")
for i in range(out_rows):
    row = []
    for j in range(out_cols):
        row.append(result[i * out_cols + j][0])
    print(" ", row)

# --- CHECK ---
if result[0][0] == 7:
    print("\n[PASS] im2col + GEMM is correct!")
else:
    print("\n[FAIL] Something is wrong!")
