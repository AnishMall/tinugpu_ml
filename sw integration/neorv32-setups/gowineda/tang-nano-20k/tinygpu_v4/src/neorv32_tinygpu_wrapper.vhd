-- ===============================================================================
-- NEORV32 TinyGPU-ML Wrapper
-- Wraps the SystemVerilog tinygpu_top module for NEORV32 integration
-- ===============================================================================

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library neorv32;
use neorv32.neorv32_package.all;

entity neorv32_tinygpu_wrapper is
  port (
    clk_i     : in  std_ulogic;
    rstn_i    : in  std_ulogic;
    bus_req_i : in  bus_req_t;
    bus_rsp_o : out bus_rsp_t;
    
    -- TinyGPU memory master (connects to system bus)
    mem_req_o   : out std_ulogic;
    mem_we_o    : out std_ulogic;
    mem_addr_o  : out std_ulogic_vector(31 downto 0);
    mem_wdata_o : out std_ulogic_vector(31 downto 0);
    mem_wstrb_o : out std_ulogic_vector(3 downto 0);
    mem_rdata_i : in  std_ulogic_vector(31 downto 0);
    mem_ready_i : in  std_ulogic;
    mem_rvalid_i: in  std_ulogic;
    
    irq_o     : out std_ulogic
  );
end neorv32_tinygpu_wrapper;

architecture neorv32_tinygpu_wrapper_rtl of neorv32_tinygpu_wrapper is

  -- Component declaration for SystemVerilog module
  component tinygpu_top is
    port (
      clk          : in  std_logic;
      rst_n        : in  std_logic;
      
      -- MMIO slave
      mmio_valid   : in  std_logic;
      mmio_we      : in  std_logic;
      mmio_addr    : in  std_logic_vector(31 downto 0);
      mmio_wdata   : in  std_logic_vector(31 downto 0);
      mmio_wstrb   : in  std_logic_vector(3 downto 0);
      mmio_rdata   : out std_logic_vector(31 downto 0);
      mmio_ready   : out std_logic;
      
      -- Memory master
      mem_req      : out std_logic;
      mem_we       : out std_logic;
      mem_addr     : out std_logic_vector(31 downto 0);
      mem_wdata    : out std_logic_vector(31 downto 0);
      mem_wstrb    : out std_logic_vector(3 downto 0);
      mem_rdata    : in  std_logic_vector(31 downto 0);
      mem_ready    : in  std_logic;
      mem_rvalid   : in  std_logic;
      
      irq          : out std_logic
    );
  end component;

  -- Internal signals for type conversion (std_ulogic <-> std_logic)
  signal clk        : std_logic;
  signal rstn       : std_logic;
  signal mmio_valid : std_logic;
  signal mmio_we    : std_logic;
  signal mmio_addr  : std_logic_vector(31 downto 0);
  signal mmio_wdata : std_logic_vector(31 downto 0);
  signal mmio_wstrb : std_logic_vector(3 downto 0);
  signal mmio_rdata : std_logic_vector(31 downto 0);
  signal mmio_ready : std_logic;
  
  signal mem_req    : std_logic;
  signal mem_we     : std_logic;
  signal mem_addr   : std_logic_vector(31 downto 0);
  signal mem_wdata  : std_logic_vector(31 downto 0);
  signal mem_wstrb  : std_logic_vector(3 downto 0);
  signal mem_rdata  : std_logic_vector(31 downto 0);
  signal mem_ready  : std_logic;
  signal mem_rvalid : std_logic;
  signal irq_int    : std_logic;

  type mem_bridge_state_t is (MEM_IDLE, MEM_WAIT_READ, MEM_WAIT_WRITE, MEM_WAIT_DROP);
  signal mem_bridge_state : mem_bridge_state_t;
  signal mem_bus_req       : std_ulogic;
  signal mem_bus_we        : std_ulogic;
  signal mem_bus_addr      : std_ulogic_vector(31 downto 0);
  signal mem_bus_wdata     : std_ulogic_vector(31 downto 0);
  signal mem_bus_wstrb     : std_ulogic_vector(3 downto 0);
  signal mem_core_rdata    : std_logic_vector(31 downto 0);
  signal mem_core_ready    : std_logic;
  signal mem_core_rvalid   : std_logic;

