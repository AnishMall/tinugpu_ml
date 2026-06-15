module tb_tinygpu_top_conv2d_corners_tb;

  localparam logic [31:0] REG_CTRL          = 32'h00;
  localparam logic [31:0] REG_DIRECT_OP     = 32'h0c;
  localparam logic [31:0] REG_SRC0_ADDR     = 32'h10;
  localparam logic [31:0] REG_SRC1_ADDR     = 32'h14;
  localparam logic [31:0] REG_DST_ADDR      = 32'h1c;
  localparam logic [31:0] REG_STRIDE0       = 32'h2c;
  localparam logic [31:0] REG_STRIDE1       = 32'h30;
  localparam logic [31:0] REG_STRIDE_DST    = 32'h34;
  localparam logic [31:0] REG_FLAGS         = 32'h38;
  localparam logic [31:0] REG_CONV_IN_HW    = 32'h58;
  localparam logic [31:0] REG_CONV_CHANNELS = 32'h5c;
  localparam logic [31:0] REG_CONV_CFG      = 32'h60;

  localparam logic [31:0] CTRL_START        = 32'h1;
  localparam logic [31:0] CTRL_DIRECT       = 32'h8;
  localparam logic [31:0] FLAGS_I32_SIGNED  = 32'h60;

  localparam int MEM_BYTES = 16384;
  localparam int IN_BASE   = 'h0100;
  localparam int WT_BASE   = 'h0800;
  localparam int OUT_BASE  = 'h1400;

  logic clk = 0;
  logic rst_n = 0;
  logic mmio_valid;
  logic mmio_we;
  logic [31:0] mmio_addr;
  logic [31:0] mmio_wdata;
  logic [3:0] mmio_wstrb;
  logic [31:0] mmio_rdata;
  logic mmio_ready;
  logic mem_req;
  logic mem_we;
  logic [31:0] mem_addr;
  logic [31:0] mem_wdata;
  logic [3:0] mem_wstrb;
  logic [31:0] mem_rdata;
  logic mem_ready;
  logic mem_rvalid;
  logic irq;

  logic [7:0] memory [0:MEM_BYTES-1];
  logic rd_pending;
  logic [31:0] rd_addr;

  tinygpu_top dut (
    .clk(clk), .rst_n(rst_n),
    .mmio_valid(mmio_valid), .mmio_we(mmio_we), .mmio_addr(mmio_addr),
    .mmio_wdata(mmio_wdata), .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata), .mmio_ready(mmio_ready),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr),
    .mem_wdata(mem_wdata), .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata), .mem_ready(mem_ready), .mem_rvalid(mem_rvalid), .irq(irq)
  );

  always #5 clk = ~clk;
  assign mem_ready = 1'b1;

  always_ff @(posedge clk) begin
    mem_rvalid <= rd_pending;
    if (rd_pending)
      mem_rdata <= {memory[rd_addr+3], memory[rd_addr+2], memory[rd_addr+1], memory[rd_addr]};
    rd_pending <= mem_req && !mem_we;
    if (mem_req && !mem_we)
      rd_addr <= mem_addr;
    if (mem_req && mem_we)
      for (int i = 0; i < 4; i++)
        if (mem_wstrb[i]) memory[mem_addr+i] <= mem_wdata[8*i +: 8];
  end

  function automatic logic signed [31:0] read_word(input int addr);
    read_word = {memory[addr+3], memory[addr+2], memory[addr+1], memory[addr]};
  endfunction

  function automatic integer output_h(
    input integer in_h,
    input integer kh,
    input integer sh,
    input integer ph
  );
    output_h = (in_h + 2 * ph - kh) / sh + 1;
  endfunction

  function automatic integer output_w_fn(
    input integer in_w,
    input integer kw,
    input integer sw,
    input integer pw
  );
    output_w_fn = (in_w + 2 * pw - kw) / sw + 1;
  endfunction

  function automatic integer input_index(
    input integer y,
    input integer x,
    input integer c,
    input integer in_w,
    input integer in_c
  );
    input_index = IN_BASE + ((y * in_w + x) * in_c) + c;
  endfunction

  function automatic integer weight_index(
    input integer ky,
    input integer kx,
    input integer ic,
    input integer oc,
    input integer kw,
    input integer in_c,
    input integer out_c
  );
    weight_index = WT_BASE + ((((ky * kw) + kx) * in_c + ic) * out_c) + oc;
  endfunction

  task automatic mmio_wr(input logic [31:0] addr, input logic [31:0] data);
    @(negedge clk);
    mmio_valid = 1; mmio_we = 1; mmio_addr = addr; mmio_wdata = data; mmio_wstrb = 4'hf;
    @(negedge clk);
    mmio_valid = 0; mmio_we = 0; mmio_addr = 0; mmio_wdata = 0; mmio_wstrb = 0;
  endtask

  task automatic wait_command(input int limit);
    int cycles;
    cycles = 0;
    while (!dut.ctrl_busy && cycles < 20) begin @(posedge clk); cycles++; end
    while (dut.ctrl_busy && cycles < limit) begin @(posedge clk); cycles++; end
    if (dut.ctrl_busy) $fatal(1, "Conv2D corner command timeout");
    repeat (3) @(posedge clk);
  endtask

  task automatic fill_case(
    input integer in_h,
    input integer in_w,
    input integer in_c,
    input integer out_c,
    input integer kh,
    input integer kw
  );
    int idx;
    begin
      for (int i = 0; i < MEM_BYTES; i++) memory[i] = 0;
      idx = 0;
      for (int y = 0; y < in_h; y++) begin
        for (int x = 0; x < in_w; x++) begin
          for (int ic = 0; ic < in_c; ic++) begin
            memory[input_index(y, x, ic, in_w, in_c)] = 8'(((idx % 7) - 3));
            idx++;
          end
        end
      end
      idx = 0;
      for (int ky = 0; ky < kh; ky++) begin
        for (int kx = 0; kx < kw; kx++) begin
          for (int ic = 0; ic < in_c; ic++) begin
            for (int oc = 0; oc < out_c; oc++) begin
              memory[weight_index(ky, kx, ic, oc, kw, in_c, out_c)] = 8'((((idx * 3) % 5) - 2));
              idx++;
            end
          end
        end
      end
    end
  endtask

  task automatic check_case(
    input integer in_h,
    input integer in_w,
    input integer in_c,
    input integer out_c,
    input integer kh,
    input integer kw,
    input integer sh,
    input integer sw,
    input integer ph,
    input integer pw,
    input string  case_name
  );
    int oh;
    int ow;
    int exp_sum;
    int iy;
    int ix;
    int out_idx;
    begin
      oh = output_h(in_h, kh, sh, ph);
      ow = output_w_fn(in_w, kw, sw, pw);

      fill_case(in_h, in_w, in_c, out_c, kh, kw);
      mmio_wr(REG_DIRECT_OP, 32'h7);
      mmio_wr(REG_SRC0_ADDR, IN_BASE);
      mmio_wr(REG_SRC1_ADDR, WT_BASE);
      mmio_wr(REG_DST_ADDR,  OUT_BASE);
      mmio_wr(REG_STRIDE0,   32'd0);
      mmio_wr(REG_STRIDE1,   32'd0);
      mmio_wr(REG_STRIDE_DST,32'd0);
      mmio_wr(REG_FLAGS,     FLAGS_I32_SIGNED);
      mmio_wr(REG_CONV_IN_HW, {16'(in_h), 16'(in_w)});
      mmio_wr(REG_CONV_CHANNELS, {16'(out_c), 16'(in_c)});
      mmio_wr(REG_CONV_CFG, ((ph & 4'hf) << 20) | ((pw & 4'hf) << 16) |
                            ((sh & 4'hf) << 12) | ((sw & 4'hf) << 8) |
                            ((kh & 4'hf) << 4) | (kw & 4'hf));
      mmio_wr(REG_CTRL, CTRL_DIRECT | CTRL_START);
      wait_command(60000);

      for (int oy = 0; oy < oh; oy++) begin
        for (int ox = 0; ox < ow; ox++) begin
          for (int oc = 0; oc < out_c; oc++) begin
            exp_sum = 0;
            for (int ky = 0; ky < kh; ky++) begin
              for (int kx = 0; kx < kw; kx++) begin
                iy = oy * sh + ky - ph;
                ix = ox * sw + kx - pw;
                if ((iy >= 0) && (iy < in_h) && (ix >= 0) && (ix < in_w)) begin
                  for (int ic = 0; ic < in_c; ic++) begin
                    exp_sum += $signed(memory[input_index(iy, ix, ic, in_w, in_c)]) *
                               $signed(memory[weight_index(ky, kx, ic, oc, kw, in_c, out_c)]);
                  end
                end
              end
            end
            out_idx = OUT_BASE + (((oy * ow + ox) * out_c + oc) * 4);
            if (read_word(out_idx) !== exp_sum) begin
              $fatal(1, "%s mismatch @(%0d,%0d,%0d): got %0d expected %0d",
                     case_name, oy, ox, oc, read_word(out_idx), exp_sum);
            end
          end
        end
      end
    end
  endtask

  initial begin
    mmio_valid = 0;
    mmio_we = 0;
    mmio_addr = 0;
    mmio_wdata = 0;
    mmio_wstrb = 0;
    mem_rvalid = 0;
    mem_rdata = 0;
    rd_pending = 0;
    rd_addr = 0;
    for (int i = 0; i < MEM_BYTES; i++) memory[i] = 0;

    repeat (2) @(posedge clk);
    rst_n = 1;

    check_case(3, 5, 3, 5, 1, 1, 1, 1, 0, 0, "conv_1x1_s1_p0");
    check_case(4, 5, 1, 3, 1, 1, 2, 2, 0, 0, "conv_1x1_s2_p0");
    check_case(3, 4, 2, 5, 3, 3, 1, 1, 0, 1, "conv_3x3_s1_p01");
    check_case(4, 3, 1, 3, 3, 3, 1, 1, 1, 0, "conv_3x3_s1_p10");
    check_case(5, 4, 3, 5, 3, 3, 1, 1, 1, 1, "conv_3x3_s1_p11");
    check_case(5, 4, 1, 2, 3, 3, 2, 1, 1, 1, "conv_3x3_s21");
    check_case(4, 5, 2, 1, 3, 3, 1, 2, 1, 1, "conv_3x3_s12");

    $display("tb_tinygpu_top_conv2d_corners_tb PASS");
    $finish;
  end

endmodule
