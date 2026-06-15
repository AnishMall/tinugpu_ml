# =============================================
# STEP 1: What is Convolution?
# TinyGPU Golden Reference Model
# =============================================


def simple_conv2d(image, kernel):

    image_rows = len(image)
    image_cols = len(image[0])
    kernel_rows = len(kernel)
    kernel_cols = len(kernel[0])

    output_rows = image_rows - kernel_rows + 1
    output_cols = image_cols - kernel_cols + 1

    output = [[0] * output_cols for _ in range(output_rows)]

    for i in range(output_rows):
        for j in range(output_cols):
            total = 0
            for ki in range(kernel_rows):
                for kj in range(kernel_cols):
                    total += image[i + ki][j + kj] * kernel[ki][kj]
            output[i][j] = total

    return output


# --- TEST DATA ---
image = [[1, 2, 3, 4], [5, 6, 7, 8], [1, 2, 3, 4], [5, 6, 7, 8]]

kernel = [[1, 0], [0, 1]]

# --- RUN ---
result = simple_conv2d(image, kernel)

# --- PRINT ---
print("================================")
print("STEP 1: Simple Convolution")
print("================================")

print("\nImage (4x4):")
for row in image:
    print("  ", row)

print("\nKernel (2x2):")
for row in kernel:
    print("  ", row)

print("\nOutput (3x3):")
for row in result:
    print("  ", row)

# --- CHECK ---
if result[0][0] == 7:
    print("\n[PASS] Convolution is correct!")
else:
    print("\n[FAIL] Something is wrong!")
