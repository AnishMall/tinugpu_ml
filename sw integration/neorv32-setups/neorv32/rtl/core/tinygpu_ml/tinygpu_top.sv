module tinygpu_top 
import tinygpu_pkg::*;
 #(
  parameter int ADDR_W = 32,
  parameter int DATA_W = 32
)(
  input  logic                 clk,
  input  logic                 rst_n,

  input  logic                 mmio_valid,
  input  logic                 mmio_we,
  input  logic [ADDR_W-1:0]    mmio_addr,
  input  logic [DATA_W-1:0]    mmio_wdata,
  input  logic [DATA_W/8-1:0]  mmio_wstrb,
  output logic [DATA_W-1:0]    mmio_rdata,
  output logic                 mmio_ready,

  output logic                 mem_req,
  output logic                 mem_we,
  output logic [ADDR_W-1:0]    mem_addr,
  output logic [DATA_W-1:0]    mem_wdata,
  output logic [DATA_W/8-1:0]  mem_wstrb,
  input  logic [DATA_W-1:0]    mem_rdata,
  input  logic                 mem_ready,
  input  logic                 mem_rvalid,

  output logic                 irq
);

  logic        reg_start_pulse;
  logic        reg_start_direct_mode;
  logic        reg_soft_reset;
  logic        reg_irq_enable;
  logic        reg_direct_mode;
  logic        reg_irq_pending;

  logic [31:0] reg_cmd_addr;
  logic [7:0]  reg_opcode;
  logic [31:0] reg_src0_addr, reg_src1_addr, reg_bias_addr, reg_dst_addr;
  logic [15:0] reg_dim_m, reg_dim_n, reg_dim_k;
  logic [15:0] reg_stride0, reg_stride1, reg_stride_dst;
  logic [31:0] reg_flags;
  logic [31:0] reg_scale;
  logic [15:0] reg_shift, reg_zero_point;

  logic        ctrl_busy;
  logic        ctrl_done;
  logic        ctrl_illegal_opcode;
  logic        ctrl_shape_error;
  logic        ctrl_memory_error;
  logic        ctrl_unsupported_format;

  logic        cnt_cmd_start;
  logic        cnt_cmd_done;
  logic        cnt_busy;
  logic        cnt_active;
  logic        cnt_stall;

  logic [31:0] cycle_count_last;
  logic [31:0] active_count_last;
  logic [31:0] stall_count_last;
  logic [31:0] cmd_count_total;

  logic                 mem_req_raw;
  logic                 mem_we_raw;
  logic [ADDR_W-1:0]    mem_addr_raw;
  logic [DATA_W-1:0]    mem_wdata_raw;
  logic [DATA_W/8-1:0]  mem_wstrb_raw;
  logic [DATA_W-1:0]    mem_rdata_stage_q;
  logic                 mem_rvalid_stage_q;
  logic                 mem_cmd_valid_q;
  logic                 mem_cmd_we_q;
  logic [ADDR_W-1:0]    mem_cmd_addr_q;
  logic [DATA_W-1:0]    mem_cmd_wdata_q;
  logic [DATA_W/8-1:0]  mem_cmd_wstrb_q;
  logic                 mem_read_pending_q;
  logic                 mem_stage_ready;

  tinygpu_regs u_regs (
    .clk                (clk),
    .rst_n              (rst_n),
    .mmio_valid         (mmio_valid),
    .mmio_we            (mmio_we),
    .mmio_addr          (mmio_addr),
    .mmio_wdata         (mmio_wdata),
    .mmio_wstrb         (mmio_wstrb),
    .mmio_rdata         (mmio_rdata),
    .mmio_ready         (mmio_ready),
    .cmd_busy_i         (ctrl_busy),
    .cmd_done_i         (ctrl_done),
    .illegal_opcode_i   (ctrl_illegal_opcode),
    .shape_error_i      (ctrl_shape_error),
    .memory_error_i     (ctrl_memory_error),
    .unsupported_fmt_i  (ctrl_unsupported_format),
    .cycle_count_i      (cycle_count_last),
    .active_count_i     (active_count_last),
    .stall_count_i      (stall_count_last),
    .cmd_count_i        (cmd_count_total),
    .start_pulse_o      (reg_start_pulse),
    .start_direct_mode_o(reg_start_direct_mode),
    .soft_reset_o       (reg_soft_reset),
    .irq_enable_o       (reg_irq_enable),
    .direct_mode_o      (reg_direct_mode),
    .irq_pending_o      (reg_irq_pending),
    .cmd_addr_o         (reg_cmd_addr),
    .opcode_o           (reg_opcode),
    .src0_addr_o        (reg_src0_addr),
    .src1_addr_o        (reg_src1_addr),
    .bias_addr_o        (reg_bias_addr),
    .dst_addr_o         (reg_dst_addr),
    .dim_m_o            (reg_dim_m),
    .dim_n_o            (reg_dim_n),
    .dim_k_o            (reg_dim_k),
    .stride0_o          (reg_stride0),
    .stride1_o          (reg_stride1),
    .stride_dst_o       (reg_stride_dst),
    .flags_o            (reg_flags),
    .scale_o            (reg_scale),
    .shift_o            (reg_shift),
    .zero_point_o       (reg_zero_point)
  );

  tinygpu_cmd_ctrl u_cmd_ctrl (
    .clk                (clk),
    .rst_n              (rst_n),
    .start              (reg_start_pulse),
    .start_direct_mode  (reg_start_direct_mode),
    .soft_reset         (reg_soft_reset),
    .direct_mode        (reg_direct_mode),
    .cmd_addr           (reg_cmd_addr),
    .opcode             (reg_opcode),
    .flags              (reg_flags),
    .src0_addr          (reg_src0_addr),
    .src1_addr          (reg_src1_addr),
    .bias_addr          (reg_bias_addr),
    .dst_addr           (reg_dst_addr),
    .M                  (reg_dim_m),
    .N                  (reg_dim_n),
    .K                  (reg_dim_k),
    .stride0            (reg_stride0),
    .stride1            (reg_stride1),
    .stride_dst         (reg_stride_dst),
    .scale              (reg_scale),
    .shift              (reg_shift),
    .zero_point         (reg_zero_point),
    .busy               (ctrl_busy),
    .done               (ctrl_done),
    .illegal_opcode     (ctrl_illegal_opcode),
    .shape_error        (ctrl_shape_error),
    .memory_error       (ctrl_memory_error),
    .unsupported_format (ctrl_unsupported_format),
    .cnt_cmd_start      (cnt_cmd_start),
    .cnt_cmd_done       (cnt_cmd_done),
    .cnt_busy           (cnt_busy),
    .cnt_active         (cnt_active),
    .cnt_stall          (cnt_stall),
    .mem_req            (mem_req_raw),
    .mem_we             (mem_we_raw),
    .mem_addr           (mem_addr_raw),
    .mem_wdata          (mem_wdata_raw),
    .mem_wstrb          (mem_wstrb_raw),
    .mem_rdata          (mem_rdata_stage_q),
    .mem_ready          (mem_stage_ready),
    .mem_rvalid         (mem_rvalid_stage_q)
  );

  tinygpu_counters u_counters (
    .clk           (clk),
    .rst_n         (rst_n),
    .cmd_start_i   (cnt_cmd_start),
    .cmd_done_i    (cnt_cmd_done),
    .busy_i        (cnt_busy),
    .active_i      (cnt_active),
    .stall_i       (cnt_stall),
    .cycle_count_o (cycle_count_last),
    .active_count_o(active_count_last),
    .stall_count_o (stall_count_last),
    .cmd_count_o   (cmd_count_total)
  );

  assign mem_stage_ready = !mem_cmd_valid_q && !mem_read_pending_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      mem_rdata_stage_q  <= '0;
      mem_rvalid_stage_q <= 1'b0;
      mem_cmd_valid_q    <= 1'b0;
      mem_cmd_we_q       <= 1'b0;
      mem_cmd_addr_q     <= '0;
      mem_cmd_wdata_q    <= '0;
      mem_cmd_wstrb_q    <= '0;
      mem_read_pending_q <= 1'b0;
    end else begin
      mem_rvalid_stage_q <= 1'b0;

      if (mem_stage_ready && mem_req_raw) begin
        mem_cmd_valid_q <= 1'b1;
        mem_cmd_we_q    <= mem_we_raw;
        mem_cmd_addr_q  <= mem_addr_raw;
        mem_cmd_wdata_q <= mem_wdata_raw;
        mem_cmd_wstrb_q <= mem_wstrb_raw;
      end

      if (mem_cmd_valid_q && mem_ready) begin
        mem_cmd_valid_q <= 1'b0;
        if (!mem_cmd_we_q) begin
          if (mem_rvalid) begin
            mem_read_pending_q <= 1'b0;
            mem_rdata_stage_q  <= mem_rdata;
            mem_rvalid_stage_q <= 1'b1;
          end else begin
            mem_read_pending_q <= 1'b1;
          end
        end
      end

      if (mem_read_pending_q && mem_rvalid) begin
        mem_read_pending_q <= 1'b0;
        mem_rdata_stage_q  <= mem_rdata;
        mem_rvalid_stage_q <= 1'b1;
      end
    end
  end

  assign mem_req   = mem_cmd_valid_q;
  assign mem_we    = mem_cmd_we_q;
  assign mem_addr  = mem_cmd_addr_q;
  assign mem_wdata = mem_cmd_wdata_q;
  assign mem_wstrb = mem_cmd_wstrb_q;
  assign irq = reg_irq_enable & reg_irq_pending;

endmodule
