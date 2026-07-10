# TinyGPU formal checks

Run `sby -f formal/tinygpu.sby` from the repository root. The project proves
memory-arbiter selection, counter monotonicity, bounded DMA pointer safety,
im2col addressing invariants, register protocol behavior, and a bounded
direct-vector controller progress property. The RTL also contains
simulation/formal assertions for request stability, single outstanding im2col
reads, tile bounds, legal controller/DMA/im2col states, and padding-read
suppression.

The legal-state assertions are also part of the branch-coverage closure story:
they justify waiving defensive FSM `default` branches that should be unreachable
after reset during legal operation. See `../Branch_Coverage_Closure.md`.

SymbiYosys, Yosys, and an SMT solver are required. They are not bundled with
the repository.
