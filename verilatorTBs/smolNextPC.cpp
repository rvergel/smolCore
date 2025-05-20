#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <../obj_dir/VsmolNextPC.h>

#define MAX_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env){

    VsmolNextPC* dut = new VsmolNextPC;
    Verilated::traceEverOn(true);
    VerilatedVcdC* waveform = new VerilatedVcdC;

    dut->trace(waveform,99);
    waveform->open("NextPCwave.vcd");

    while(sim_time<MAX_TIME){
	if(sim_time == 5) {dut->jal_enable=1; dut->rs1 = 10; dut->rs2_or_imm = 2;}
	if(sim_time == 6) dut->jal_enable=0;
	if(sim_time == 8) {dut->br_auipc_enable=1; dut->alu_out=100;}
	if(sim_time == 10) {dut->alu_out=8;}
	if(sim_time == 11) {dut->br_auipc_enable=0;}
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
