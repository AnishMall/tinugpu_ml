//      // verilator_coverage annotation
        module tinygpu_pe import tinygpu_pkg::*; (
          input  logic                     clk,
          input  logic                     rst_n,
        
          input  logic                     clear_acc,
          input  logic                     mac_en,
          input  logic signed [INT8_W-1:0] a_i,
          input  logic signed [INT8_W-1:0] b_i,
        
          output logic signed [ACC_W-1:0]  acc_o
        );
        
          (* use_dsp = "yes", syn_dspstyle = "dsp" *)
          logic signed [2*INT8_W-1:0] product;
          logic signed [ACC_W-1:0]    product_ext;
        
          assign product = a_i * b_i;
          assign product_ext = {{(ACC_W-(2*INT8_W)){product[2*INT8_W-1]}}, product};
        
 16900480   always_ff @(posedge clk or negedge rst_n) begin
 16900416     if (!rst_n)
 000064       acc_o <= '0;
~019104     else if (clear_acc)
~019104       acc_o <= '0;
~16799302     else if (mac_en)
~082010       acc_o <= acc_o + product_ext;
          end
        
        endmodule
        
