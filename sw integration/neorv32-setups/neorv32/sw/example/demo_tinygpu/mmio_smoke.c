#include <stdint.h>
#include <neorv32.h>

#define TINYGPU_BASE       0xFFEE0000UL
#define TGPU_REG_CTRL      0x00u
#define TGPU_REG_SRC0_ADDR 0x10u
#define TGPU_REG(offset)   (*((volatile uint32_t *)(TINYGPU_BASE + (offset))))

int main(void) {
  uint32_t pass = 0;
  uint32_t fail = 0;

  TGPU_REG(TGPU_REG_CTRL) = 0;
  if (TGPU_REG(TGPU_REG_CTRL) == 0) {
    pass++;
  } else {
    fail++;
  }

  TGPU_REG(TGPU_REG_SRC0_ADDR) = 0xDEADBEEFu;
  if (TGPU_REG(TGPU_REG_SRC0_ADDR) == 0xDEADBEEFu) {
    pass++;
  } else {
    fail++;
  }
  TGPU_REG(TGPU_REG_SRC0_ADDR) = 0;

  neorv32_gpio_port_set(0x54470000u | ((pass & 0xffu) << 8) | (fail & 0xffu));

  while (1) {
    __asm__ volatile ("wfi");
  }
}
