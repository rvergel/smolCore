#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <../obj_dir/VsmolRF.h>

#define MAX_TIME 20
vluint64_t sim_time = 0;

int main(int argc,char** argv,char** env){

    VsmolRF* dut = new VsmolRF;
    Verilated::traceEverOn(true);
    VerilatedVcdC* waveform = new VerilatedVcdC;

    dut->trace(waveform,99);
    waveform->open("RFwaveform.vcd");

    while(sim_time<MAX_TIME){
        dut->clk^=1;
        if(sim_time == 0) dut->rst=1;
	if(sim_time == 1) dut->rst=0;
        if(sim_time == 2) {dut->wEnable=1; dut->wAddr=2; dut->wData=3;}
        if(sim_time == 3) dut->wAddr=0;
        if(sim_time == 4) {dut->wAddr=5; dut->wData=8;}
	if(sim_time == 6) {dut->wEnable=0; dut->rEnable1=1; dut->rAddr1=2;}
	if(sim_time == 8) {dut->rEnable2=1; dut->rAddr2=5;}
	if(sim_time == 11) {dut->rEnable1=0; dut->rEnable2=0;}
	if(sim_time == 12) {dut->rst=1;}
	if(sim_time == 13) {dut->rst=0;}
        dut->eval();
        waveform->dump(sim_time);
        sim_time++;
    }   
    
    waveform->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
