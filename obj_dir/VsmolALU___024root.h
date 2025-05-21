// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsmolALU.h for the primary calling header

#ifndef VERILATED_VSMOLALU___024ROOT_H_
#define VERILATED_VSMOLALU___024ROOT_H_  // guard

#include "verilated.h"


class VsmolALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsmolALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(pc,4,0);
    VL_IN8(op_sel,4,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(rs1,31,0);
    VL_IN(rs2_or_imm,31,0);
    VL_OUT(alu_out,31,0);
    IData/*31:0*/ smolALU__DOT__unnamedblk1__DOT__a_s;
    IData/*31:0*/ smolALU__DOT__unnamedblk1__DOT__b_s;
    IData/*31:0*/ smolALU__DOT__unnamedblk1__DOT__sum_s;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ smolALU__DOT__unnamedblk1__DOT__sra_aux;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsmolALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsmolALU___024root(VsmolALU__Syms* symsp, const char* v__name);
    ~VsmolALU___024root();
    VL_UNCOPYABLE(VsmolALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
