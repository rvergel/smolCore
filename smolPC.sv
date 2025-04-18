module smolPC (
  input logic clk,
  input logic rst,
  input logic [31:0] next_pc,	// pc+4 or branch tgt
  output logic [31:0] pc	
);

  always_ff @(posedge clk) begin
   if (rst)
    pc <= 32'h0000_0000;
   else
    pc <= next_pc;
  end
endmodule
