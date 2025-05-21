#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <../obj_dir/VsmolInsDec.h>

#define MAX_TIME 30
vluint64_t sim_time = 0;

int main(int argc,char** argv,char** env){

    VsmolInsDec* dut = new VsmolInsDec;
    Verilated::traceEverOn(true);
    VerilatedVcdC* waveform = new VerilatedVcdC;

    dut->trace(waveform,99);
    waveform->open("waveDecoder.vcd");

    while(sim_time<MAX_TIME){
        //dut->clk^=1;
        //dut->rst=0;
        if(sim_time == 2) dut->instr = 0x00a58533;
        if(sim_time == 4) dut->instr = 0x00c686b3;
        if(sim_time == 6) dut->instr = 0x00100513;
	if(sim_time == 8) dut->instr = 0x00058593;
	if(sim_time == 10) dut->instr = 0x00002783;
	if(sim_time == 12) dut->instr = 0x00b52223;
	if(sim_time == 14) dut->instr = 0xfe519ae3;
	if(sim_time == 16) dut->instr = 0x00b50463;	
	if(sim_time == 18) dut->instr = 0x000002b7;
	if(sim_time == 20) dut->instr = 0x004000ef;
        dut->eval();
        waveform->dump(sim_time);
        sim_time++;
    }

    waveform->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
