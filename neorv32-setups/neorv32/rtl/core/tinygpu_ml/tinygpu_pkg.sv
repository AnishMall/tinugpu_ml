package tinygpu_pkg;

  parameter int ADDR_W      = 32;
  parameter int DATA_W      = 32;
  parameter int INT8_W      = 8;
  parameter int ACC_W       = 32;

  parameter int TILE_M      = 1;
  parameter int TILE_N      = 1;
  parameter int TILE_K      = 4;

  parameter int NUM_PES     = TILE_M * TILE_N;
  parameter int SPM_A_BYTES = 32;
  parameter int SPM_B_BYTES = 32;
  parameter int SPM_C_BYTES = 16;
  parameter int MAX_BURST   = 2;

  localparam logic [7:0] OP_NOP     = 8'h00;
  localparam logic [7:0] OP_GEMM    = 8'h01;
  localparam logic [7:0] OP_GEMV    = 8'h02;
  localparam logic [7:0] OP_VEC_ADD = 8'h03;
  localparam logic [7:0] OP_VEC_MUL = 8'h04;
  localparam logic [7:0] OP_RELU    = 8'h05;
  localparam logic [7:0] OP_CLAMP   = 8'h06;

  localparam int FLAG_BIAS_EN      = 0;
  localparam int FLAG_RELU_EN      = 1;
  localparam int FLAG_CLAMP_EN     = 2;
  localparam int FLAG_REQUANT_EN   = 3;
  localparam int FLAG_DST_INT8     = 4;
  localparam int FLAG_DST_INT32    = 5;
  localparam int FLAG_SIGNED_MODE  = 6;

  typedef enum logic [4:0] {
    S_IDLE,
    S_VALIDATE,
    S_DESC_LOAD,
    S_INIT_TILE,
    S_CLEAR_ACC,
    S_LOAD_A,
    S_LOAD_B,
    S_COMPUTE_K,
    S_NEXT_K,
    S_LOAD_BIAS,
    S_EPILOGUE,
    S_STORE_C,
    S_VEC_LOAD_X,
    S_VEC_LOAD_Y,
    S_VEC_EXEC,
    S_VEC_EXEC2,  // <-- new pipeline state
    S_VEC_EXEC3,
    S_VEC_EXEC4,
    S_VEC_STORE,
    S_NEXT_TILE_N,
    S_NEXT_TILE_M,
    S_DONE,
    S_ERROR
  } cmd_state_e;

endpackage
