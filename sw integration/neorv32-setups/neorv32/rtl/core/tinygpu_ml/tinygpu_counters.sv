module tinygpu_counters (
  input  logic        clk,
  input  logic        rst_n,
  input  logic        cmd_start_i,
  input  logic        cmd_done_i,
  input  logic        busy_i,
  input  logic        active_i,
  input  logic        stall_i,
  output logic [31:0] cycle_count_o,
  output logic [31:0] active_count_o,
  output logic [31:0] stall_count_o,
  output logic [31:0] cmd_count_o
);

  logic [31:0] cycle_cur_q;
  logic [31:0] active_cur_q;
  logic [31:0] stall_cur_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      cycle_cur_q    <= '0;
      active_cur_q   <= '0;
      stall_cur_q    <= '0;
      cycle_count_o  <= '0;
      active_count_o <= '0;
      stall_count_o  <= '0;
      cmd_count_o    <= '0;
    end else begin
      if (cmd_start_i) begin
        cycle_cur_q  <= '0;
        active_cur_q <= '0;
        stall_cur_q  <= '0;
      end else begin
        if (busy_i)
          cycle_cur_q <= cycle_cur_q + 32'd1;
        if (active_i)
          active_cur_q <= active_cur_q + 32'd1;
        if (stall_i)
          stall_cur_q <= stall_cur_q + 32'd1;
      end

      if (cmd_done_i) begin
        cycle_count_o  <= cycle_cur_q;
        active_count_o <= active_cur_q;
        stall_count_o  <= stall_cur_q;
        cmd_count_o    <= cmd_count_o + 32'd1;
      end
    end
  end

endmodule