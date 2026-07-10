#!/usr/bin/env python3
"""Golden reference for the deterministic TinyGPU RTL demo.

This mirrors the fixed inputs in tb/tb_tinygpu_top_demo_tb.sv so the
presentation can show the same workloads computed independently in Python.
"""


def gemm(a, b):
    rows = len(a)
    cols = len(b[0])
    depth = len(b)
    return [
        [sum(int(a[r][k]) * int(b[k][c]) for k in range(depth)) for c in range(cols)]
        for r in range(rows)
    ]


def vec_add(x, y):
    return [int(a) + int(b) for a, b in zip(x, y)]


def conv2d_center_kernel_3x3(image):
    kernel = [
        [0, 0, 0],
        [0, 1, 0],
        [0, 0, 0],
    ]
    out = []
    for oy in range(3):
        row = []
        for ox in range(3):
            acc = 0
            for ky in range(3):
                for kx in range(3):
                    iy = oy + ky - 1
                    ix = ox + kx - 1
                    if 0 <= iy < 3 and 0 <= ix < 3:
                        acc += image[iy][ix] * kernel[ky][kx]
            row.append(acc)
        out.append(row)
    return out


def main():
    gemm_a = [
        [1, 2],
        [3, 4],
    ]
    gemm_b = [
        [5, 6],
        [7, 8],
    ]

    vec_x = [1, -2, 3, 4]
    vec_y = [5, 6, -7, 8]

    conv_in = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9],
    ]

    direct_gemm = gemm(gemm_a, gemm_b)
    descriptor_gemm = gemm(gemm_a, gemm_b)
    vector = vec_add(vec_x, vec_y)
    conv = conv2d_center_kernel_3x3(conv_in)

    print("TinyGPU-ML Python golden demo")
    print(f"Direct GEMM C = {direct_gemm}")
    print(f"Descriptor GEMM C = {descriptor_gemm}")
    print(f"Vector add z = {{{vector[0]}, {vector[1]}, {vector[2]}, {vector[3]}}}")
    print(f"Conv2D out row0 = {{{conv[0][0]}, {conv[0][1]}, {conv[0][2]}}}")
    print(f"Conv2D out row1 = {{{conv[1][0]}, {conv[1][1]}, {conv[1][2]}}}")
    print(f"Conv2D out row2 = {{{conv[2][0]}, {conv[2][1]}, {conv[2][2]}}}")

    assert direct_gemm == [[19, 22], [43, 50]]
    assert descriptor_gemm == [[19, 22], [43, 50]]
    assert vector == [6, 4, -4, 12]
    assert conv == [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    print("demo_golden PASS")


if __name__ == "__main__":
    main()
