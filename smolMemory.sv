/*
    Author: Ricardo Vergel
    Description: Memory file for SmolCore
    Date: April 19-2025

    ****COMMENT YOUR CHANGES BELOW****
*/
/* verilator lint_off UNUSEDSIGNAL */

module smolMemory(
    input logic clk,
    input logic memRead,
    input logic memWrite,
    input logic [31:0] memAddr,
    input logic [31:0] writeData,
    output logic [31:0] readData
);

logic [31:0] memory [0:31];


//WRITE PORT

always_ff @(posedge clk) begin
	if (memWrite) begin
		memory[memAddr[6:2]] <= writeData;
	end
end

//READ PORT

always_ff @(posedge clk)begin
	if(memRead) begin
		readData <= memory[memAddr[6:2]];
	end
end

endmodule
