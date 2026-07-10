# TinyGPU Branch Coverage Closure

## Purpose

Branch coverage is used to measure how much of the RTL decision logic has been exercised by simulation. For TinyGPU, the important closure target is not raw 100% branch coverage. The practical target is:

- cover all architecturally reachable legal operation paths;
- cover expected software-visible error paths;
- prove key defensive branches are unreachable during legal operation;
- document branches that remain intentionally defensive.

This is especially important for `tinygpu_cmd_ctrl.sv`, where one controller supports direct mode, descriptor mode, GEMM, GEMV, vector operations, hardware Conv2D, bias, ReLU, clamp, requantization, INT8/INT32 stores, edge tiles, and error exits.

## Current Coverage Metrics

The latest Verilator coverage run reports:

- Coarse functional coverage: `100.00% (33/33 bins)`
- Valid controller cross-product coverage: `100.00% (169/169 bins)`
- Canonical top RTL line coverage: `96.45% (1740/1804)`
- Canonical top RTL logical branch coverage: `92.17% (753/817)`
- Canonical controller logical branch coverage: `95.66% (353/369)`
- Merged multi-binary RTL branch coverage: `74.68% (15139/20271)`
- Merged non-memory RTL branch coverage: `74.01% (11965/16167)`
- Waiver-adjusted merged RTL branch coverage: `74.84% (15131/20219)`

The canonical metric comes from one `tinygpu_top` binary containing the
deterministic differential regression and exhaustive legal controller matrix.
It is the primary closure metric because each RTL decision appears once. The
lower merged metric combines independently compiled directed benches; the same
source decision can therefore appear several times under different testbench
hierarchies and is retained as a regression-breadth indicator.

The logic-only merged metric excludes `tinygpu_dma.sv`, `tinygpu_spm.sv`, and
`tinygpu_mem_arbiter.sv` because memory-system behavior is outside the main
project scope.

The waiver-adjusted metrics remove only the lines listed in
`verification/branch_waivers.txt`. These are deliberately narrow waivers for
architecturally impossible branches. Legal error paths and legal `default`
branches, such as byte-lane 3 handling, remain counted.
The current waiver file removes 52 merged branch bins, 8 of which were
already covered; the adjusted number remains close to the unadjusted metric.

## Covered Architectural Paths

The directed and differential tests cover these reachable behaviors:

- Direct GEMM and descriptor GEMM.
- GEMV descriptor flow.
- Multi-K GEMM where `K > TILE_K`.
- Full tiles and partial edge tiles.
- INT32 and INT8 destination stores.
- Bias, ReLU, clamp, requantization, and saturation behavior.
- Vector add, vector multiply, ReLU, and clamp.
- Hardware Conv2D using RTL streaming im2col.
- Conv2D direct mode and 18-word descriptor mode.
- Conv2D `1x1` and `3x3` kernels.
- Conv2D stride and padding combinations, including padded-zero injection.
- Illegal opcode, bad shape, invalid Conv2D config, invalid Conv2D descriptor ABI, and conflicting destination flag errors.
- MMIO status, IRQ clear, command counter, and register readback behavior.

## Formal Proof Points

The RTL contains simulation/formal assertions under ``ifndef SYNTHESIS``. These assertions are ignored by synthesis but checked by simulation/formal tools.

The key branch-closure proof point is:

- `tinygpu_cmd_ctrl.sv`: `state_q <= S_ERROR`

This assertion proves that, after reset, the command-controller FSM state
register remains inside the declared legal command-state encodings. Therefore
the controller FSM `default` branch is a defensive recovery path, not an
expected architectural path.

For `tinygpu_dma.sv`, the FSM uses a 3-bit enum type and names all eight
possible encodings. Its `default` branch is therefore statically unreachable
for a known 2-state binary value. The default branch remains in the source as
simulator/synthesis hygiene and fault containment for unknown or corrupted
states.

For `tinygpu_im2col_loader.sv`, the `default` branch also handles the real
`IM2COL_ERROR` state, so it is not waived. That path is a legal error path and
must stay counted.

Additional protocol assertions check:

- no MAC operation outside `S_COMPUTE_K`;
- no Conv2D scratchpad write outside the Conv2D load state;
- no DMA request mutation while waiting for memory acceptance;
- no read response without an outstanding read;
- no simultaneous `done` and `busy`;
- no simultaneous `done` and `error`;
- tile counter bounds.

Run the formal suite with:

```sh
sby -f formal/tinygpu.sby
```

## Waived Defensive Branches

These branches are intentionally retained but should not be counted as missing architectural behavior.

| RTL area | Branch type | Closure rationale |
|---|---|---|
| `tinygpu_cmd_ctrl.sv` FSM `default` | Illegal controller state recovery | Proved unreachable after reset by `state_q <= S_ERROR`; retained to force safe idle recovery if state corruption occurs. |
| `tinygpu_dma.sv` FSM `default` | Illegal DMA state recovery | Statically unreachable for known binary values because all eight 3-bit enum encodings are named states; retained as fault containment. |
| Byte-lane `default` cases | Lane 3 shorthand | These are not unreachable; `default` is used as the fourth legal byte lane to reduce duplicate case labels. |
| Reserved register/default read paths | Unknown MMIO address handling | Architecturally defined to return zero or ignore writes; covered by register branch tests where meaningful. |
| Defensive error exits | Invalid command/config handling | Covered when software-visible. Unreachable internal corruption cases remain waived unless they can be forced through legal MMIO. |

## What Remains Open

All 169 valid controller feature crosses are covered. The remaining canonical
controller branch gaps are concentrated in injected memory-error exits,
specific ready/valid stall interleavings, assertion-failure outcomes, and
defensive state recovery. Those should be closed with protocol fault injection
or formal proof rather than ordinary legal commands.

## Reporting Guidance

For project presentation, report the numbers with clear labels:

- `100% coarse functional coverage`: all 33 defined feature bins are hit.
- `100% controller cross-product coverage`: all 169 valid combinations are hit.
- `92.17% canonical top logical branch coverage`: one hierarchy, with no duplicate RTL instances in the denominator.
- `95.66% canonical controller logical branch coverage`: branch coverage inside `tinygpu_cmd_ctrl.sv`.
- `74.68% merged multi-binary RTL branch coverage`: secondary regression-breadth metric across independently compiled benches.

Do not describe the project as fully verified. A precise statement is:

> The design covers all defined feature and legal controller cross bins, with over 92% canonical top-level logical branch coverage. Remaining gaps are concentrated in fault-injection, protocol-interleaving, assertion-failure, and defensive recovery paths.
