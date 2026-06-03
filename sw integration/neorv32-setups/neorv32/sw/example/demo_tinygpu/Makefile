# =============================================================================
# Makefile for TinyGPU-ML test application
# Place this in: neorv32/sw/example/tinygpu_test/
# =============================================================================

# Path to NEORV32 software framework (adjust if needed)
NEORV32_HOME ?= ../../..
LOCAL_XPACK_BIN ?= /Users/anish/tinyml_gpu/.tools/xpack-riscv-none-elf-gcc-15.2.0-1/bin

# RISC-V toolchain prefix
# Prefer a complete bare-metal toolchain when available.
ifeq ($(origin RISCV_PREFIX), undefined)
  ifneq ($(wildcard $(LOCAL_XPACK_BIN)/riscv-none-elf-gcc),)
    RISCV_PREFIX := $(LOCAL_XPACK_BIN)/riscv-none-elf-
  else ifneq ($(shell command -v riscv-none-elf-gcc 2>/dev/null),)
    RISCV_PREFIX := riscv-none-elf-
  else ifneq ($(shell command -v riscv32-unknown-elf-gcc 2>/dev/null),)
    RISCV_PREFIX := riscv32-unknown-elf-
  else ifneq ($(shell command -v riscv64-unknown-elf-gcc 2>/dev/null),)
    RISCV_PREFIX := riscv64-unknown-elf-
  else ifneq ($(shell command -v riscv64-elf-gcc 2>/dev/null),)
    RISCV_PREFIX := riscv64-elf-
  else
    RISCV_PREFIX := riscv32-unknown-elf-
  endif
endif

# Your source files
APP_SRC  = main.c
APP_SRC += tinygpu_driver.c

# Include paths for your driver header
APP_INC = -I.

# Include the common NEORV32 makefile
include $(NEORV32_HOME)/sw/common/common.mk

.PHONY: sim_ghdl_safe sim_ghdl_trace

sim_ghdl_safe:
	$(MAKE) USER_FLAGS+=' -DTGPU_GHDL_SIM=1 -DTGPU_SW_SIM_DISABLE_IRQ_TEST=1' \
	  GHDL_RUN_FLAGS='--stop-time=20ms -gDUAL_CORE_EN=false -gTRACE_LOG_EN=false -gICACHE_EN=false -gDCACHE_EN=false -gUART_SIM_BAUD=1000000' \
	  clean_all all install sim

sim_ghdl_trace:
	$(MAKE) USER_FLAGS+=' -DTGPU_GHDL_SIM=1 -DTGPU_SW_SIM_DISABLE_IRQ_TEST=1' \
	  GHDL_RUN_FLAGS='--stop-time=4ms -gDUAL_CORE_EN=false -gTRACE_LOG_EN=true -gICACHE_EN=false -gDCACHE_EN=false -gUART_SIM_BAUD=1000000' \
	  clean_all all install sim
