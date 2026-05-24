#include <neorv32.h>

// TinyGPU MMIO base and registers
#define TINYGPU_BASE   0xFFEE0000u

#define TGPU_CTRL      (*(volatile uint32_t*)(TINYGPU_BASE + 0x00))
#define TGPU_STATUS    (*(volatile uint32_t*)(TINYGPU_BASE + 0x04))
#define TGPU_SRC0ADDR  (*(volatile uint32_t*)(TINYGPU_BASE + 0x10))
#define TGPU_SRC1ADDR  (*(volatile uint32_t*)(TINYGPU_BASE + 0x14))
#define TGPU_DSTADDR   (*(volatile uint32_t*)(TINYGPU_BASE + 0x1C))
#define TGPU_DIM_M     (*(volatile uint32_t*)(TINYGPU_BASE + 0x20))
#define TGPU_DIM_N     (*(volatile uint32_t*)(TINYGPU_BASE + 0x24))
#define TGPU_DIM_K     (*(volatile uint32_t*)(TINYGPU_BASE + 0x28))

int main(void) {

  // 1) Initialize UART0 (for prints in simulation)
  neorv32_uart0_setup(19200, 0);
  neorv32_uart0_printf("TinyGPU demo start.\n");

  // 2) Prepare tiny test data (very small matrices/vectors)
  // For now, just allocate a small array in DMEM
  static uint8_t A[4] __attribute__ ((aligned(4))) = {1, 2, 3, 4};
  static uint8_t B[4] __attribute__ ((aligned(4))) = {5, 6, 7, 8};
  static uint8_t C[4] __attribute__ ((aligned(4))) = {0, 0, 0, 0};

  // 3) Program TinyGPU MMIO registers
  TGPU_SRC0ADDR = (uint32_t)A;
  TGPU_SRC1ADDR = (uint32_t)B;
  TGPU_DSTADDR  = (uint32_t)C;

  TGPU_DIM_M = 2; // example dimensions
  TGPU_DIM_N = 2;
  TGPU_DIM_K = 1;

  // 4) Start TinyGPU (set START bit in CTRL)
  // Adapt this to your actual CTRL bit encoding
  const uint32_t CTRL_START_MASK = 1u << 0;
  TGPU_CTRL = CTRL_START_MASK;

  // 5) Poll STATUS until DONE
  const uint32_t STATUS_DONE_MASK = 1u << 1; // adjust to your spec
  while ((TGPU_STATUS & STATUS_DONE_MASK) == 0u) {
    // busy-wait; in real code you might sleep or use IRQ
  }

  // 6) Print one result element to check DMA + compute worked
  neorv32_uart0_printf("TinyGPU done. C[0] = %u\n", (unsigned)C[0]);

  // 7) End
  while (1) {
    // stop here
  }

  return 0;
}