module tb_tinygpu_top_random_latency_tb;

  localparam logic [31:0] REG_CTRL        = 32'h00;
  localparam logic [31:0] REG_STATUS      = 32'h04;
  localparam logic [31:0] REG_DIRECT_OP   = 32'h0c;
  localparam logic [31:0] REG_SRC0_ADDR   = 32'h10;
  localparam logic [31:0] REG_SRC1_ADDR   = 32'h14;
  localparam logic [31:0] REG_BIAS_ADDR   = 32'h18;
  localparam logic [31:0] REG_DST_ADDR    = 32'h1c;
  localparam logic [31:0] REG_DIM_M       = 32'h20;
  localparam logic [31:0] REG_DIM_N       = 32'h24;
  localparam logic [31:0] REG_DIM_K       = 32'h28;
  localparam logic [31:0] REG_STRIDE0     = 32'h2c;
  localparam logic [31:0] REG_STRIDE1     = 32'h30;
  localparam logic [31:0] REG_STRIDE_DST  = 32'h34;
  localparam logic [31:0] REG_FLAGS       = 32'h38;
  localparam logic [31:0] REG_IRQ_STATUS  = 32'h54;
  localparam logic [31:0] REG_CMD_COUNT   = 32'h50;
  localparam logic [31:0] REG_CYCLE_COUNT = 32'h44;
  localparam logic [31:0] REG_ACTIVE_CNT  = 32'h48;
  localparam logic [31:0] REG_STALL_CNT   = 32'h4c;

  localparam logic [31:0] CTRL_START      = 32'h0000_0001;
  localparam logic [31:0] CTRL_IRQ_EN     = 32'h0000_0004;
  localparam logic [31:0] CTRL_DIRECT     = 32'h0000_0008;

  localparam logic [31:0] OP_GEMM_WORD    = 32'h0000_0001;
  localparam logic [31:0] OP_GEMV_WORD    = 32'h0000_0002;
  localparam logic [31:0] OP_VEC_ADD_WORD = 32'h0000_0003;
  localparam logic [31:0] OP_VEC_MUL_WORD = 32'h0000_0004;
  localparam logic [31:0] OP_RELU_WORD    = 32'h0000_0005;
  localparam logic [31:0] OP_CLAMP_WORD   = 32'h0000_0006;

  localparam logic [31:0] FLAG_BIAS_EN    = 32'h0000_0001;
  localparam logic [31:0] FLAG_RELU_EN    = 32'h0000_0002;
  localparam logic [31:0] FLAG_CLAMP_EN   = 32'h0000_0004;
  localparam logic [31:0] FLAG_DST_INT32  = 32'h0000_0020;

  localparam int MEM_BYTES = 8192;
  localparam int A_BASE    = 'h100;
  localparam int B_BASE    = 'h300;
  localparam int BIAS_BASE = 'h500;
  localparam int DST_BASE  = 'h700;
  localparam int NUM_CMDS  = 24;

  logic clk;
  logic rst_n;
  logic        mmio_valid;
  logic        mmio_we;
  logic [31:0] mmio_addr;
  logic [31:0] mmio_wdata;
  logic [3:0]  mmio_wstrb;
  logic [31:0] mmio_rdata;
  logic        mmio_ready;
  logic        mem_req;
  logic        mem_we;
  logic [31:0] mem_addr;
  logic [31:0] mem_wdata;
  logic [3:0]  mem_wstrb;
  logic [31:0] mem_rdata;
  logic        mem_ready;
  logic        mem_rvalid;
  logic        irq;

  logic [7:0] mem_bytes [0:MEM_BYTES-1];
  logic       read_pending_q;
  logic [31:0] read_addr_q;
  logic [2:0] read_delay_q;
  logic [2:0] ready_stall_q;
  logic       mem_ready_q;

  logic [31:0] status_word;
  logic [31:0] cmd_count_word;
  logic [31:0] cycle_count_word;
  logic [31:0] active_count_word;
  logic [31:0] stall_count_word;

  int cmd_idx;
  int op_sel;
  int m_dim;
  int n_dim;
  int k_dim;
  int vec_len;
  int src0_off;
  int src1_off;
  int bias_off;
  int dst_off;
  logic [31:0] flags_word;
  logic [31:0] opcode_word;

  tinygpu_top dut (
    .clk(clk), .rst_n(rst_n),
    .mmio_valid(mmio_valid), .mmio_we(mmio_we), .mmio_addr(mmio_addr), .mmio_wdata(mmio_wdata), .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata), .mmio_ready(mmio_ready),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr), .mem_wdata(mem_wdata), .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata), .mem_ready(mem_ready), .mem_rvalid(mem_rvalid),
    .irq(irq)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;
  assign mem_ready = mem_ready_q;

  function automatic logic signed [7:0] read_i8(input int unsigned addr);
    begin
      read_i8 = $signed(mem_bytes[addr]);
    end
  endfunction

  function automatic logic signed [31:0] read_i32(input int unsigned addr);
    begin
      read_i32 = {
        mem_bytes[addr + 3],
        mem_bytes[addr + 2],
        mem_bytes[addr + 1],
        mem_bytes[addr + 0]
      };
    end
  endfunction

  function automatic logic signed [31:0] clamp32(
    input logic signed [31:0] x,
    input logic signed [31:0] lo,
    input logic signed [31:0] hi
  );
    begin
      if (x < lo)
        clamp32 = lo;
      else if (x > hi)
        clamp32 = hi;
      else
        clamp32 = x;
    end
  endfunction

  function automatic logic signed [31:0] gemm_post(
    input logic signed [31:0] acc,
    input logic signed [31:0] bias,
    input logic [31:0] flags_in
  );
    logic signed [31:0] x;
    begin
      x = acc;
      if (flags_in[0])
        x = x + bias;
      if (flags_in[1] && (x < 0))
        x = 0;
      if (flags_in[2])
        x = clamp32(x, -32'sd128, 32'sd127);
      gemm_post = x;
    end
  endfunction

  task automatic mmio_wr(input logic [31:0] addr, input logic [31:0] data);
    begin
      @(negedge clk);
      mmio_valid = 1'b1;
      mmio_we    = 1'b1;
      mmio_addr  = addr;
      mmio_wdata = data;
      mmio_wstrb = 4'hf;
      @(posedge clk);
      @(negedge clk);
      mmio_valid = 1'b0;
      mmio_we    = 1'b0;
      mmio_addr  = '0;
      mmio_wdata = '0;
      mmio_wstrb = '0;
    end
  endtask

  task automatic mmio_rd_task(input logic [31:0] addr, output logic [31:0] data);
    begin
      @(negedge clk);
      mmio_valid = 1'b1;
      mmio_we    = 1'b0;
      mmio_addr  = addr;
      #1;
      data = mmio_rdata;
      @(negedge clk);
      mmio_valid = 1'b0;
      mmio_addr  = '0;
    end
  endtask

  task automatic clear_irq;
    begin
      mmio_wr(REG_IRQ_STATUS, 32'h1);
    end
  endtask

  task automatic wait_irq(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!irq && (cycles < max_cycles)) begin
        @(posedge clk);
        cycles++;
      end
      if (!irq)
        $fatal(1, "IRQ timeout after %0d cycles", max_cycles);
      @(negedge clk);
    end
  endtask

  task automatic start_and_check;
    begin
      mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_DIRECT);
      mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
      wait_irq(6000);
      mmio_rd_task(REG_STATUS, status_word);
      mmio_rd_task(REG_CYCLE_COUNT, cycle_count_word);
      mmio_rd_task(REG_ACTIVE_CNT, active_count_word);
      mmio_rd_task(REG_STALL_CNT, stall_count_word);

      if (!status_word[1]) $fatal(1, "done sticky missing");
      if (status_word[0])  $fatal(1, "busy stuck high");
      if (status_word[2] || status_word[3] || status_word[4] || status_word[5])
        $fatal(1, "unexpected error bits set: status=0x%08x", status_word);
      if (cycle_count_word == 32'd0) $fatal(1, "cycle_count did not advance");
      if (active_count_word > cycle_count_word) $fatal(1, "active_count exceeds cycle_count");
      if (stall_count_word > cycle_count_word) $fatal(1, "stall_count exceeds cycle_count");
    end
  endtask

  task automatic clear_regions;
    begin
      for (int i = 0; i < 1024; i++) begin
        mem_bytes[A_BASE + i]    = '0;
        mem_bytes[B_BASE + i]    = '0;
        mem_bytes[BIAS_BASE + i] = '0;
        mem_bytes[DST_BASE + i]  = '0;
      end
    end
  endtask

  task automatic fill_random_gemm_inputs(
    input int src0_base,
    input int src1_base,
    input int bias_base,
    input int m,
    input int n,
    input int k
  );
    int tmp;
    begin
      for (int r = 0; r < m; r++) begin
        for (int kk = 0; kk < k; kk++) begin
          tmp = $urandom_range(0, 15) - 8;
          mem_bytes[src0_base + (r * k) + kk] = tmp[7:0];
        end
      end
      for (int kk = 0; kk < k; kk++) begin
        for (int c = 0; c < n; c++) begin
          tmp = $urandom_range(0, 15) - 8;
          mem_bytes[src1_base + (kk * n) + c] = tmp[7:0];
        end
      end
      for (int c = 0; c < n; c++) begin
        tmp = $urandom_range(0, 63) - 32;
        mem_bytes[bias_base + (c * 4) + 0] = tmp[7:0];
        mem_bytes[bias_base + (c * 4) + 1] = tmp[15:8];
        mem_bytes[bias_base + (c * 4) + 2] = tmp[23:16];
        mem_bytes[bias_base + (c * 4) + 3] = tmp[31:24];
      end
    end
  endtask

  task automatic fill_random_vec_inputs(
    input int x_base,
    input int y_base,
    input int len
  );
    int tmp;
    begin
      for (int i = 0; i < len; i++) begin
        tmp = $urandom_range(0, 31) - 16;
        mem_bytes[x_base + i] = tmp[7:0];
        tmp = $urandom_range(0, 31) - 16;
        mem_bytes[y_base + i] = tmp[7:0];
      end
    end
  endtask

  task automatic check_gemm_output(
    input int src0_base,
    input int src1_base,
    input int bias_base,
    input int dst_base,
    input int m,
    input int n,
    input int k,
    input logic [31:0] flags_in
  );
    logic signed [31:0] acc;
    logic signed [31:0] expected;
    begin
      for (int r = 0; r < m; r++) begin
        for (int c = 0; c < n; c++) begin
          acc = 0;
          for (int kk = 0; kk < k; kk++) begin
            acc = acc + (read_i8(src0_base + (r * k) + kk) * read_i8(src1_base + (kk * n) + c));
          end
          expected = gemm_post(acc, read_i32(bias_base + (c * 4)), flags_in);
          if (read_i32(dst_base + ((r * n) + c) * 4) !== expected) begin
            $fatal(
              1,
              "gemm mismatch r=%0d c=%0d got=%0d expected=%0d flags=0x%08x",
              r,
              c,
              read_i32(dst_base + ((r * n) + c) * 4),
              expected,
              flags_in
            );
          end
        end
      end
    end
  endtask

  task automatic check_gemv_output(
    input int src0_base,
    input int src1_base,
    input int bias_base,
    input int dst_base,
    input int m,
    input int k,
    input logic [31:0] flags_in
  );
    logic signed [31:0] acc;
    logic signed [31:0] expected;
    begin
      for (int r = 0; r < m; r++) begin
        acc = 0;
        for (int kk = 0; kk < k; kk++) begin
          acc = acc + (read_i8(src0_base + (r * k) + kk) * read_i8(src1_base + kk));
        end
        expected = gemm_post(acc, read_i32(bias_base), flags_in);
        if (read_i32(dst_base + (r * 4)) !== expected) begin
          $fatal(
            1,
            "gemv mismatch r=%0d got=%0d expected=%0d flags=0x%08x",
            r,
            read_i32(dst_base + (r * 4)),
            expected,
            flags_in
          );
        end
      end
    end
  endtask

  task automatic check_vec_output(
    input logic [31:0] opcode_in,
    input int x_base,
    input int y_base,
    input int dst_base,
    input int len
  );
    logic signed [31:0] expected;
    begin
      for (int i = 0; i < len; i++) begin
        case (opcode_in)
          OP_VEC_ADD_WORD: expected = read_i8(x_base + i) + read_i8(y_base + i);
          OP_VEC_MUL_WORD: expected = read_i8(x_base + i) * read_i8(y_base + i);
          OP_RELU_WORD:    expected = (read_i8(x_base + i) < 0) ? 32'sd0 : read_i8(x_base + i);
          default:         expected = clamp32(read_i8(x_base + i), -32'sd128, 32'sd127);
        endcase
        if (read_i32(dst_base + (i * 4)) !== expected) begin
          $fatal(
            1,
            "vector mismatch i=%0d opcode=0x%0h got=%0d expected=%0d",
            i,
            opcode_in,
            read_i32(dst_base + (i * 4)),
            expected
          );
        end
      end
    end
  endtask

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      read_pending_q <= 1'b0;
      read_addr_q    <= '0;
      read_delay_q   <= '0;
      ready_stall_q  <= '0;
      mem_ready_q    <= 1'b1;
      mem_rvalid     <= 1'b0;
      mem_rdata      <= '0;
      for (int i = 0; i < MEM_BYTES; i++) begin
        mem_bytes[i] <= '0;
      end
    end else begin
      mem_rvalid <= 1'b0;

      if (read_pending_q) begin
        if (read_delay_q == 3'd0) begin
          mem_rvalid   <= 1'b1;
          mem_rdata    <= {
            mem_bytes[read_addr_q + 3],
            mem_bytes[read_addr_q + 2],
            mem_bytes[read_addr_q + 1],
            mem_bytes[read_addr_q + 0]
          };
          read_pending_q <= 1'b0;
        end else begin
          read_delay_q <= read_delay_q - 3'd1;
        end
      end

      if (mem_req && !mem_ready_q)
        ready_stall_q <= ready_stall_q + 3'd1;
      else
        ready_stall_q <= '0;

      if (ready_stall_q >= 3'd3)
        mem_ready_q <= 1'b1;
      else
        mem_ready_q <= ($urandom_range(0, 3) != 0);

      if (mem_req && mem_ready_q) begin
        if (mem_we) begin
          for (int i = 0; i < 4; i++) begin
            if (mem_wstrb[i])
              mem_bytes[mem_addr + i] <= mem_wdata[8*i +: 8];
          end
        end else if (!read_pending_q) begin
          read_pending_q <= 1'b1;
          read_addr_q    <= mem_addr;
          read_delay_q   <= $urandom_range(0, 3);
        end
      end
    end
  end

  initial begin
    rst_n = 1'b0;
    mmio_valid = 1'b0;
    mmio_we = 1'b0;
    mmio_addr = '0;
    mmio_wdata = '0;
    mmio_wstrb = '0;

    repeat (2) @(posedge clk);
    rst_n = 1'b1;
    for (cmd_idx = 0; cmd_idx < NUM_CMDS; cmd_idx++) begin
      clear_regions();
      op_sel   = $urandom_range(0, 5);
      src0_off = $urandom_range(0, 3);
      src1_off = $urandom_range(0, 3);
      bias_off = ($urandom_range(0, 3) * 4);
      dst_off  = ($urandom_range(0, 3) * 4);

      case (op_sel)
        0: begin
          m_dim = $urandom_range(1, 5);
          n_dim = $urandom_range(1, 5);
          k_dim = $urandom_range(1, 4);
          flags_word = FLAG_DST_INT32;
          if ($urandom_range(0, 1)) flags_word |= FLAG_BIAS_EN;
          if ($urandom_range(0, 1)) flags_word |= FLAG_RELU_EN;
          if ($urandom_range(0, 1)) flags_word |= FLAG_CLAMP_EN;
          opcode_word = OP_GEMM_WORD;
          fill_random_gemm_inputs(A_BASE + src0_off, B_BASE + src1_off, BIAS_BASE + bias_off, m_dim, n_dim, k_dim);

          mmio_wr(REG_DIRECT_OP, opcode_word);
          mmio_wr(REG_SRC0_ADDR, A_BASE + src0_off);
          mmio_wr(REG_SRC1_ADDR, B_BASE + src1_off);
          mmio_wr(REG_BIAS_ADDR, BIAS_BASE + bias_off);
          mmio_wr(REG_DST_ADDR,  DST_BASE + dst_off);
          mmio_wr(REG_DIM_M,     m_dim);
          mmio_wr(REG_DIM_N,     n_dim);
          mmio_wr(REG_DIM_K,     k_dim);
          mmio_wr(REG_STRIDE0,   k_dim);
          mmio_wr(REG_STRIDE1,   n_dim);
          mmio_wr(REG_STRIDE_DST,n_dim * 4);
          mmio_wr(REG_FLAGS,     flags_word);
          start_and_check();
          check_gemm_output(A_BASE + src0_off, B_BASE + src1_off, BIAS_BASE + bias_off, DST_BASE + dst_off, m_dim, n_dim, k_dim, flags_word);
        end

        1: begin
          m_dim = $urandom_range(1, 5);
          k_dim = $urandom_range(1, 4);
          flags_word = FLAG_DST_INT32;
          if ($urandom_range(0, 1)) flags_word |= FLAG_BIAS_EN;
          if ($urandom_range(0, 1)) flags_word |= FLAG_RELU_EN;
          if ($urandom_range(0, 1)) flags_word |= FLAG_CLAMP_EN;
          opcode_word = OP_GEMV_WORD;
          fill_random_gemm_inputs(A_BASE + src0_off, B_BASE + src1_off, BIAS_BASE + bias_off, m_dim, 1, k_dim);

          mmio_wr(REG_DIRECT_OP, opcode_word);
          mmio_wr(REG_SRC0_ADDR, A_BASE + src0_off);
          mmio_wr(REG_SRC1_ADDR, B_BASE + src1_off);
          mmio_wr(REG_BIAS_ADDR, BIAS_BASE + bias_off);
          mmio_wr(REG_DST_ADDR,  DST_BASE + dst_off);
          mmio_wr(REG_DIM_M,     m_dim);
          mmio_wr(REG_DIM_N,     32'd0);
          mmio_wr(REG_DIM_K,     k_dim);
          mmio_wr(REG_STRIDE0,   k_dim);
          mmio_wr(REG_STRIDE1,   1);
          mmio_wr(REG_STRIDE_DST,4);
          mmio_wr(REG_FLAGS,     flags_word);
          start_and_check();
          check_gemv_output(A_BASE + src0_off, B_BASE + src1_off, BIAS_BASE + bias_off, DST_BASE + dst_off, m_dim, k_dim, flags_word);
        end

        default: begin
          vec_len = $urandom_range(1, 8);
          flags_word = FLAG_DST_INT32;
          case (op_sel)
            2: opcode_word = OP_VEC_ADD_WORD;
            3: opcode_word = OP_VEC_MUL_WORD;
            4: opcode_word = OP_RELU_WORD;
            default: opcode_word = OP_CLAMP_WORD;
          endcase
          fill_random_vec_inputs(A_BASE + src0_off, B_BASE + src1_off, vec_len);

          mmio_wr(REG_DIRECT_OP, opcode_word);
          mmio_wr(REG_SRC0_ADDR, A_BASE + src0_off);
          mmio_wr(REG_SRC1_ADDR, B_BASE + src1_off);
          mmio_wr(REG_DST_ADDR,  DST_BASE + dst_off);
          mmio_wr(REG_DIM_M,     vec_len);
          mmio_wr(REG_DIM_N,     32'd0);
          mmio_wr(REG_DIM_K,     32'd0);
          mmio_wr(REG_STRIDE0,   1);
          mmio_wr(REG_STRIDE1,   1);
          mmio_wr(REG_STRIDE_DST,4);
          mmio_wr(REG_FLAGS,     flags_word);
          start_and_check();
          check_vec_output(opcode_word, A_BASE + src0_off, B_BASE + src1_off, DST_BASE + dst_off, vec_len);
        end
      endcase

      clear_irq();
    end

    mmio_rd_task(REG_CMD_COUNT, cmd_count_word);
    if (cmd_count_word !== NUM_CMDS)
      $fatal(1, "cmd_count mismatch: got %0d expected %0d", cmd_count_word, NUM_CMDS);

    $display("tb_tinygpu_top_random_latency_tb PASS");
    $finish;
  end

endmodule
