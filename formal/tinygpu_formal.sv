module formal_mem_arbiter;
  (* anyseq *) logic [2:0] select_i;
  (* anyseq *) logic dma_req, dma_we, desc_req, desc_we, conv_req;
  (* anyseq *) logic vec_req, vec_we, bias_req, bias_we;
  (* anyseq *) logic [31:0] dma_addr, desc_addr, conv_addr, vec_addr, bias_addr;
  (* anyseq *) logic [31:0] dma_wdata, desc_wdata, vec_wdata, bias_wdata;
  (* anyseq *) logic [3:0] dma_wstrb, desc_wstrb, vec_wstrb, bias_wstrb;
  (* anyseq *) logic [31:0] mem_rdata;
  (* anyseq *) logic mem_ready, mem_rvalid;
  logic mem_req, mem_we;
  logic [31:0] mem_addr, mem_wdata, client_rdata;
  logic [3:0] mem_wstrb;
  logic dma_ready, dma_rvalid, desc_ready, desc_rvalid;
  logic conv_ready, conv_rvalid, vec_ready, vec_rvalid;
  logic bias_ready, bias_rvalid;

  tinygpu_mem_arbiter dut (
    .select_i(select_i),
    .dma_req_i(dma_req), .dma_we_i(dma_we), .dma_addr_i(dma_addr),
    .dma_wdata_i(dma_wdata), .dma_wstrb_i(dma_wstrb),
    .desc_req_i(desc_req), .desc_we_i(desc_we), .desc_addr_i(desc_addr),
    .desc_wdata_i(desc_wdata), .desc_wstrb_i(desc_wstrb),
    .conv_req_i(conv_req), .conv_addr_i(conv_addr),
    .vec_req_i(vec_req), .vec_we_i(vec_we), .vec_addr_i(vec_addr),
    .vec_wdata_i(vec_wdata), .vec_wstrb_i(vec_wstrb),
    .bias_req_i(bias_req), .bias_we_i(bias_we), .bias_addr_i(bias_addr),
    .bias_wdata_i(bias_wdata), .bias_wstrb_i(bias_wstrb),
    .mem_req_o(mem_req), .mem_we_o(mem_we), .mem_addr_o(mem_addr),
    .mem_wdata_o(mem_wdata), .mem_wstrb_o(mem_wstrb),
    .mem_rdata_i(mem_rdata), .mem_ready_i(mem_ready), .mem_rvalid_i(mem_rvalid),
    .client_rdata_o(client_rdata),
    .dma_ready_o(dma_ready), .dma_rvalid_o(dma_rvalid),
    .desc_ready_o(desc_ready), .desc_rvalid_o(desc_rvalid),
    .conv_ready_o(conv_ready), .conv_rvalid_o(conv_rvalid),
    .vec_ready_o(vec_ready), .vec_rvalid_o(vec_rvalid),
    .bias_ready_o(bias_ready), .bias_rvalid_o(bias_rvalid)
  );

  always @* begin
    assert (client_rdata == mem_rdata);
    assert ($onehot0({dma_ready, desc_ready, conv_ready, vec_ready, bias_ready}));
    assert ($onehot0({dma_rvalid, desc_rvalid, conv_rvalid, vec_rvalid, bias_rvalid}));
    if (select_i == 3'd0) assert (mem_req == dma_req && mem_addr == dma_addr);
    if (select_i == 3'd1) assert (mem_req == desc_req && mem_addr == desc_addr);
    if (select_i == 3'd2) assert (mem_req == conv_req && mem_addr == conv_addr && !mem_we);
    if (select_i == 3'd3) assert (mem_req == vec_req && mem_addr == vec_addr);
    if (select_i == 3'd4) assert (mem_req == bias_req && mem_addr == bias_addr);
  end
endmodule

module formal_counters;
  logic clk = 0;
  logic rst_n = 0;
  (* anyseq *) logic cmd_start, cmd_done, busy, active, stall;
  logic [31:0] cycles, active_cycles, stalls, commands;
  always @($global_clock) clk <= !clk;
  always @(posedge clk) rst_n <= 1'b1;

  tinygpu_counters dut (
    .clk(clk), .rst_n(rst_n), .cmd_start_i(cmd_start), .cmd_done_i(cmd_done),
    .busy_i(busy), .active_i(active), .stall_i(stall),
    .cycle_count_o(cycles), .active_count_o(active_cycles),
    .stall_count_o(stalls), .cmd_count_o(commands)
  );

  always @(posedge clk) begin
    if (rst_n && $past(rst_n)) begin
      assert (commands >= $past(commands));
      if ($past(cmd_done)) assert (commands == $past(commands) + 1);
      assert (active_cycles <= cycles);
      assert (stalls <= cycles);
    end
  end
endmodule

module formal_dma;
  logic clk = 0;
  logic rst_n = 0;
  logic start = 0;
  (* anyseq *) logic mem_ready, mem_rvalid;
  (* anyseq *) logic [31:0] mem_rdata, spm_rdata;
  logic busy, done, error, mem_req, mem_we, spm_wr_en;
  logic [31:0] mem_addr, mem_wdata, spm_wdata;
  logic [3:0] mem_wstrb, spm_wstrb;
  logic [1:0] spm_region_o;
  logic [8:0] spm_addr;
  logic [5:0] progress_q;
  always @($global_clock) clk <= !clk;
  always @(posedge clk) begin
    rst_n <= 1'b1;
    start <= !rst_n;
    if (rst_n) begin
      assume (mem_ready);
      assume (mem_rvalid);
    end
    if (mem_rvalid) assume ($past(mem_req && mem_ready));
  end

  tinygpu_dma dut (
    .clk(clk), .rst_n(rst_n), .start(start), .busy(busy), .done(done), .error(error),
    .op_kind(2'd0), .base_addr(32'h1000), .rows(16'd2), .cols(16'd4),
    .stride_bytes(16'd8), .spm_region(2'd0), .spm_base(9'd0),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr), .mem_wdata(mem_wdata),
    .mem_wstrb(mem_wstrb), .mem_rdata(mem_rdata), .mem_ready(mem_ready),
    .mem_rvalid(mem_rvalid), .spm_wr_en(spm_wr_en), .spm_region_o(spm_region_o),
    .spm_addr(spm_addr), .spm_wdata(spm_wdata), .spm_wstrb(spm_wstrb),
    .spm_rdata(spm_rdata)
  );

  always @(posedge clk) if (rst_n) begin
    if (start)
      progress_q <= '0;
    else if (!done && !error)
      progress_q <= progress_q + 6'd1;
    assert (!mem_we);
    assert (spm_addr < 9'd64);
    assert (progress_q < 6'd30 || done || error);
  end
endmodule

module formal_im2col;
  logic clk = 0;
  logic rst_n = 0;
  logic start = 0;
  (* anyseq *) logic mem_ready, mem_rvalid;
  (* anyseq *) logic [31:0] mem_rdata;
  logic busy, done, error, mem_req, spm_wr_en;
  logic [31:0] mem_addr, spm_wdata;
  logic [8:0] spm_addr;
  logic [3:0] spm_wstrb;
  logic [5:0] progress_q;
  always @($global_clock) clk <= !clk;
  always @(posedge clk) begin
    rst_n <= 1'b1;
    start <= !rst_n;
    if (rst_n) begin
      assume (mem_ready);
      assume (mem_rvalid);
    end
    if (mem_rvalid) assume ($past(mem_req && mem_ready));
  end

  tinygpu_im2col_loader dut (
    .clk(clk), .rst_n(rst_n), .start(start), .busy(busy), .done(done), .error(error),
    .input_base(32'h1000), .input_h(16'd3), .input_w(16'd3), .input_c(16'd1),
    .input_row_stride(32'd3), .kernel_h(4'd3), .kernel_w(4'd3),
    .stride_h(4'd1), .stride_w(4'd1), .pad_h(4'd1), .pad_w(4'd1),
    .tile_out_y(16'd0), .tile_out_x(16'd0), .output_w(16'd3),
    .active_rows(16'd1), .active_k(16'd4), .start_kh(4'd0), .start_kw(4'd0),
    .start_ic(16'd0), .next_out_y(), .next_out_x(), .next_kh(), .next_kw(),
    .next_ic(), .mem_req(mem_req), .mem_addr(mem_addr), .mem_rdata(mem_rdata),
    .mem_ready(mem_ready), .mem_rvalid(mem_rvalid), .spm_wr_en(spm_wr_en),
    .spm_addr(spm_addr), .spm_wdata(spm_wdata), .spm_wstrb(spm_wstrb)
  );

  always @(posedge clk) if (rst_n) begin
    if (start)
      progress_q <= '0;
    else if (!done && !error)
      progress_q <= progress_q + 6'd1;
    assert (spm_addr < 9'd64);
    if (mem_req) assert (mem_addr >= 32'h1000 && mem_addr < 32'h1010);
    assert (progress_q < 6'd20 || done || error);
  end
endmodule

module formal_regs;
  logic clk = 0;
  logic rst_n = 0;
  (* anyseq *) logic mmio_valid, mmio_we;
  (* anyseq *) logic [31:0] mmio_addr, mmio_wdata;
  (* anyseq *) logic [3:0] mmio_wstrb;
  logic [31:0] mmio_rdata;
  logic mmio_ready, start_pulse;
  always @($global_clock) clk <= !clk;
  always @(posedge clk) rst_n <= 1'b1;

  tinygpu_regs dut (
    .clk(clk), .rst_n(rst_n), .mmio_valid(mmio_valid), .mmio_we(mmio_we),
    .mmio_addr(mmio_addr), .mmio_wdata(mmio_wdata), .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata), .mmio_ready(mmio_ready), .cmd_busy_i(1'b0),
    .cmd_done_i(1'b0), .illegal_opcode_i(1'b0), .shape_error_i(1'b0),
    .memory_error_i(1'b0), .unsupported_fmt_i(1'b0), .cycle_count_i(32'd0),
    .active_count_i(32'd0), .stall_count_i(32'd0), .cmd_count_i(32'd0),
    .start_pulse_o(start_pulse), .start_direct_mode_o(), .soft_reset_o(),
    .irq_enable_o(), .direct_mode_o(), .irq_pending_o(), .cmd_addr_o(),
    .opcode_o(), .src0_addr_o(), .src1_addr_o(), .bias_addr_o(), .dst_addr_o(),
    .dim_m_o(), .dim_n_o(), .dim_k_o(), .stride0_o(), .stride1_o(),
    .stride_dst_o(), .flags_o(), .scale_o(), .shift_o(), .zero_point_o(),
    .conv_in_hw_o(), .conv_channels_o(), .conv_cfg_o()
  );

  always @* begin
    assert (mmio_ready);
    assert (start_pulse == (mmio_valid && mmio_we &&
                            mmio_addr[7:0] == 8'h00 && mmio_wdata[0]));
  end
endmodule

module formal_cmd_ctrl_vector;
  import tinygpu_pkg::*;
  logic clk = 0;
  logic rst_n = 0;
  logic start = 0;
  logic start_direct_mode = 0;
  logic soft_reset = 0;
  (* anyseq *) logic [31:0] mem_rdata;
  logic [31:0] mem_addr, mem_wdata;
  logic [3:0] mem_wstrb;
  logic mem_req, mem_we;
  logic mem_ready = 0;
  logic mem_rvalid = 0;
  logic busy, done, illegal_opcode, shape_error, memory_error, unsupported_format;
  logic cnt_cmd_start, cnt_cmd_done, cnt_busy, cnt_active, cnt_stall;
  logic [6:0] progress_q;

  always @($global_clock) clk <= !clk;
  always @(posedge clk) begin
    rst_n <= 1'b1;
    start <= !rst_n;
    start_direct_mode <= !rst_n;
    soft_reset <= 1'b0;
    mem_ready <= rst_n;
    if (!rst_n)
      mem_rvalid <= 1'b0;
    else
      mem_rvalid <= $past(rst_n) && $past(mem_req && mem_ready && !mem_we);
  end

  tinygpu_cmd_ctrl dut (
    .clk(clk),
    .rst_n(rst_n),
    .start(start),
    .start_direct_mode(start_direct_mode),
    .soft_reset(soft_reset),
    .direct_mode(1'b1),
    .cmd_addr(32'h0),
    .opcode(OP_VEC_ADD),
    .flags(32'h0000_0060),
    .src0_addr(32'h1000),
    .src1_addr(32'h2000),
    .bias_addr(32'h0),
    .dst_addr(32'h3000),
    .M(16'd2),
    .N(16'd1),
    .K(16'd1),
    .stride0(16'd1),
    .stride1(16'd1),
    .stride_dst(16'd4),
    .scale(32'd0),
    .shift(16'd0),
    .zero_point(16'd0),
    .conv_in_hw(32'd0),
    .conv_channels(32'd0),
    .conv_cfg(32'd0),
    .busy(busy),
    .done(done),
    .illegal_opcode(illegal_opcode),
    .shape_error(shape_error),
    .memory_error(memory_error),
    .unsupported_format(unsupported_format),
    .cnt_cmd_start(cnt_cmd_start),
    .cnt_cmd_done(cnt_cmd_done),
    .cnt_busy(cnt_busy),
    .cnt_active(cnt_active),
    .cnt_stall(cnt_stall),
    .mem_req(mem_req),
    .mem_we(mem_we),
    .mem_addr(mem_addr),
    .mem_wdata(mem_wdata),
    .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata),
    .mem_ready(mem_ready),
    .mem_rvalid(mem_rvalid)
  );

  always @(posedge clk) if (rst_n) begin
    if (start)
      progress_q <= '0;
    else if (!done)
      progress_q <= progress_q + 7'd1;
    assert (!(illegal_opcode || shape_error || memory_error || unsupported_format));
    assert (progress_q < 7'd40 || done);
    if (done) begin
      assert (!busy);
      assert (cnt_cmd_done);
    end
  end
endmodule
