module tinygpu_regs import tinygpu_pkg::*; (
  input  logic         clk,
  input  logic         rst_n,

  input  logic         mmio_valid,
  input  logic         mmio_we,
  input  logic [31:0]  mmio_addr,
  input  logic [31:0]  mmio_wdata,
  input  logic [3:0]   mmio_wstrb,
  output logic [31:0]  mmio_rdata,
  output logic         mmio_ready,

  input  logic         cmd_busy_i,
  input  logic         cmd_done_i,
  input  logic         illegal_opcode_i,
  input  logic         shape_error_i,
  input  logic         memory_error_i,
  input  logic         unsupported_fmt_i,

  input  logic [31:0]  cycle_count_i,
  input  logic [31:0]  active_count_i,
  input  logic [31:0]  stall_count_i,
  input  logic [31:0]  cmd_count_i,

  output logic         start_pulse_o,
  output logic         soft_reset_o,
  output logic         irq_enable_o,
  output logic         direct_mode_o,
  output logic         irq_pending_o,

  output logic [31:0]  cmd_addr_o,
  output logic [7:0]   opcode_o,
  output logic [31:0]  src0_addr_o,
  output logic [31:0]  src1_addr_o,
  output logic [31:0]  bias_addr_o,
  output logic [31:0]  dst_addr_o,
  output logic [15:0]  dim_m_o,
  output logic [15:0]  dim_n_o,
  output logic [15:0]  dim_k_o,
  output logic [15:0]  stride0_o,
  output logic [15:0]  stride1_o,
  output logic [15:0]  stride_dst_o,
  output logic [31:0]  flags_o,
  output logic [31:0]  scale_o,
  output logic [15:0]  shift_o,
  output logic [15:0]  zero_point_o
);

  localparam logic [7:0] REG_CTRL        = 8'h00;
  localparam logic [7:0] REG_STATUS      = 8'h04;
  localparam logic [7:0] REG_CMD_ADDR    = 8'h08;
  localparam logic [7:0] REG_DIRECT_OP   = 8'h0c;
  localparam logic [7:0] REG_SRC0_ADDR   = 8'h10;
  localparam logic [7:0] REG_SRC1_ADDR   = 8'h14;
  localparam logic [7:0] REG_BIAS_ADDR   = 8'h18;
  localparam logic [7:0] REG_DST_ADDR    = 8'h1c;
  localparam logic [7:0] REG_DIM_M       = 8'h20;
  localparam logic [7:0] REG_DIM_N       = 8'h24;
  localparam logic [7:0] REG_DIM_K       = 8'h28;
  localparam logic [7:0] REG_STRIDE0     = 8'h2c;
  localparam logic [7:0] REG_STRIDE1     = 8'h30;
  localparam logic [7:0] REG_STRIDE_DST  = 8'h34;
  localparam logic [7:0] REG_FLAGS       = 8'h38;
  localparam logic [7:0] REG_SCALE       = 8'h3c;
  localparam logic [7:0] REG_SHIFT_ZP    = 8'h40;
  localparam logic [7:0] REG_CYCLE_COUNT = 8'h44;
  localparam logic [7:0] REG_ACTIVE_CNT  = 8'h48;
  localparam logic [7:0] REG_STALL_CNT   = 8'h4c;
  localparam logic [7:0] REG_CMD_COUNT   = 8'h50;
  localparam logic [7:0] REG_IRQ_STATUS  = 8'h54;

  logic        done_sticky_q;
  logic        irq_pending_q;
  logic [7:0]  addr_lo;
  logic [31:0] ctrl_next_w;
  logic [31:0] direct_op_next_w;
  logic [31:0] dim_m_next_w;
  logic [31:0] dim_n_next_w;
  logic [31:0] dim_k_next_w;
  logic [31:0] stride0_next_w;
  logic [31:0] stride1_next_w;
  logic [31:0] stride_dst_next_w;
  logic [31:0] shiftzp_next_w;

  function automatic [31:0] apply_wstrb32(
    input [31:0] oldv,
    input [31:0] newv,
    input [3:0]  wstrb
  );
    begin
      apply_wstrb32 = oldv;
      for (int i = 0; i < 4; i++) begin
        if (wstrb[i])
          apply_wstrb32[i*8 +: 8] = newv[i*8 +: 8];
      end
    end
  endfunction

  assign addr_lo       = mmio_addr[7:0];
  assign mmio_ready    = 1'b1;
  assign start_pulse_o = mmio_valid && mmio_we && (addr_lo == REG_CTRL) && mmio_wdata[0];
  assign soft_reset_o  = mmio_valid && mmio_we && (addr_lo == REG_CTRL) && mmio_wdata[1];
  assign ctrl_next_w      = apply_wstrb32({28'd0, direct_mode_o, irq_enable_o, 1'b0, 1'b0}, mmio_wdata, mmio_wstrb);
  assign direct_op_next_w = apply_wstrb32({24'd0, opcode_o}, mmio_wdata, mmio_wstrb);
  assign dim_m_next_w     = apply_wstrb32({16'd0, dim_m_o}, mmio_wdata, mmio_wstrb);
  assign dim_n_next_w     = apply_wstrb32({16'd0, dim_n_o}, mmio_wdata, mmio_wstrb);
  assign dim_k_next_w     = apply_wstrb32({16'd0, dim_k_o}, mmio_wdata, mmio_wstrb);
  assign stride0_next_w   = apply_wstrb32({16'd0, stride0_o}, mmio_wdata, mmio_wstrb);
  assign stride1_next_w   = apply_wstrb32({16'd0, stride1_o}, mmio_wdata, mmio_wstrb);
  assign stride_dst_next_w= apply_wstrb32({16'd0, stride_dst_o}, mmio_wdata, mmio_wstrb);
  assign shiftzp_next_w   = apply_wstrb32({shift_o, zero_point_o}, mmio_wdata, mmio_wstrb);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      irq_enable_o  <= 1'b0;
      direct_mode_o <= 1'b0;
      cmd_addr_o    <= '0;
      opcode_o      <= '0;
      src0_addr_o   <= '0;
      src1_addr_o   <= '0;
      bias_addr_o   <= '0;
      dst_addr_o    <= '0;
      dim_m_o       <= '0;
      dim_n_o       <= '0;
      dim_k_o       <= '0;
      stride0_o     <= '0;
      stride1_o     <= '0;
      stride_dst_o  <= '0;
      flags_o       <= '0;
      scale_o       <= '0;
      shift_o       <= '0;
      zero_point_o  <= '0;
      done_sticky_q <= 1'b0;
      irq_pending_q <= 1'b0;
    end else if (soft_reset_o) begin
      irq_enable_o  <= 1'b0;
      direct_mode_o <= 1'b0;
      cmd_addr_o    <= '0;
      opcode_o      <= '0;
      src0_addr_o   <= '0;
      src1_addr_o   <= '0;
      bias_addr_o   <= '0;
      dst_addr_o    <= '0;
      dim_m_o       <= '0;
      dim_n_o       <= '0;
      dim_k_o       <= '0;
      stride0_o     <= '0;
      stride1_o     <= '0;
      stride_dst_o  <= '0;
      flags_o       <= '0;
      scale_o       <= '0;
      shift_o       <= '0;
      zero_point_o  <= '0;
      done_sticky_q <= 1'b0;
      irq_pending_q <= 1'b0;
    end else begin
      if (cmd_done_i) begin
        done_sticky_q <= 1'b1;
        irq_pending_q <= 1'b1;
      end

      if (start_pulse_o)
        done_sticky_q <= 1'b0;

      if (mmio_valid && mmio_we) begin
        case (addr_lo)
          REG_CTRL: begin
            irq_enable_o  <= ctrl_next_w[2];
            direct_mode_o <= ctrl_next_w[3];
          end
          REG_CMD_ADDR:   cmd_addr_o   <= apply_wstrb32(cmd_addr_o, mmio_wdata, mmio_wstrb);
          REG_DIRECT_OP:  opcode_o     <= direct_op_next_w[7:0];
          REG_SRC0_ADDR:  src0_addr_o  <= apply_wstrb32(src0_addr_o, mmio_wdata, mmio_wstrb);
          REG_SRC1_ADDR:  src1_addr_o  <= apply_wstrb32(src1_addr_o, mmio_wdata, mmio_wstrb);
          REG_BIAS_ADDR:  bias_addr_o  <= apply_wstrb32(bias_addr_o, mmio_wdata, mmio_wstrb);
          REG_DST_ADDR:   dst_addr_o   <= apply_wstrb32(dst_addr_o, mmio_wdata, mmio_wstrb);
          REG_DIM_M:      dim_m_o      <= dim_m_next_w[15:0];
          REG_DIM_N:      dim_n_o      <= dim_n_next_w[15:0];
          REG_DIM_K:      dim_k_o      <= dim_k_next_w[15:0];
          REG_STRIDE0:    stride0_o    <= stride0_next_w[15:0];
          REG_STRIDE1:    stride1_o    <= stride1_next_w[15:0];
          REG_STRIDE_DST: stride_dst_o <= stride_dst_next_w[15:0];
          REG_FLAGS:      flags_o      <= apply_wstrb32(flags_o, mmio_wdata, mmio_wstrb);
          REG_SCALE:      scale_o      <= apply_wstrb32(scale_o, mmio_wdata, mmio_wstrb);
          REG_SHIFT_ZP: begin
            shift_o      <= shiftzp_next_w[31:16];
            zero_point_o <= shiftzp_next_w[15:0];
          end
          REG_IRQ_STATUS: begin
            if (mmio_wdata[0])
              irq_pending_q <= 1'b0;
          end
          default: begin
          end
        endcase
      end
    end
  end

  assign irq_pending_o = irq_pending_q;

  always @* begin
    mmio_rdata = 32'd0;
    case (addr_lo)
      REG_CTRL:        mmio_rdata = {28'd0, direct_mode_o, irq_enable_o, 1'b0, 1'b0};
      REG_STATUS:      mmio_rdata = {25'd0, ~cmd_busy_i, unsupported_fmt_i, memory_error_i, shape_error_i, illegal_opcode_i, done_sticky_q, cmd_busy_i};
      REG_CMD_ADDR:    mmio_rdata = cmd_addr_o;
      REG_DIRECT_OP:   mmio_rdata = {24'd0, opcode_o};
      REG_SRC0_ADDR:   mmio_rdata = src0_addr_o;
      REG_SRC1_ADDR:   mmio_rdata = src1_addr_o;
      REG_BIAS_ADDR:   mmio_rdata = bias_addr_o;
      REG_DST_ADDR:    mmio_rdata = dst_addr_o;
      REG_DIM_M:       mmio_rdata = {16'd0, dim_m_o};
      REG_DIM_N:       mmio_rdata = {16'd0, dim_n_o};
      REG_DIM_K:       mmio_rdata = {16'd0, dim_k_o};
      REG_STRIDE0:     mmio_rdata = {16'd0, stride0_o};
      REG_STRIDE1:     mmio_rdata = {16'd0, stride1_o};
      REG_STRIDE_DST:  mmio_rdata = {16'd0, stride_dst_o};
      REG_FLAGS:       mmio_rdata = flags_o;
      REG_SCALE:       mmio_rdata = scale_o;
      REG_SHIFT_ZP:    mmio_rdata = {shift_o, zero_point_o};
      REG_CYCLE_COUNT: mmio_rdata = cycle_count_i;
      REG_ACTIVE_CNT:  mmio_rdata = active_count_i;
      REG_STALL_CNT:   mmio_rdata = stall_count_i;
      REG_CMD_COUNT:   mmio_rdata = cmd_count_i;
      REG_IRQ_STATUS:  mmio_rdata = {31'd0, irq_pending_q};
      default:         mmio_rdata = 32'd0;
    endcase
  end

endmodule