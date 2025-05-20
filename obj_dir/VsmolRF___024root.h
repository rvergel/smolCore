// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsmolRF.h for the primary calling header

#ifndef VERILATED_VSMOLRF___024ROOT_H_
#define VERILATED_VSMOLRF___024ROOT_H_  // guard

#include "verilated.h"


class VsmolRF__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsmolRF___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(wEnable,0,0);
    VL_IN8(rEnable1,0,0);
    VL_IN8(rEnable2,0,0);
    VL_IN8(wAddr,4,0);
    VL_IN8(rAddr1,4,0);
    VL_IN8(rAddr2,4,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(wData,31,0);
    VL_OUT(rData1,31,0);
    VL_OUT(rData2,31,0);
    IData/*31:0*/ smolRF__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> smolRF__DOT__registerFile;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsmolRF__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsmolRF___024root(VsmolRF__Syms* symsp, const char* v__name);
    ~VsmolRF___024root();
    VL_UNCOPYABLE(VsmolRF___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
