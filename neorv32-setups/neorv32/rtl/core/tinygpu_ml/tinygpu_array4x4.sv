module tinygpu_array4x4 import tinygpu_pkg::*; (
  input  logic                            clk,
  input  logic                            rst_n,

  input  logic                            clear_acc,
  input  logic                            mac_en,

  input  logic signed [INT8_W-1:0]        a_vec [0:TILE_M-1],
  input  logic signed [INT8_W-1:0]        b_vec [0:TILE_N-1],

  input  logic [TILE_M-1:0]               row_mask,
  input  logic [TILE_N-1:0]               col_mask,

  output wire signed [ACC_W-1:0]          c_tile [0:TILE_M-1][0:TILE_N-1]
);

  for (genvar r = 0; r < TILE_M; r++) begin : g_row
    for (genvar c = 0; c < TILE_N; c++) begin : g_col
      logic pe_mac_en;

      assign pe_mac_en = mac_en && row_mask[r] && col_mask[c];

      tinygpu_pe u_pe (
        .clk       (clk),
        .rst_n     (rst_n),
        .clear_acc (clear_acc),
        .mac_en    (pe_mac_en),
        .a_i       (a_vec[r]),
        .b_i       (b_vec[c]),
        .acc_o     (c_tile[r][c])
      );
    end
  end

endmodule
