`timescale 1ns/1ps

module InsDec_tb();

logic [31:0] instr;

logic [6:0] opcode;
logic [4:0] rd;
logic [2:0] funct3;
logic [4:0] rs1;
logic [4:0] rs2;
logic [6:0] funct7;

logic [31:0] imm;

smolInsDec dut(
    .instr(instr),
    .opcode(opcode),
    .rd(rd),
    .funct3(funct3),
    .rs1(rs1),
    .rs2(rs2),
    .funct7(funct7),
    .imm(imm)
);

initial begin
    instr = 32'hAAAA_BBBB; #10;
    instr = 32'h0000_0000; #10;
    instr = 32'h0000_0001; #10;
    instr = 32'h1234_5678; #10;
    instr = 32'h0000_AAAA; #10;
    instr = 32'hDDDD_DDDD; #10;
end

initial begin
    $display("Starting InsDeco testbench");
    $dumpfile("InsDec.vcd");
    $dumpvars;
    $display("End of simulation");
    #500;
    $finish;
end
endmodule
