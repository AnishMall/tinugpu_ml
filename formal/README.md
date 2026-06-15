# TinyGPU formal checks

Run `sby -f formal/tinygpu.sby` from the repository root. The project proves
memory-arbiter selection, counter monotonicity, bounded DMA pointer safety,
im2col addressing invariants, register protocol behavior, and a bounded
direct-vector controller progress property. The RTL also contains
simulation/formal assertions for request stability, single outstanding im2col
reads, tile bounds, legal controller states, and padding-read suppression.

SymbiYosys, Yosys, and an SMT solver are required. They are not bundled with
the repository.
