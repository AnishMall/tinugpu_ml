library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library neorv32;
use neorv32.neorv32_package.all;

entity neorv32_tinygpu is
  port (
    clk_i     : in  std_ulogic;
    rstn_i    : in  std_ulogic;
    bus_req_i : in  bus_req_t;
    bus_rsp_o : out bus_rsp_t;
    irq_o     : out std_ulogic
  );
end neorv32_tinygpu;

architecture rtl of neorv32_tinygpu is

  -- simple 4-register file: 0x00, 0x04, 0x08, 0x0C
  type reg_file_t is array (0 to 3) of std_ulogic_vector(31 downto 0);
  signal regs : reg_file_t := (others => (others => '0'));

begin

  irq_o <= '0'; -- no interrupts for now

  bus_access: process(clk_i)
    variable idx : integer range 0 to 3;
  begin
    if rising_edge(clk_i) then
      -- default: no response
      bus_rsp_o <= rsp_terminate_c;

      if (rstn_i = '0') then
        regs <= (others => (others => '0'));

      elsif (bus_req_i.stb = '1') then
        idx := to_integer(unsigned(bus_req_i.addr(3 downto 2)));

        bus_rsp_o.ack  <= '1';        -- always acknowledge
        bus_rsp_o.err  <= '0';

        if (bus_req_i.rw = '1') then
          -- write
          regs(idx)      <= bus_req_i.data;
        else
          -- read
          bus_rsp_o.data <= regs(idx);
        end if;
      end if;
    end if;
  end process;

end architecture rtl;
