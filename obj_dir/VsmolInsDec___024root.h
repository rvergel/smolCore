// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsmolInsDec.h for the primary calling header

#ifndef VERILATED_VSMOLINSDEC___024ROOT_H_
#define VERILATED_VSMOLINSDEC___024ROOT_H_  // guard

#include "verilated.h"


class VsmolInsDec__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsmolInsDec___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(opcode,6,0);
    VL_OUT8(rd,4,0);
    VL_OUT8(funct3,2,0);
    VL_OUT8(rs1,4,0);
    VL_OUT8(rs2,4,0);
    VL_OUT8(funct7,6,0);
    CData/*2:0*/ smolInsDec__DOT__optype;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(instr,31,0);
    VL_OUT(imm,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsmolInsDec__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsmolInsDec___024root(VsmolInsDec__Syms* symsp, const char* v__name);
    ~VsmolInsDec___024root();
    VL_UNCOPYABLE(VsmolInsDec___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
