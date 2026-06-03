library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity tinygpu_top is
  port (
    clk        : in  std_logic;
    rst_n      : in  std_logic;
    mmio_valid : in  std_logic;
    mmio_we    : in  std_logic;
    mmio_addr  : in  std_logic_vector(31 downto 0);
    mmio_wdata : in  std_logic_vector(31 downto 0);
    mmio_wstrb : in  std_logic_vector(3 downto 0);
    mmio_rdata : out std_logic_vector(31 downto 0);
    mmio_ready : out std_logic;
    mem_req    : out std_logic;
    mem_we     : out std_logic;
    mem_addr   : out std_logic_vector(31 downto 0);
    mem_wdata  : out std_logic_vector(31 downto 0);
    mem_wstrb  : out std_logic_vector(3 downto 0);
    mem_rdata  : in  std_logic_vector(31 downto 0);
    mem_ready  : in  std_logic;
    mem_rvalid : in  std_logic;
    irq        : out std_logic
  );
end entity tinygpu_top;

architecture behavioral of tinygpu_top is

  constant REG_CTRL        : unsigned(7 downto 0) := x"00";
  constant REG_STATUS      : unsigned(7 downto 0) := x"04";
  constant REG_CMD_ADDR    : unsigned(7 downto 0) := x"08";
  constant REG_DIRECT_OP   : unsigned(7 downto 0) := x"0C";
  constant REG_SRC0_ADDR   : unsigned(7 downto 0) := x"10";
  constant REG_SRC1_ADDR   : unsigned(7 downto 0) := x"14";
  constant REG_BIAS_ADDR   : unsigned(7 downto 0) := x"18";
  constant REG_DST_ADDR    : unsigned(7 downto 0) := x"1C";
  constant REG_DIM_M       : unsigned(7 downto 0) := x"20";
  constant REG_DIM_N       : unsigned(7 downto 0) := x"24";
  constant REG_DIM_K       : unsigned(7 downto 0) := x"28";
  constant REG_STRIDE0     : unsigned(7 downto 0) := x"2C";
  constant REG_STRIDE1     : unsigned(7 downto 0) := x"30";
  constant REG_STRIDE_DST  : unsigned(7 downto 0) := x"34";
  constant REG_FLAGS       : unsigned(7 downto 0) := x"38";
  constant REG_SCALE       : unsigned(7 downto 0) := x"3C";
  constant REG_SHIFT_ZP    : unsigned(7 downto 0) := x"40";
  constant REG_CYCLE_COUNT : unsigned(7 downto 0) := x"44";
  constant REG_ACTIVE_CNT  : unsigned(7 downto 0) := x"48";
  constant REG_STALL_CNT   : unsigned(7 downto 0) := x"4C";
  constant REG_CMD_COUNT   : unsigned(7 downto 0) := x"50";
  constant REG_IRQ_STATUS  : unsigned(7 downto 0) := x"54";

  constant CTRL_START       : integer := 0;
  constant CTRL_SOFT_RESET  : integer := 1;
  constant CTRL_IRQ_EN      : integer := 2;
  constant CTRL_DIRECT_MODE : integer := 3;

  constant STATUS_BUSY      : integer := 0;
  constant STATUS_DONE      : integer := 1;
  constant STATUS_ERR_OP    : integer := 2;
  constant STATUS_ERR_SHAPE : integer := 3;
  constant STATUS_ERR_MEM   : integer := 4;
  constant STATUS_ERR_FMT   : integer := 5;
  constant STATUS_READY     : integer := 6;

  constant OP_GEMM    : std_logic_vector(7 downto 0) := x"01";
  constant OP_GEMV    : std_logic_vector(7 downto 0) := x"02";
  constant OP_VEC_ADD : std_logic_vector(7 downto 0) := x"03";
  constant OP_RELU    : std_logic_vector(7 downto 0) := x"05";

  type state_t is (
    ST_IDLE,
    ST_DISPATCH,
    ST_RD_REQ,
    ST_RD_WAIT,
    ST_WR_REQ,
    ST_WR_WAIT,
    ST_FINISH
  );

  type read_kind_t is (
    RK_NONE,
    RK_DESC,
    RK_VEC_X8,
    RK_VEC_Y8,
    RK_GEMM_A8,
    RK_GEMM_B8,
    RK_RELU_32
  );

  signal state_q : state_t := ST_IDLE;
  signal read_kind_q : read_kind_t := RK_NONE;

  signal irq_enable_q   : std_logic := '0';
  signal direct_mode_q  : std_logic := '0';
  signal desc_loaded_q  : std_logic := '0';
  signal irq_pending_q  : std_logic := '0';
  signal busy_q         : std_logic := '0';
  signal done_q         : std_logic := '0';
  signal err_opcode_q   : std_logic := '0';
  signal err_shape_q    : std_logic := '0';
  signal err_memory_q   : std_logic := '0';
  signal err_format_q   : std_logic := '0';

  signal cmd_addr_q    : std_logic_vector(31 downto 0) := (others => '0');
  signal opcode_q      : std_logic_vector(7 downto 0)  := (others => '0');
  signal src0_addr_q   : unsigned(31 downto 0) := (others => '0');
  signal src1_addr_q   : unsigned(31 downto 0) := (others => '0');
  signal bias_addr_q   : unsigned(31 downto 0) := (others => '0');
  signal dst_addr_q    : unsigned(31 downto 0) := (others => '0');
  signal dim_m_q       : integer := 0;
  signal dim_n_q       : integer := 0;
  signal dim_k_q       : integer := 0;
  signal stride0_q     : integer := 0;
  signal stride1_q     : integer := 0;
  signal stride_dst_q  : integer := 0;
  signal flags_q       : std_logic_vector(31 downto 0) := (others => '0');
  signal scale_q       : std_logic_vector(31 downto 0) := (others => '0');
  signal shift_zp_q    : std_logic_vector(31 downto 0) := (others => '0');

  signal cycle_count_q : unsigned(31 downto 0) := (others => '0');
  signal active_count_q: unsigned(31 downto 0) := (others => '0');
  signal stall_count_q : unsigned(31 downto 0) := (others => '0');
  signal cmd_count_q   : unsigned(31 downto 0) := (others => '0');

  signal mem_req_q     : std_logic := '0';
  signal mem_we_q      : std_logic := '0';
  signal mem_addr_q    : std_logic_vector(31 downto 0) := (others => '0');
  signal mem_wdata_q   : std_logic_vector(31 downto 0) := (others => '0');
  signal mem_wstrb_q   : std_logic_vector(3 downto 0)  := (others => '0');
  signal cur_addr_q    : unsigned(31 downto 0) := (others => '0');
  signal desc_word_q   : integer := 0;

  signal vec_idx_q     : integer := 0;
  signal gemm_row_q    : integer := 0;
  signal gemm_col_q    : integer := 0;
  signal gemm_k_q      : integer := 0;
  signal a_val_q       : signed(7 downto 0) := (others => '0');
  signal acc_q         : signed(31 downto 0) := (others => '0');
  signal result_q      : signed(31 downto 0) := (others => '0');

  function reg_addr(addr : std_logic_vector(31 downto 0)) return unsigned is
  begin
    return unsigned(addr(7 downto 0));
  end function;

  function align_word(addr : unsigned(31 downto 0)) return std_logic_vector is
    variable tmp : unsigned(31 downto 0);
  begin
    tmp := addr;
    tmp(1 downto 0) := "00";
    return std_logic_vector(tmp);
  end function;

  function extract_s8(word : std_logic_vector(31 downto 0); byte_idx : natural) return signed is
  begin
    case byte_idx is
      when 0 => return signed(word(7 downto 0));
      when 1 => return signed(word(15 downto 8));
      when 2 => return signed(word(23 downto 16));
      when others => return signed(word(31 downto 24));
    end case;
  end function;

  function slv32(i : integer) return std_logic_vector is
  begin
    return std_logic_vector(to_signed(i, 32));
  end function;

  function u32(i : integer) return unsigned is
  begin
    return to_unsigned(i, 32);
  end function;

  function max0(x : signed(31 downto 0)) return signed is
  begin
    if x(31) = '1' then
      return to_signed(0, 32);
    else
      return x;
    end if;
  end function;

  signal status_word : std_logic_vector(31 downto 0);

