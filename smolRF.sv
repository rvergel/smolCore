/*
    Author: Ricardo Vergel
    Description: 32x32 register file for SmolCore
    Date: April 19-2025

    ****COMMENT YOUR CHANGES BELOW****
*/
module smolRF(
    input logic clk,
    input logic rst,
    input logic wEnable,
    input logic rEnable1,
    input logic rEnable2,
    input logic [4:0] wAddr,
    input logic [31:0] wData,
    input logic [4:0] rAddr1,
    input logic [4:0] rAddr2,
    output logic [31:0] rData1,
    output logic [31:0] rData2
);

//REGISTER FILE DECLARATION

logic [31:0] registerFile [0:31];

//ALWAYS 0 reg x0
assign registerFile[5'd0] = 32'h0000_0000;

//SYNCRONOUS READ PROT

always_ff @(posedge clk) begin
    if (rEnable1 && rEnable2) begin
        rData1 <= registerFile[rAddr1];
        rData2 <= registerFile[rAddr2];
    end else if (rEnable1) begin
        rData1 <= registerFile[rAddr1];
    end
end

//SYNCRONOUS WRITE PORT

always_ff @(posedge clk) begin
    if (rst) begin
        integer i;
        for (i = 0; i < 32; i++)
            registerFile[i] <= 32'h0000_0000;
    end else if (wEnable && (wAddr != 5'd0)) begin
        registerFile <= wData;
    end
end
endmodule
