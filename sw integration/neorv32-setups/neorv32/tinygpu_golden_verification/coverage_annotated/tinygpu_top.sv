//      // verilator_coverage annotation
        module tinygpu_top #(
          parameter int ADDR_W = 32,
          parameter int DATA_W = 32,
          parameter bit ENABLE_CONV = 1'b1
        )(
 016633   input  logic                 clk,
%000007   input  logic                 rst_n,
        
 005626   input  logic                 mmio_valid,
 000873   input  logic                 mmio_we,
~000404   input  logic [ADDR_W-1:0]    mmio_addr,
~000201   input  logic [DATA_W-1:0]    mmio_wdata,
 000065   input  logic [DATA_W/8-1:0]  mmio_wstrb,
~000291   output logic [DATA_W-1:0]    mmio_rdata,
%000001   output logic                 mmio_ready,
        
 001730   output logic                 mem_req,
 000098   output logic                 mem_we,
~000349   output logic [ADDR_W-1:0]    mem_addr,
 000142   output logic [DATA_W-1:0]    mem_wdata,
 000098   output logic [DATA_W/8-1:0]  mem_wstrb,
 000101   input  logic [DATA_W-1:0]    mem_rdata,
 001730   input  logic                 mem_ready,
 001254   input  logic                 mem_rvalid,
        
%000000   output logic                 irq
        );
        
 000064   logic        reg_start_pulse;
 000064   logic        reg_start_direct_mode;
 000061   logic        reg_soft_reset;
%000000   logic        reg_irq_enable;
 000064   logic        reg_direct_mode;
 000064   logic        reg_irq_pending;
        
%000000   logic [31:0] reg_cmd_addr;
~000064   logic [7:0]  reg_opcode;
~000064   logic [31:0] reg_src0_addr, reg_src1_addr, reg_bias_addr, reg_dst_addr;
~000032   logic [15:0] reg_dim_m, reg_dim_n, reg_dim_k;
~000032   logic [15:0] reg_stride0, reg_stride1, reg_stride_dst;
~000064   logic [31:0] reg_flags;
%000000   logic [31:0] reg_scale;
%000000   logic [15:0] reg_shift, reg_zero_point;
~000011   logic [31:0] reg_conv_in_hw, reg_conv_channels, reg_conv_cfg;
        
 000064   logic        ctrl_busy;
 000064   logic        ctrl_done;
%000000   logic        ctrl_illegal_opcode;
%000000   logic        ctrl_shape_error;
%000000   logic        ctrl_memory_error;
%000000   logic        ctrl_unsupported_format;
        
 000064   logic        cnt_cmd_start;
 000064   logic        cnt_cmd_done;
 000064   logic        cnt_busy;
 000098   logic        cnt_active;
 000241   logic        cnt_stall;
        
~000021   logic [31:0] cycle_count_last;
~000018   logic [31:0] active_count_last;
~000021   logic [31:0] stall_count_last;
~000034   logic [31:0] cmd_count_total;
        
 001724   logic                 mem_req_raw;
 000476   logic                 mem_we_raw;
~001143   logic [ADDR_W-1:0]    mem_addr_raw;
 000236   logic [DATA_W-1:0]    mem_wdata_raw;
 000476   logic [DATA_W/8-1:0]  mem_wstrb_raw;
 000101   logic [DATA_W-1:0]    mem_rdata_stage_q;
 001254   logic                 mem_rvalid_stage_q;
 001730   logic                 mem_cmd_valid_q;
 000098   logic                 mem_cmd_we_q;
~000349   logic [ADDR_W-1:0]    mem_cmd_addr_q;
 000142   logic [DATA_W-1:0]    mem_cmd_wdata_q;
 000098   logic [DATA_W/8-1:0]  mem_cmd_wstrb_q;
%000000   logic                 mem_read_pending_q;
 001731   logic                 mem_stage_ready;
        
          tinygpu_regs #(
            .ENABLE_CONV (ENABLE_CONV)
          ) u_regs (
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
            .zero_point_o       (reg_zero_point),
            .conv_in_hw_o       (reg_conv_in_hw),
            .conv_channels_o    (reg_conv_channels),
            .conv_cfg_o         (reg_conv_cfg)
          );
        
          tinygpu_cmd_ctrl #(
            .ENABLE_CONV        (ENABLE_CONV)
          ) u_cmd_ctrl (
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
            .conv_in_hw         (reg_conv_in_hw),
            .conv_channels      (reg_conv_channels),
            .conv_cfg           (reg_conv_cfg),
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
        
 016639   always_ff @(posedge clk or negedge rst_n) begin
 016605     if (!rst_n) begin
 000034       mem_rdata_stage_q  <= '0;
 000034       mem_rvalid_stage_q <= 1'b0;
 000034       mem_cmd_valid_q    <= 1'b0;
 000034       mem_cmd_we_q       <= 1'b0;
 000034       mem_cmd_addr_q     <= '0;
 000034       mem_cmd_wdata_q    <= '0;
 000034       mem_cmd_wstrb_q    <= '0;
 000034       mem_read_pending_q <= 1'b0;
 016605     end else begin
 016605       mem_rvalid_stage_q <= 1'b0;
        
 014875       if (mem_stage_ready && mem_req_raw) begin
 001730         mem_cmd_valid_q <= 1'b1;
 001730         mem_cmd_we_q    <= mem_we_raw;
 001730         mem_cmd_addr_q  <= mem_addr_raw;
 001730         mem_cmd_wdata_q <= mem_wdata_raw;
 001730         mem_cmd_wstrb_q <= mem_wstrb_raw;
              end
        
 014875       if (mem_cmd_valid_q && mem_ready) begin
 001730         mem_cmd_valid_q <= 1'b0;
 001254         if (!mem_cmd_we_q) begin
~001254           if (mem_rvalid) begin
 001254             mem_read_pending_q <= 1'b0;
 001254             mem_rdata_stage_q  <= mem_rdata;
 001254             mem_rvalid_stage_q <= 1'b1;
%000000           end else begin
%000000             mem_read_pending_q <= 1'b1;
                  end
                end
              end
        
~016605       if (mem_read_pending_q && mem_rvalid) begin
%000000         mem_read_pending_q <= 1'b0;
%000000         mem_rdata_stage_q  <= mem_rdata;
%000000         mem_rvalid_stage_q <= 1'b1;
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
        