begin

  -- Type conversions: std_ulogic -> std_logic
  clk        <= std_logic(clk_i);
  rstn       <= std_logic(rstn_i);
  mmio_valid <= std_logic(bus_req_i.stb);
  mmio_we    <= std_logic(bus_req_i.rw);
  mmio_addr  <= std_logic_vector(bus_req_i.addr);
  mmio_wdata <= std_logic_vector(bus_req_i.data);
  
  -- Byte strobes (NEORV32 doesn't use strobes on reads, so default to all 1s)
  mmio_wstrb <= "1111" when bus_req_i.rw = '1' else "0000";
  
  mem_rdata  <= mem_core_rdata;
  mem_ready  <= mem_core_ready;
  mem_rvalid <= mem_core_rvalid;
  
  -- NEORV32 peripherals return a registered, single-cycle response.
  bus_response: process(clk_i, rstn_i)
  begin
    if rstn_i = '0' then
      bus_rsp_o <= rsp_terminate_c;
    elsif rising_edge(clk_i) then
      bus_rsp_o.ack  <= '0';
      bus_rsp_o.err  <= '0';
      bus_rsp_o.data <= (others => '0');
      if (bus_req_i.stb = '1') and (mmio_ready = '1') then
        bus_rsp_o.ack <= '1';
        if bus_req_i.rw = '0' then
          bus_rsp_o.data <= std_ulogic_vector(mmio_rdata);
        end if;
      end if;
    end if;
  end process bus_response;
  
  mem_req_o   <= mem_bus_req;
  mem_we_o    <= mem_bus_we;
  mem_addr_o  <= mem_bus_addr;
  mem_wdata_o <= mem_bus_wdata;
  mem_wstrb_o <= mem_bus_wstrb;

  -- Convert TinyGPU's split ready/rvalid protocol into one NEORV32
  -- completion response. Only one transaction can be outstanding.
  memory_bridge: process(clk_i, rstn_i)
  begin
    if rstn_i = '0' then
      mem_bridge_state <= MEM_IDLE;
      mem_bus_req       <= '0';
      mem_bus_we        <= '0';
      mem_bus_addr      <= (others => '0');
      mem_bus_wdata     <= (others => '0');
      mem_bus_wstrb     <= (others => '0');
      mem_core_rdata    <= (others => '0');
      mem_core_ready    <= '0';
      mem_core_rvalid   <= '0';
    elsif rising_edge(clk_i) then
      mem_bus_req     <= '0';
      mem_core_ready  <= '0';
      mem_core_rvalid <= '0';

      case mem_bridge_state is
        when MEM_IDLE =>
          if mem_req = '1' then
            mem_bus_req   <= '1';
            mem_bus_we    <= std_ulogic(mem_we);
            mem_bus_addr  <= std_ulogic_vector(mem_addr);
            mem_bus_wdata <= std_ulogic_vector(mem_wdata);
            if mem_we = '1' then
              mem_bus_wstrb    <= std_ulogic_vector(mem_wstrb);
              mem_bridge_state <= MEM_WAIT_WRITE;
            else
              -- NEORV32 uses BEN as the RAM lane enable for reads too.
              mem_bus_wstrb    <= (others => '1');
              mem_core_ready   <= '1';
              mem_bridge_state <= MEM_WAIT_READ;
            end if;
          end if;

        when MEM_WAIT_READ =>
          if (mem_rvalid_i = '1') or (mem_ready_i = '1') then
            mem_core_rdata   <= std_logic_vector(mem_rdata_i);
            mem_core_rvalid  <= '1';
            mem_bridge_state <= MEM_WAIT_DROP;
          end if;

        when MEM_WAIT_WRITE =>
          if mem_ready_i = '1' then
            mem_core_ready   <= '1';
            mem_bridge_state <= MEM_WAIT_DROP;
          end if;

        when MEM_WAIT_DROP =>
          if mem_req = '0' then
            mem_bridge_state <= MEM_IDLE;
          end if;
      end case;
    end if;
  end process memory_bridge;
  
  irq_o <= std_ulogic(irq_int);

  -- Instantiate the SystemVerilog TinyGPU top module
  tinygpu_top_inst: tinygpu_top
    port map (
      clk          => clk,
      rst_n        => rstn,
      
      mmio_valid   => mmio_valid,
      mmio_we      => mmio_we,
      mmio_addr    => mmio_addr,
      mmio_wdata   => mmio_wdata,
      mmio_wstrb   => mmio_wstrb,
      mmio_rdata   => mmio_rdata,
      mmio_ready   => mmio_ready,
      
      mem_req      => mem_req,
      mem_we       => mem_we,
      mem_addr     => mem_addr,
      mem_wdata    => mem_wdata,
      mem_wstrb    => mem_wstrb,
      mem_rdata    => mem_rdata,
      mem_ready    => mem_ready,
      mem_rvalid   => mem_rvalid,
      
      irq          => irq_int
    );

end neorv32_tinygpu_wrapper_rtl;
