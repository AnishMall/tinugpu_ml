//      // verilator_coverage annotation
        module tinygpu_regs import tinygpu_pkg::*; #(
          parameter bit ENABLE_CONV = 1'b1
        ) (
 016633   input  logic         clk,
%000007   input  logic         rst_n,
        
 005626   input  logic         mmio_valid,
 000873   input  logic         mmio_we,
~000404   input  logic [31:0]  mmio_addr,
~000201   input  logic [31:0]  mmio_wdata,
 000065   input  logic [3:0]   mmio_wstrb,
~000291   output logic [31:0]  mmio_rdata,
%000001   output logic         mmio_ready,
        
 000064   input  logic         cmd_busy_i,
 000064   input  logic         cmd_done_i,
%000000   input  logic         illegal_opcode_i,
%000000   input  logic         shape_error_i,
%000000   input  logic         memory_error_i,
%000000   input  logic         unsupported_fmt_i,
        
~000021   input  logic [31:0]  cycle_count_i,
~000018   input  logic [31:0]  active_count_i,
~000021   input  logic [31:0]  stall_count_i,
~000034   input  logic [31:0]  cmd_count_i,
        
 000064   output logic         start_pulse_o,
 000064   output logic         start_direct_mode_o,
 000061   output logic         soft_reset_o,
%000000   output logic         irq_enable_o,
 000064   output logic         direct_mode_o,
 000064   output logic         irq_pending_o,
        
%000000   output logic [31:0]  cmd_addr_o,
~000064   output logic [7:0]   opcode_o,
~000064   output logic [31:0]  src0_addr_o,
~000063   output logic [31:0]  src1_addr_o,
%000000   output logic [31:0]  bias_addr_o,
~000064   output logic [31:0]  dst_addr_o,
~000028   output logic [15:0]  dim_m_o,
~000032   output logic [15:0]  dim_n_o,
~000026   output logic [15:0]  dim_k_o,
~000025   output logic [15:0]  stride0_o,
~000031   output logic [15:0]  stride1_o,
~000032   output logic [15:0]  stride_dst_o,
~000064   output logic [31:0]  flags_o,
%000000   output logic [31:0]  scale_o,
%000000   output logic [15:0]  shift_o,
%000000   output logic [15:0]  zero_point_o,
%000008   output logic [31:0]  conv_in_hw_o,
~000011   output logic [31:0]  conv_channels_o,
~000011   output logic [31:0]  conv_cfg_o
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
          localparam logic [7:0] REG_CONV_IN_HW  = 8'h58;
          localparam logic [7:0] REG_CONV_CHAN   = 8'h5c;
          localparam logic [7:0] REG_CONV_CFG    = 8'h60;
          localparam logic [7:0] REG_CAPS        = 8'h64;
        
          localparam logic [31:0] CAPS_VALUE = {
            ABI_VERSION,
            3'd0, ENABLE_CONV, 1'b1, 1'b1, 1'b1, 1'b1,
            8'(TILE_K), 4'(TILE_N), 4'(TILE_M)
          };
        
 000064   logic        done_sticky_q;
 000064   logic        irq_pending_q;
~000404   logic [7:0]  addr_lo;
 000096   logic [1:0]  ctrl_mode_next_w;
~000203   logic [7:0]  direct_op_next_w;
~000203   logic [15:0] dim_m_next_w;
~000203   logic [15:0] dim_n_next_w;
~000203   logic [15:0] dim_k_next_w;
~000203   logic [15:0] stride0_next_w;
~000203   logic [15:0] stride1_next_w;
~000203   logic [15:0] stride_dst_next_w;
~000203   logic [31:0] shiftzp_next_w;
%000000   logic        unused_mmio_addr;
        
 100107   function automatic [31:0] apply_wstrb32(
            input [31:0] oldv,
            input [31:0] newv,
            input [3:0]  wstrb
          );
 100107     begin
 100107       apply_wstrb32 = oldv;
 400428       for (int i = 0; i < 4; i++) begin
 354328         if (wstrb[i])
 046100           apply_wstrb32[i*8 +: 8] = newv[i*8 +: 8];
              end
            end
          endfunction
        
 598842   function automatic [15:0] apply_wstrb16(
            input [15:0] oldv,
            input [15:0] newv,
            input [1:0]  wstrb
          );
 598842     begin
 598842       apply_wstrb16 = oldv;
 531492       if (wstrb[0]) apply_wstrb16[7:0] = newv[7:0];
 531492       if (wstrb[1]) apply_wstrb16[15:8] = newv[15:8];
            end
          endfunction
        
          assign addr_lo       = mmio_addr[7:0];
          assign unused_mmio_addr = ^mmio_addr[31:8];
          assign mmio_ready    = 1'b1 | unused_mmio_addr;
          assign start_pulse_o = mmio_valid && mmio_we && (addr_lo == REG_CTRL) && mmio_wdata[0];
 099423   assign start_direct_mode_o = start_pulse_o ? ctrl_mode_next_w[1] : direct_mode_o;
          assign soft_reset_o  = mmio_valid && mmio_we && (addr_lo == REG_CTRL) && mmio_wdata[1];
 088582   assign ctrl_mode_next_w = mmio_wstrb[0] ? mmio_wdata[3:2] : {direct_mode_o, irq_enable_o};
 088582   assign direct_op_next_w = mmio_wstrb[0] ? mmio_wdata[7:0] : opcode_o;
          assign dim_m_next_w     = apply_wstrb16(dim_m_o, mmio_wdata[15:0], mmio_wstrb[1:0]);
          assign dim_n_next_w     = apply_wstrb16(dim_n_o, mmio_wdata[15:0], mmio_wstrb[1:0]);
          assign dim_k_next_w     = apply_wstrb16(dim_k_o, mmio_wdata[15:0], mmio_wstrb[1:0]);
          assign stride0_next_w   = apply_wstrb16(stride0_o, mmio_wdata[15:0], mmio_wstrb[1:0]);
          assign stride1_next_w   = apply_wstrb16(stride1_o, mmio_wdata[15:0], mmio_wstrb[1:0]);
          assign stride_dst_next_w= apply_wstrb16(stride_dst_o, mmio_wdata[15:0], mmio_wstrb[1:0]);
          assign shiftzp_next_w   = apply_wstrb32({shift_o, zero_point_o}, mmio_wdata, mmio_wstrb);
        
 016639   always_ff @(posedge clk or negedge rst_n) begin
 016605     if (!rst_n) begin
 000034       irq_enable_o  <= 1'b0;
 000034       direct_mode_o <= 1'b0;
 000034       cmd_addr_o    <= '0;
 000034       opcode_o      <= '0;
 000034       src0_addr_o   <= '0;
 000034       src1_addr_o   <= '0;
 000034       bias_addr_o   <= '0;
 000034       dst_addr_o    <= '0;
 000034       dim_m_o       <= '0;
 000034       dim_n_o       <= '0;
 000034       dim_k_o       <= '0;
 000034       stride0_o     <= '0;
 000034       stride1_o     <= '0;
 000034       stride_dst_o  <= '0;
 000034       flags_o       <= '0;
 000034       scale_o       <= '0;
 000034       shift_o       <= '0;
 000034       zero_point_o  <= '0;
 000034       conv_in_hw_o  <= '0;
 000034       conv_channels_o <= '0;
 000034       conv_cfg_o    <= '0;
 000034       done_sticky_q <= 1'b0;
 000034       irq_pending_q <= 1'b0;
 016544     end else if (soft_reset_o) begin
 000061       irq_enable_o  <= 1'b0;
 000061       direct_mode_o <= 1'b0;
 000061       cmd_addr_o    <= '0;
 000061       opcode_o      <= '0;
 000061       src0_addr_o   <= '0;
 000061       src1_addr_o   <= '0;
 000061       bias_addr_o   <= '0;
 000061       dst_addr_o    <= '0;
 000061       dim_m_o       <= '0;
 000061       dim_n_o       <= '0;
 000061       dim_k_o       <= '0;
 000061       stride0_o     <= '0;
 000061       stride1_o     <= '0;
 000061       stride_dst_o  <= '0;
 000061       flags_o       <= '0;
 000061       scale_o       <= '0;
 000061       shift_o       <= '0;
 000061       zero_point_o  <= '0;
 000061       conv_in_hw_o  <= '0;
 000061       conv_channels_o <= '0;
 000061       conv_cfg_o    <= '0;
 000061       done_sticky_q <= 1'b0;
 000061       irq_pending_q <= 1'b0;
 016544     end else begin
 016480       if (cmd_done_i) begin
 000064         done_sticky_q <= 1'b1;
 000064         irq_pending_q <= 1'b1;
              end
        
 016480       if (start_pulse_o)
 000064         done_sticky_q <= 1'b0;
        
 015732       if (mmio_valid && mmio_we) begin
 000812         case (addr_lo)
 000064           REG_CTRL: begin
 000064             irq_enable_o  <= ctrl_mode_next_w[0];
 000064             direct_mode_o <= ctrl_mode_next_w[1];
                  end
%000000           REG_CMD_ADDR:   cmd_addr_o   <= apply_wstrb32(cmd_addr_o, mmio_wdata, mmio_wstrb);
 000064           REG_DIRECT_OP:  opcode_o     <= direct_op_next_w;
 000064           REG_SRC0_ADDR:  src0_addr_o  <= apply_wstrb32(src0_addr_o, mmio_wdata, mmio_wstrb);
 000064           REG_SRC1_ADDR:  src1_addr_o  <= apply_wstrb32(src1_addr_o, mmio_wdata, mmio_wstrb);
 000011           REG_BIAS_ADDR:  bias_addr_o  <= apply_wstrb32(bias_addr_o, mmio_wdata, mmio_wstrb);
 000064           REG_DST_ADDR:   dst_addr_o   <= apply_wstrb32(dst_addr_o, mmio_wdata, mmio_wstrb);
 000064           REG_DIM_M:      dim_m_o      <= dim_m_next_w;
 000064           REG_DIM_N:      dim_n_o      <= dim_n_next_w;
 000064           REG_DIM_K:      dim_k_o      <= dim_k_next_w;
 000064           REG_STRIDE0:    stride0_o    <= stride0_next_w;
 000064           REG_STRIDE1:    stride1_o    <= stride1_next_w;
 000064           REG_STRIDE_DST: stride_dst_o <= stride_dst_next_w;
 000064           REG_FLAGS:      flags_o      <= apply_wstrb32(flags_o, mmio_wdata, mmio_wstrb);
%000000           REG_SCALE:      scale_o      <= apply_wstrb32(scale_o, mmio_wdata, mmio_wstrb);
%000000           REG_SHIFT_ZP: begin
%000000             shift_o      <= shiftzp_next_w[31:16];
%000000             zero_point_o <= shiftzp_next_w[15:0];
                  end
 000011           REG_CONV_IN_HW: conv_in_hw_o <= apply_wstrb32(conv_in_hw_o, mmio_wdata, mmio_wstrb);
 000011           REG_CONV_CHAN:  conv_channels_o <= apply_wstrb32(conv_channels_o, mmio_wdata, mmio_wstrb);
 000011           REG_CONV_CFG:   conv_cfg_o <= apply_wstrb32(conv_cfg_o, mmio_wdata, mmio_wstrb);
%000000           REG_IRQ_STATUS: begin
%000000             if (mmio_wdata[0])
%000000               irq_pending_q <= 1'b0;
                  end
%000000           default: begin
                  end
                endcase
              end
            end
          end
        
          assign irq_pending_o = irq_pending_q;
        
 099807   always @* begin
 099807     mmio_rdata = 32'd0;
 099807     case (addr_lo)
 002294       REG_CTRL:        mmio_rdata = {28'd0, direct_mode_o, irq_enable_o, 1'b0, 1'b0};
 088537       REG_STATUS:      mmio_rdata = {25'd0, ~cmd_busy_i, unsupported_fmt_i, memory_error_i, shape_error_i, illegal_opcode_i, done_sticky_q, cmd_busy_i};
%000000       REG_CMD_ADDR:    mmio_rdata = cmd_addr_o;
 000768       REG_DIRECT_OP:   mmio_rdata = {24'd0, opcode_o};
 000768       REG_SRC0_ADDR:   mmio_rdata = src0_addr_o;
 000768       REG_SRC1_ADDR:   mmio_rdata = src1_addr_o;
 000132       REG_BIAS_ADDR:   mmio_rdata = bias_addr_o;
 000768       REG_DST_ADDR:    mmio_rdata = dst_addr_o;
 000768       REG_DIM_M:       mmio_rdata = {16'd0, dim_m_o};
 000768       REG_DIM_N:       mmio_rdata = {16'd0, dim_n_o};
 000768       REG_DIM_K:       mmio_rdata = {16'd0, dim_k_o};
 000768       REG_STRIDE0:     mmio_rdata = {16'd0, stride0_o};
 000768       REG_STRIDE1:     mmio_rdata = {16'd0, stride1_o};
 000768       REG_STRIDE_DST:  mmio_rdata = {16'd0, stride_dst_o};
 000768       REG_FLAGS:       mmio_rdata = flags_o;
%000000       REG_SCALE:       mmio_rdata = scale_o;
%000000       REG_SHIFT_ZP:    mmio_rdata = {shift_o, zero_point_o};
%000000       REG_CYCLE_COUNT: mmio_rdata = cycle_count_i;
%000000       REG_ACTIVE_CNT:  mmio_rdata = active_count_i;
%000000       REG_STALL_CNT:   mmio_rdata = stall_count_i;
%000000       REG_CMD_COUNT:   mmio_rdata = cmd_count_i;
%000000       REG_IRQ_STATUS:  mmio_rdata = {31'd0, irq_pending_q};
 000132       REG_CONV_IN_HW:  mmio_rdata = conv_in_hw_o;
 000132       REG_CONV_CHAN:   mmio_rdata = conv_channels_o;
 000132       REG_CONV_CFG:    mmio_rdata = conv_cfg_o;
%000000       REG_CAPS:        mmio_rdata = CAPS_VALUE;
%000000       default:         mmio_rdata = 32'd0;
            endcase
          end
        
        endmodule
        
