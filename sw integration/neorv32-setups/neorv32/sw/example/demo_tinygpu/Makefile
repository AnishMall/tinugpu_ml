# =============================================================================
# Makefile for TinyGPU-ML test application
# Place this in: neorv32/sw/example/tinygpu_test/
# =============================================================================

# Path to NEORV32 software framework (adjust if needed)
NEORV32_HOME ?= ../../..

# RISC-V toolchain prefix
RISCV_PREFIX ?= riscv32-unknown-elf-

# Your source files
APP_SRC  = main.c
APP_SRC += tinygpu_driver.c

# Include paths for your driver header
APP_INC = -I.

# Include the common NEORV32 makefile
include $(NEORV32_HOME)/sw/common/common.mk
