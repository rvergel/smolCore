/*
    Author: Ricardo Vergel
    Description: Memory file for SmolCore
    Date: April 19-2025

    ****COMMENT YOUR CHANGES BELOW****
*/

module smolMemory(
    input logic clk,
    input logic memRead,
    input logic memWrite,
    input logic [31:0] memAddr,
    input logic [31:0] writeData,
    output logic [31:0] readData
);

logic [31:0] memory [0:31];
endmodule
