// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsmolNextPC.h for the primary calling header

#ifndef VERILATED_VSMOLNEXTPC___024ROOT_H_
#define VERILATED_VSMOLNEXTPC___024ROOT_H_  // guard

#include "verilated.h"


class VsmolNextPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsmolNextPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(br_auipc_enable,0,0);
    VL_IN8(jal_enable,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(rs1,31,0);
    VL_IN(rs2_or_imm,31,0);
    VL_IN(pc,31,0);
    VL_IN(alu_out,31,0);
    VL_OUT(nextPC,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsmolNextPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsmolNextPC___024root(VsmolNextPC__Syms* symsp, const char* v__name);
    ~VsmolNextPC___024root();
    VL_UNCOPYABLE(VsmolNextPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
