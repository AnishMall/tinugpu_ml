//      // verilator_coverage annotation
        module tinygpu_counters (
 017302   input  logic        clk,
%000007   input  logic        rst_n,
 000064   input  logic        cmd_start_i,
 000064   input  logic        cmd_done_i,
 000064   input  logic        busy_i,
 000100   input  logic        active_i,
 000245   input  logic        stall_i,
~000022   output logic [31:0] cycle_count_o,
~000017   output logic [31:0] active_count_o,
~000020   output logic [31:0] stall_count_o,
~000034   output logic [31:0] cmd_count_o
        );
        
~007385   logic [31:0] cycle_cur_q;
~000160   logic [31:0] active_cur_q;
~004642   logic [31:0] stall_cur_q;
        
 017308   always_ff @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
 000034       cycle_cur_q    <= '0;
 000034       active_cur_q   <= '0;
 000034       stall_cur_q    <= '0;
 000034       cycle_count_o  <= '0;
 000034       active_count_o <= '0;
 000034       stall_count_o  <= '0;
 000034       cmd_count_o    <= '0;
 017274     end else begin
 017210       if (cmd_start_i) begin
 000064         cycle_cur_q  <= '0;
 000064         active_cur_q <= '0;
 000064         stall_cur_q  <= '0;
 017210       end else begin
 014728         if (busy_i)
 014728           cycle_cur_q <= cycle_cur_q + 32'd1;
 016918         if (active_i)
 000292           active_cur_q <= active_cur_q + 32'd1;
 009251         if (stall_i)
 009251           stall_cur_q <= stall_cur_q + 32'd1;
              end
        
 017210       if (cmd_done_i) begin
 000064         cycle_count_o  <= cycle_cur_q;
 000064         active_count_o <= active_cur_q;
 000064         stall_count_o  <= stall_cur_q;
 000064         cmd_count_o    <= cmd_count_o + 32'd1;
              end
            end
          end
        
        endmodule
        
