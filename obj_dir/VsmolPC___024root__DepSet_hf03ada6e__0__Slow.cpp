// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolPC.h for the primary calling header

#include "VsmolPC__pch.h"
#include "VsmolPC___024root.h"

VL_ATTR_COLD void VsmolPC___024root___eval_static(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_static\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolPC___024root___eval_initial(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_initial\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VsmolPC___024root___eval_final(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_final\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolPC___024root___eval_settle(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_settle\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolPC___024root___dump_triggers__act(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___dump_triggers__act\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VsmolPC___024root___dump_triggers__nba(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___dump_triggers__nba\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VsmolPC___024root___ctor_var_reset(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___ctor_var_reset\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->next_pc = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
