//------------------------------------------------------------------------------
// File: InstructionMemory.sv
// A parameterizable instruction ROM with optional synchronous output.
// SOURCE: CHATGPT KEKW
//------------------------------------------------------------------------------
/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */

module InstructionMemory #(
  parameter ADDR_WIDTH = 10,       // how many bits of word address (2^ADDR_WIDTH words)
  parameter DATA_WIDTH = 32,       // instruction width
  parameter MEM_FILE   = "program.hex", // initialization file (in hex)
  parameter SYNC_READ  = 1         // 0 = async read, 1 = sync read
)(
  input  logic                    clk,        // only used if SYNC_READ=1
  input  logic [ADDR_WIDTH+1:0]  addr,       // full byte address: PC[ADDR_WIDTH+1:0]
  output logic [DATA_WIDTH-1:0]  instruction // instruction at addr
);

  // Number of entries: 2^ADDR_WIDTH
  localparam DEPTH = 1 << ADDR_WIDTH;

  // Memory array: word‑addressed
  logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];

  // Load instructions at time 0
  initial begin
    $display("Loading program from %s ...", MEM_FILE);
    $readmemh(MEM_FILE, mem);
  end

  // Compute word index by dropping the two LSBs of byte address
  wire [ADDR_WIDTH-1:0] waddr = addr[ADDR_WIDTH+1:2];

  generate
    if (SYNC_READ) begin : SYNC
      // synchronous read: register the output
      always_ff @(posedge clk) begin
        instruction <= mem[waddr];
      end
    end else begin : ASYNC
      // asynchronous read: combinational
      assign instruction = mem[waddr];
    end
  endgenerate

endmodule

