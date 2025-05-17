`timescale 1ns/1ps

module NextPC_tb();

logic [31:0] rs1;
logic [31:0] rs2_or_imm;
logic [31:0] pc;
logic [31:0] alu_out;
logic br_auipc_enable;
logic jal_enable;
logic rst;

logic [31:0] nextPC;

smolNextPC dut(
    .rs1(rs1),
    .rs2_or_imm(rs2_or_imm),
    .pc(pc),
    .alu_out(alu_out),
    .br_auipc_enable(br_auipc_enable),
    .jal_enable(jal_enable),
    .rst(rst),
    .nextPC(nextPC)
);

initial begin
    rst = 1'b1; #5;
    rst = 1'b0; #5;

    pc = 32'h0000_0000; #5;
    
    #50;
    
    alu_out = 32'h0000_000A; 
    br_auipc_enable = 1'b1; #10;
    
    br_auipc_enable = 1'b0; #10;
    
    rs1 = 32'h0000_0001;
    rs2_or_imm = 32'h0000_000B;

    jal_enable = 1'b1; #10;
    jal_enable = 1'b0;
end


initial begin
    $display("Starting NextPC testbench");
    $dumpfile("NextPC.vcd");
    $dumpvars;
    #500;
    $display("End of simulation");
    $finish;
end

endmodule
