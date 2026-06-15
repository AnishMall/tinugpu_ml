# TinyGPU formal checks

Run `sby -f formal/tinygpu.sby` from the repository root. The project proves
memory-arbiter selection, counter monotonicity, and bounded DMA pointer safety.
The RTL also contains simulation/formal assertions for request stability,
single outstanding im2col reads, tile bounds, legal controller states, and
padding-read suppression.

SymbiYosys, Yosys, and an SMT solver are required. They are not bundled with
the repository.
