`timescale 1ns/1ps

module RF_tb;

logic clk;
logic rst;
logic wEnable;
logic rEnable1;
logic rEnable2;
logic [4:0] wAddr;
logic [31:0] wData;
logic [4:0] rAddr1;
logic [4:0] rAddr2;

logic [31:0] rData1;
logic[31:0] rData2;

smolRF dut(
    .clk(clk),
    .rst(rst),
    .wEnable(wEnable),
    .rEnable1(rEnable1),
    .rEnable2(rEnable2),
    .wAddr(wAddr),
    .wData(wData),
    .rAddr1(rAddr1),
    .rAddr2(rAddr2),
    .rData1(rData1),
    .rData2(rData2)
);

initial begin
    rst = 1'b1;		
    wEnable = 1'b0; rEnable1 = 1'b0; rEnable2= 1'b0;
    #20;

    rst = 1'b0;

    wEnable = 1'b1; #10;
    wData = 32'h0000_0010; wAddr = 5'b000_01; #20;
    wEnable = 1'b0;

    rEnable1 = 1'b1; #10;
    rAddr1 = 5'b000_01; #20;
    
    wEnable = 1'b1; #50;
    wData = 32'h0000_0001; wAddr = 5'b000_10; #10;
    wData = 32'h0000_0002; wAddr = 5'b000_11;
    #10;

    rEnable2 = 1'b1; #10;
    rAddr2 = 5'b000_10; #5;

    rEnable1 = 1'b0;
    rAddr2 = 5'b000_11; #10;
    
end


always begin
    clk <= 1'b1;	#5;
    clk <= 1'b0;	#5;
end

initial begin
    $display("Starting Register File Testbench...");
    $dumpfile("RF.vcd");
    $dumpvars;
    #1000;
    $finish;
end

endmodule