begin

  mmio_ready <= '1';
  mem_req    <= mem_req_q;
  mem_we     <= mem_we_q;
  mem_addr   <= mem_addr_q;
  mem_wdata  <= mem_wdata_q;
  mem_wstrb  <= mem_wstrb_q;
  irq        <= irq_enable_q and irq_pending_q;

  status_word(STATUS_BUSY)      <= busy_q;
  status_word(STATUS_DONE)      <= done_q;
  status_word(STATUS_ERR_OP)    <= err_opcode_q;
  status_word(STATUS_ERR_SHAPE) <= err_shape_q;
  status_word(STATUS_ERR_MEM)   <= err_memory_q;
  status_word(STATUS_ERR_FMT)   <= err_format_q;
  status_word(STATUS_READY)     <= not busy_q;
  status_word(31 downto 7)      <= (others => '0');

  process(all)
  begin
    mmio_rdata <= (others => '0');
    case reg_addr(mmio_addr) is
      when REG_CTRL =>
        mmio_rdata(CTRL_IRQ_EN)      <= irq_enable_q;
        mmio_rdata(CTRL_DIRECT_MODE) <= direct_mode_q;
      when REG_STATUS      => mmio_rdata <= status_word;
      when REG_CMD_ADDR    => mmio_rdata <= cmd_addr_q;
      when REG_DIRECT_OP   => mmio_rdata(7 downto 0) <= opcode_q;
      when REG_SRC0_ADDR   => mmio_rdata <= std_logic_vector(src0_addr_q);
      when REG_SRC1_ADDR   => mmio_rdata <= std_logic_vector(src1_addr_q);
      when REG_BIAS_ADDR   => mmio_rdata <= std_logic_vector(bias_addr_q);
      when REG_DST_ADDR    => mmio_rdata <= std_logic_vector(dst_addr_q);
      when REG_DIM_M       => mmio_rdata <= std_logic_vector(to_unsigned(dim_m_q, 32));
      when REG_DIM_N       => mmio_rdata <= std_logic_vector(to_unsigned(dim_n_q, 32));
      when REG_DIM_K       => mmio_rdata <= std_logic_vector(to_unsigned(dim_k_q, 32));
      when REG_STRIDE0     => mmio_rdata <= std_logic_vector(to_unsigned(stride0_q, 32));
      when REG_STRIDE1     => mmio_rdata <= std_logic_vector(to_unsigned(stride1_q, 32));
      when REG_STRIDE_DST  => mmio_rdata <= std_logic_vector(to_unsigned(stride_dst_q, 32));
      when REG_FLAGS       => mmio_rdata <= flags_q;
      when REG_SCALE       => mmio_rdata <= scale_q;
      when REG_SHIFT_ZP    => mmio_rdata <= shift_zp_q;
      when REG_CYCLE_COUNT => mmio_rdata <= std_logic_vector(cycle_count_q);
      when REG_ACTIVE_CNT  => mmio_rdata <= std_logic_vector(active_count_q);
      when REG_STALL_CNT   => mmio_rdata <= std_logic_vector(stall_count_q);
      when REG_CMD_COUNT   => mmio_rdata <= std_logic_vector(cmd_count_q);
      when REG_IRQ_STATUS  => mmio_rdata(0) <= irq_pending_q;
      when others          => null;
    end case;
  end process;

  process(clk, rst_n)
    variable read_byte_v : signed(7 downto 0);
    variable read_word_v : signed(31 downto 0);
    variable acc_next_v  : signed(31 downto 0);
    variable row_base_v  : integer;
    variable b_base_v    : integer;
  begin
    if rst_n = '0' then
      state_q        <= ST_IDLE;
      read_kind_q    <= RK_NONE;
      irq_enable_q   <= '0';
      direct_mode_q  <= '0';
      desc_loaded_q  <= '0';
      irq_pending_q  <= '0';
      busy_q         <= '0';
      done_q         <= '0';
      err_opcode_q   <= '0';
      err_shape_q    <= '0';
      err_memory_q   <= '0';
      err_format_q   <= '0';
      cmd_addr_q     <= (others => '0');
      opcode_q       <= (others => '0');
      src0_addr_q    <= (others => '0');
      src1_addr_q    <= (others => '0');
      bias_addr_q    <= (others => '0');
      dst_addr_q     <= (others => '0');
      dim_m_q        <= 0;
      dim_n_q        <= 0;
      dim_k_q        <= 0;
      stride0_q      <= 0;
      stride1_q      <= 0;
      stride_dst_q   <= 0;
      flags_q        <= (others => '0');
      scale_q        <= (others => '0');
      shift_zp_q     <= (others => '0');
      cycle_count_q  <= (others => '0');
      active_count_q <= (others => '0');
      stall_count_q  <= (others => '0');
      cmd_count_q    <= (others => '0');
      mem_req_q      <= '0';
      mem_we_q       <= '0';
      mem_addr_q     <= (others => '0');
      mem_wdata_q    <= (others => '0');
      mem_wstrb_q    <= (others => '0');
      cur_addr_q     <= (others => '0');
      desc_word_q    <= 0;
      vec_idx_q      <= 0;
      gemm_row_q     <= 0;
      gemm_col_q     <= 0;
      gemm_k_q       <= 0;
      a_val_q        <= (others => '0');
      acc_q          <= (others => '0');
      result_q       <= (others => '0');
    elsif rising_edge(clk) then
      if busy_q = '1' then
        cycle_count_q  <= cycle_count_q + 1;
        active_count_q <= active_count_q + 1;
      end if;

      if mmio_valid = '1' and mmio_we = '1' then
        case reg_addr(mmio_addr) is
          when REG_CTRL =>
            irq_enable_q  <= mmio_wdata(CTRL_IRQ_EN);
            direct_mode_q <= mmio_wdata(CTRL_DIRECT_MODE);
            if mmio_wdata(CTRL_SOFT_RESET) = '1' then
              state_q        <= ST_IDLE;
              read_kind_q    <= RK_NONE;
              desc_loaded_q  <= '0';
              irq_pending_q  <= '0';
              busy_q         <= '0';
              done_q         <= '0';
              err_opcode_q   <= '0';
              err_shape_q    <= '0';
              err_memory_q   <= '0';
              err_format_q   <= '0';
              cycle_count_q  <= (others => '0');
              active_count_q <= (others => '0');
              stall_count_q  <= (others => '0');
              mem_req_q      <= '0';
              mem_we_q       <= '0';
              mem_wstrb_q    <= (others => '0');
            elsif mmio_wdata(CTRL_START) = '1' and busy_q = '0' then
              busy_q         <= '1';
              done_q         <= '0';
              irq_pending_q  <= '0';
              err_opcode_q   <= '0';
              err_shape_q    <= '0';
              err_memory_q   <= '0';
              err_format_q   <= '0';
              cycle_count_q  <= (others => '0');
              active_count_q <= (others => '0');
              stall_count_q  <= (others => '0');
              vec_idx_q      <= 0;
              gemm_row_q     <= 0;
              gemm_col_q     <= 0;
              gemm_k_q       <= 0;
              desc_word_q    <= 0;
              desc_loaded_q  <= '0';
              acc_q          <= (others => '0');
              result_q       <= (others => '0');
              state_q        <= ST_DISPATCH;
              read_kind_q    <= RK_NONE;
            end if;
          when REG_CMD_ADDR   => cmd_addr_q   <= mmio_wdata;
          when REG_DIRECT_OP  => opcode_q     <= mmio_wdata(7 downto 0);
          when REG_SRC0_ADDR  => src0_addr_q  <= unsigned(mmio_wdata);
          when REG_SRC1_ADDR  => src1_addr_q  <= unsigned(mmio_wdata);
          when REG_BIAS_ADDR  => bias_addr_q  <= unsigned(mmio_wdata);
          when REG_DST_ADDR   => dst_addr_q   <= unsigned(mmio_wdata);
          when REG_DIM_M      => dim_m_q      <= to_integer(unsigned(mmio_wdata(15 downto 0)));
          when REG_DIM_N      => dim_n_q      <= to_integer(unsigned(mmio_wdata(15 downto 0)));
          when REG_DIM_K      => dim_k_q      <= to_integer(unsigned(mmio_wdata(15 downto 0)));
          when REG_STRIDE0    => stride0_q    <= to_integer(unsigned(mmio_wdata(15 downto 0)));
          when REG_STRIDE1    => stride1_q    <= to_integer(unsigned(mmio_wdata(15 downto 0)));
          when REG_STRIDE_DST => stride_dst_q <= to_integer(unsigned(mmio_wdata(15 downto 0)));
          when REG_FLAGS      => flags_q      <= mmio_wdata;
          when REG_SCALE      => scale_q      <= mmio_wdata;
          when REG_SHIFT_ZP   => shift_zp_q   <= mmio_wdata;
          when REG_IRQ_STATUS =>
            if mmio_wdata(0) = '1' then
              irq_pending_q <= '0';
            end if;
          when others => null;
        end case;
      end if;

      case state_q is
        when ST_IDLE =>
          null;

        when ST_DISPATCH =>
          if (direct_mode_q = '0') and (desc_loaded_q = '0') then
            cur_addr_q   <= unsigned(cmd_addr_q);
            desc_word_q  <= 0;
            read_kind_q  <= RK_DESC;
            state_q      <= ST_RD_REQ;
          elsif opcode_q = OP_VEC_ADD then
            if dim_n_q <= 0 then
              err_shape_q <= '1';
              state_q     <= ST_FINISH;
            else
              cur_addr_q  <= src0_addr_q;
              read_kind_q <= RK_VEC_X8;
              state_q     <= ST_RD_REQ;
            end if;
          elsif opcode_q = OP_RELU then
            if dim_n_q <= 0 then
              err_shape_q <= '1';
              state_q     <= ST_FINISH;
            else
              cur_addr_q  <= src0_addr_q;
              read_kind_q <= RK_RELU_32;
              state_q     <= ST_RD_REQ;
            end if;
          elsif (opcode_q = OP_GEMM) or (opcode_q = OP_GEMV) then
            if (dim_m_q <= 0) or (dim_k_q <= 0) or (((opcode_q = OP_GEMM) and (dim_n_q <= 0))) then
              err_shape_q <= '1';
              state_q     <= ST_FINISH;
            else
              gemm_row_q  <= 0;
              gemm_col_q  <= 0;
              gemm_k_q    <= 0;
              acc_q       <= (others => '0');
              cur_addr_q  <= src0_addr_q;
              read_kind_q <= RK_GEMM_A8;
              state_q     <= ST_RD_REQ;
            end if;
          else
            err_opcode_q <= '1';
            state_q      <= ST_FINISH;
          end if;

        when ST_RD_REQ =>
          mem_req_q   <= '1';
          mem_we_q    <= '0';
          mem_addr_q  <= align_word(cur_addr_q);
          mem_wstrb_q <= "0000";
          state_q     <= ST_RD_WAIT;

        when ST_RD_WAIT =>
          if mem_rvalid = '1' or mem_ready = '1' then
            mem_req_q <= '0';
            case read_kind_q is
              when RK_DESC =>
                case desc_word_q is
                  when 0 =>
                    opcode_q <= mem_rdata(7 downto 0);
                  when 1 =>
                    flags_q <= mem_rdata;
                  when 2 =>
                    src0_addr_q <= unsigned(mem_rdata);
                  when 3 =>
                    src1_addr_q <= unsigned(mem_rdata);
                  when 4 =>
                    bias_addr_q <= unsigned(mem_rdata);
                  when 5 =>
                    dst_addr_q <= unsigned(mem_rdata);
                  when 6 =>
                    dim_m_q <= to_integer(unsigned(mem_rdata(15 downto 0)));
                    dim_n_q <= to_integer(unsigned(mem_rdata(31 downto 16)));
                  when 7 =>
                    dim_k_q <= to_integer(unsigned(mem_rdata(15 downto 0)));
                    stride0_q <= to_integer(unsigned(mem_rdata(31 downto 16)));
                  when 8 =>
                    stride1_q <= to_integer(unsigned(mem_rdata(15 downto 0)));
                    stride_dst_q <= to_integer(unsigned(mem_rdata(31 downto 16)));
                  when 9 =>
                    scale_q <= mem_rdata;
                  when 10 =>
                    shift_zp_q <= mem_rdata;
                  when others =>
                    null;
                end case;

                if desc_word_q < 10 then
                  desc_word_q <= desc_word_q + 1;
                  cur_addr_q  <= unsigned(cmd_addr_q) + u32((desc_word_q + 1) * 4);
                  state_q     <= ST_RD_REQ;
                else
                  desc_loaded_q <= '1';
                  state_q       <= ST_DISPATCH;
                end if;

              when RK_VEC_X8 =>
                a_val_q     <= extract_s8(mem_rdata, to_integer(cur_addr_q(1 downto 0)));
                cur_addr_q  <= src1_addr_q + u32(vec_idx_q);
                read_kind_q <= RK_VEC_Y8;
                state_q     <= ST_RD_REQ;

              when RK_VEC_Y8 =>
                read_byte_v := extract_s8(mem_rdata, to_integer(cur_addr_q(1 downto 0)));
                result_q    <= resize(a_val_q, 32) + resize(read_byte_v, 32);
                cur_addr_q  <= dst_addr_q + u32(vec_idx_q * 4);
                state_q     <= ST_WR_REQ;

              when RK_RELU_32 =>
                read_word_v := signed(mem_rdata);
                result_q    <= max0(read_word_v);
                cur_addr_q  <= dst_addr_q + u32(vec_idx_q * 4);
                state_q     <= ST_WR_REQ;

              when RK_GEMM_A8 =>
                a_val_q     <= extract_s8(mem_rdata, to_integer(cur_addr_q(1 downto 0)));
                b_base_v    := gemm_k_q * stride1_q + gemm_col_q;
                cur_addr_q  <= src1_addr_q + u32(b_base_v);
                read_kind_q <= RK_GEMM_B8;
                state_q     <= ST_RD_REQ;

              when RK_GEMM_B8 =>
                read_byte_v := extract_s8(mem_rdata, to_integer(cur_addr_q(1 downto 0)));
                acc_next_v  := acc_q + resize(a_val_q * read_byte_v, 32);
                if gemm_k_q + 1 < dim_k_q then
                  gemm_k_q    <= gemm_k_q + 1;
                  acc_q       <= acc_next_v;
                  row_base_v  := gemm_row_q * stride0_q + (gemm_k_q + 1);
                  cur_addr_q  <= src0_addr_q + u32(row_base_v);
                  read_kind_q <= RK_GEMM_A8;
                  state_q     <= ST_RD_REQ;
                else
                  result_q   <= acc_next_v;
                  cur_addr_q <= dst_addr_q + u32(gemm_row_q * stride_dst_q + gemm_col_q * 4);
                  state_q    <= ST_WR_REQ;
                end if;

              when others =>
                err_memory_q <= '1';
                state_q      <= ST_FINISH;
            end case;
          end if;

        when ST_WR_REQ =>
          mem_req_q   <= '1';
          mem_we_q    <= '1';
          mem_addr_q  <= align_word(cur_addr_q);
          mem_wdata_q <= std_logic_vector(result_q);
          mem_wstrb_q <= "1111";
          state_q     <= ST_WR_WAIT;

        when ST_WR_WAIT =>
          if mem_ready = '1' then
            mem_req_q   <= '0';
            mem_we_q    <= '0';
            mem_wstrb_q <= "0000";

            if opcode_q = OP_VEC_ADD then
              if vec_idx_q + 1 < dim_n_q then
                vec_idx_q   <= vec_idx_q + 1;
                cur_addr_q  <= src0_addr_q + u32(vec_idx_q + 1);
                read_kind_q <= RK_VEC_X8;
                state_q     <= ST_RD_REQ;
              else
                state_q <= ST_FINISH;
              end if;
            elsif opcode_q = OP_RELU then
              if vec_idx_q + 1 < dim_n_q then
                vec_idx_q   <= vec_idx_q + 1;
                cur_addr_q  <= src0_addr_q + u32((vec_idx_q + 1) * 4);
                read_kind_q <= RK_RELU_32;
                state_q     <= ST_RD_REQ;
              else
                state_q <= ST_FINISH;
              end if;
            else
              if opcode_q = OP_GEMV then
                if gemm_row_q + 1 < dim_m_q then
                  gemm_row_q   <= gemm_row_q + 1;
                  gemm_col_q   <= 0;
                  gemm_k_q     <= 0;
                  acc_q        <= (others => '0');
                  row_base_v   := (gemm_row_q + 1) * stride0_q;
                  cur_addr_q   <= src0_addr_q + u32(row_base_v);
                  read_kind_q  <= RK_GEMM_A8;
                  state_q      <= ST_RD_REQ;
                else
                  state_q <= ST_FINISH;
                end if;
              elsif gemm_col_q + 1 < dim_n_q then
                gemm_col_q   <= gemm_col_q + 1;
                gemm_k_q     <= 0;
                acc_q        <= (others => '0');
                row_base_v   := gemm_row_q * stride0_q;
                cur_addr_q   <= src0_addr_q + u32(row_base_v);
                read_kind_q  <= RK_GEMM_A8;
                state_q      <= ST_RD_REQ;
              elsif gemm_row_q + 1 < dim_m_q then
                gemm_row_q   <= gemm_row_q + 1;
                gemm_col_q   <= 0;
                gemm_k_q     <= 0;
                acc_q        <= (others => '0');
                row_base_v   := (gemm_row_q + 1) * stride0_q;
                cur_addr_q   <= src0_addr_q + u32(row_base_v);
                read_kind_q  <= RK_GEMM_A8;
                state_q      <= ST_RD_REQ;
              else
                state_q <= ST_FINISH;
              end if;
            end if;
          end if;

        when ST_FINISH =>
          busy_q        <= '0';
          done_q        <= '1';
          irq_pending_q <= '1';
          cmd_count_q   <= cmd_count_q + 1;
          state_q       <= ST_IDLE;

        when others =>
          state_q <= ST_IDLE;
      end case;
    end if;
  end process;

end architecture behavioral;
