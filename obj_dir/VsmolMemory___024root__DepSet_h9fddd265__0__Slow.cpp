// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolMemory.h for the primary calling header

#include "VsmolMemory__pch.h"
#include "VsmolMemory___024root.h"

VL_ATTR_COLD void VsmolMemory___024root___eval_static(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_static\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolMemory___024root___eval_initial(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_initial\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VsmolMemory___024root___eval_final(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_final\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolMemory___024root___eval_settle(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_settle\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolMemory___024root___dump_triggers__act(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___dump_triggers__act\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VsmolMemory___024root___dump_triggers__nba(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___dump_triggers__nba\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VsmolMemory___024root___ctor_var_reset(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___ctor_var_reset\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->memRead = VL_RAND_RESET_I(1);
    vlSelf->memWrite = VL_RAND_RESET_I(1);
    vlSelf->memAddr = VL_RAND_RESET_I(32);
    vlSelf->writeData = VL_RAND_RESET_I(32);
    vlSelf->readData = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->smolMemory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
