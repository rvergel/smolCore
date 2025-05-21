// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolInsMem.h for the primary calling header

#include "VsmolInsMem__pch.h"
#include "VsmolInsMem___024root.h"

VL_ATTR_COLD void VsmolInsMem___024root___eval_static(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_static\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolInsMem___024root___eval_initial__TOP(VsmolInsMem___024root* vlSelf);

VL_ATTR_COLD void VsmolInsMem___024root___eval_initial(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_initial\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsmolInsMem___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VsmolInsMem___024root___eval_initial__TOP(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_initial__TOP\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_WRITEF_NX("Loading program from program.hex ...\n",0);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.InstructionMemory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VsmolInsMem___024root___eval_final(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_final\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolInsMem___024root___eval_settle(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_settle\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolInsMem___024root___dump_triggers__act(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___dump_triggers__act\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolInsMem___024root___dump_triggers__nba(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___dump_triggers__nba\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsmolInsMem___024root___ctor_var_reset(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___ctor_var_reset\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(12);
    vlSelf->instruction = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->InstructionMemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
