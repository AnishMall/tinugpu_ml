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
  
  -- Memory interface type conversions
  mem_rdata  <= std_logic_vector(mem_rdata_i);
  mem_ready  <= std_logic(mem_ready_i);
  mem_rvalid <= std_logic(mem_rvalid_i);
  
  -- Type conversions: std_logic -> std_ulogic
  bus_rsp_o.ack  <= std_ulogic(mmio_ready) and bus_req_i.stb;
  bus_rsp_o.err  <= '0';
  bus_rsp_o.data <= std_ulogic_vector(mmio_rdata);
  
  mem_req_o   <= std_ulogic(mem_req);
  mem_we_o    <= std_ulogic(mem_we);
  mem_addr_o  <= std_ulogic_vector(mem_addr);
  mem_wdata_o <= std_ulogic_vector(mem_wdata);
  mem_wstrb_o <= std_ulogic_vector(mem_wstrb);
  
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