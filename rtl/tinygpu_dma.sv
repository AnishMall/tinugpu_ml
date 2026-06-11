module tinygpu_dma import tinygpu_pkg::*; (
  input  logic              clk,
  input  logic              rst_n,

  input  logic              start,
  output logic              busy,
  output logic              done,
  output logic              error,

  input  logic [1:0]        op_kind,
  input  logic [31:0]       base_addr,
  input  logic [15:0]       rows,
  input  logic [15:0]       cols,
  input  logic [15:0]       stride_bytes,
  input  logic [1:0]        spm_region,
  input  logic [8:0]        spm_base,

  output logic              mem_req,
  output logic              mem_we,
  output logic [31:0]       mem_addr,
  output logic [31:0]       mem_wdata,
  output logic [3:0]        mem_wstrb,
  input  logic [31:0]       mem_rdata,
  input  logic              mem_ready,
  input  logic              mem_rvalid,

  output logic              spm_wr_en,
  output logic [1:0]        spm_region_o,
  output logic [8:0]        spm_addr,
  output logic [31:0]       spm_wdata,
  output logic [3:0]        spm_wstrb,
  input  logic [31:0]       spm_rdata
);

  localparam logic [1:0] DMA_OP_LOAD_I8   = 2'd0;
  localparam logic [1:0] DMA_OP_STORE_I32 = 2'd2;
  localparam logic [1:0] DMA_OP_STORE_I8  = 2'd3;
  localparam logic [31:0] TILE_N_U32 = 32'(TILE_N);
  localparam logic [31:0] TILE_K_U32 = 32'(TILE_K);

  typedef enum logic [2:0] {
    DMA_IDLE,
    DMA_ISSUE_READ,
    DMA_WAIT_READ,
    DMA_WRITE_SPM,
    DMA_READ_SPM,
    DMA_ISSUE_WRITE,
    DMA_DONE,
    DMA_ERROR
  } dma_state_e;

  dma_state_e state_q, state_d;
  logic       done_q;
  logic       error_q;

  logic [1:0]  op_kind_q;
  logic [31:0] base_addr_q;
  logic [15:0] rows_q, cols_q, stride_bytes_q;
  logic [1:0]  spm_region_q;
  logic [8:0]  spm_base_q;

  logic [15:0] row_q, row_d;
  logic [15:0] col_q, col_d;

  logic [31:0] elem_addr;
  logic [31:0] aligned_read_addr;
  logic [31:0] write_addr;
  logic [31:0] aligned_write_addr;
  logic [8:0]  spm_elem_addr;
  logic [8:0]  spm_addr_store_i32;
  logic [8:0]  spm_addr_store_i8;
  logic [7:0]  load_byte;
  logic [1:0]  load_lane_sel;
  logic [31:0] row_u32;
  logic [31:0] col_u32;
  logic [31:0] stride_u32;
  logic [31:0] spm_base_u32;

  logic        advance_elem;
  logic        last_elem;
  logic [31:0] store_word_data;

  assign done  = done_q;
  assign error = error_q;

  assign row_u32 = {16'd0, row_q};
  assign col_u32 = {16'd0, col_q};
  assign stride_u32 = {16'd0, stride_bytes_q};
  assign spm_base_u32 = {23'd0, spm_base_q};
  assign elem_addr = base_addr_q + (row_u32 * stride_u32) + col_u32;
  assign aligned_read_addr = {elem_addr[31:2], 2'b00};
  assign write_addr = base_addr_q + (row_u32 * stride_u32) +
                      ((op_kind_q == DMA_OP_STORE_I32) ? (col_u32 << 2) : col_u32);
  assign aligned_write_addr = {write_addr[31:2], 2'b00};
  assign spm_elem_addr = 9'(spm_base_u32 +
                            (row_u32 * ((spm_region_q == 2'd0) ? TILE_K_U32 : TILE_N_U32)) +
                            col_u32);
  assign spm_addr_store_i32 = 9'(spm_base_u32 + (((row_u32 * TILE_N_U32) + col_u32) << 2));
  assign spm_addr_store_i8  = 9'(spm_base_u32 + (((row_u32 * TILE_N_U32) + col_u32) << 2));
  assign load_lane_sel = elem_addr[1:0];
  assign last_elem = (row_q + 16'd1 >= rows_q) && (col_q + 16'd1 >= cols_q);
  assign store_word_data = spm_rdata;

  always @* begin
    case (load_lane_sel)
      2'd0: load_byte = mem_rdata[7:0];
      2'd1: load_byte = mem_rdata[15:8];
      2'd2: load_byte = mem_rdata[23:16];
      default: load_byte = mem_rdata[31:24];
    endcase
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q          <= DMA_IDLE;
      done_q           <= 1'b0;
      error_q          <= 1'b0;
      op_kind_q        <= '0;
      base_addr_q      <= '0;
      rows_q           <= '0;
      cols_q           <= '0;
      stride_bytes_q   <= '0;
      spm_region_q     <= '0;
      spm_base_q       <= '0;
      row_q            <= '0;
      col_q            <= '0;
    end else begin
      state_q <= state_d;
      done_q  <= (state_q == DMA_DONE);
      error_q <= (state_q == DMA_ERROR);
      row_q   <= row_d;
      col_q   <= col_d;

      if (state_q == DMA_IDLE && start) begin
        op_kind_q      <= op_kind;
        base_addr_q    <= base_addr;
        rows_q         <= rows;
        cols_q         <= cols;
        stride_bytes_q <= stride_bytes;
        spm_region_q   <= spm_region;
        spm_base_q     <= spm_base;
      end
    end
  end

  always @* begin
    row_d = row_q;
    col_d = col_q;

    if (state_q == DMA_IDLE && start) begin
      row_d = '0;
      col_d = '0;
    end else if (advance_elem) begin
      if (col_q + 16'd1 < cols_q) begin
        col_d = col_q + 16'd1;
      end else begin
        col_d = '0;
        if (row_q + 16'd1 < rows_q)
          row_d = row_q + 16'd1;
      end
    end
  end

  always @* begin
    state_d      = state_q;
    busy         = 1'b1;
    advance_elem = 1'b0;

    mem_req    = 1'b0;
    mem_we     = 1'b0;
    mem_addr   = '0;
    mem_wdata  = '0;
    mem_wstrb  = 4'b0000;

    spm_wr_en    = 1'b0;
    spm_region_o = spm_region_q;
    spm_addr     = '0;
    spm_wdata    = '0;
    spm_wstrb    = 4'b0000;

    case (state_q)
      DMA_IDLE: begin
        busy = 1'b0;
        if (start) begin
          if ((rows == 16'd0) || (cols == 16'd0))
            state_d = DMA_DONE;
          else if (op_kind == DMA_OP_LOAD_I8)
            state_d = DMA_ISSUE_READ;
          else if ((op_kind == DMA_OP_STORE_I32) || (op_kind == DMA_OP_STORE_I8))
            state_d = DMA_READ_SPM;
          else
            state_d = DMA_ERROR;
        end
      end

      DMA_ISSUE_READ: begin
        mem_req  = 1'b1;
        mem_we   = 1'b0;
        mem_addr = aligned_read_addr;
        if (mem_ready)
          state_d = DMA_WAIT_READ;
      end

      DMA_WAIT_READ: begin
        if (mem_rvalid)
          state_d = DMA_WRITE_SPM;
      end

      DMA_WRITE_SPM: begin
        spm_wr_en    = 1'b1;
        spm_region_o = spm_region_q;
        spm_addr     = spm_elem_addr;
        spm_wdata    = {24'd0, load_byte};
        spm_wstrb    = 4'b0001;

        if (last_elem)
          state_d = DMA_DONE;
        else begin
          advance_elem = 1'b1;
          state_d = DMA_ISSUE_READ;
        end
      end

      DMA_READ_SPM: begin
        spm_region_o = spm_region_q;
        if (op_kind_q == DMA_OP_STORE_I32)
          spm_addr = spm_addr_store_i32;
        else
          spm_addr = spm_addr_store_i8;
        state_d = DMA_ISSUE_WRITE;
      end

      DMA_ISSUE_WRITE: begin
        mem_req  = 1'b1;
        mem_we   = 1'b1;
        mem_addr = aligned_write_addr;
        spm_region_o = spm_region_q;
        if (op_kind_q == DMA_OP_STORE_I32)
          spm_addr = spm_addr_store_i32;
        else
          spm_addr = spm_addr_store_i8;

        if (op_kind_q == DMA_OP_STORE_I32) begin
          mem_wdata = store_word_data;
          mem_wstrb = 4'b1111;
        end else begin
          case (write_addr[1:0])
            2'd0: begin
              mem_wdata = {24'd0, spm_rdata[7:0]};
              mem_wstrb = 4'b0001;
            end
            2'd1: begin
              mem_wdata = {16'd0, spm_rdata[7:0], 8'd0};
              mem_wstrb = 4'b0010;
            end
            2'd2: begin
              mem_wdata = {8'd0, spm_rdata[7:0], 16'd0};
              mem_wstrb = 4'b0100;
            end
            default: begin
              mem_wdata = {spm_rdata[7:0], 24'd0};
              mem_wstrb = 4'b1000;
            end
          endcase
        end

        if (mem_ready) begin
          if (last_elem)
            state_d = DMA_DONE;
          else begin
            advance_elem = 1'b1;
            state_d = DMA_READ_SPM;
          end
        end
      end

      DMA_DONE: begin
        busy    = 1'b0;
        state_d = DMA_IDLE;
      end

      DMA_ERROR: begin
        busy    = 1'b0;
        state_d = DMA_IDLE;
      end

      default: begin
        state_d = DMA_IDLE;
      end
    endcase
  end

endmodule
