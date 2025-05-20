// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolRF.h for the primary calling header

#include "VsmolRF__pch.h"
#include "VsmolRF___024root.h"

VL_ATTR_COLD void VsmolRF___024root___eval_static(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_static\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolRF___024root___eval_initial(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_initial\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VsmolRF___024root___eval_final(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_final\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__stl(VsmolRF___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VsmolRF___024root___eval_phase__stl(VsmolRF___024root* vlSelf);

VL_ATTR_COLD void VsmolRF___024root___eval_settle(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_settle\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VsmolRF___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("smolRF.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VsmolRF___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__stl(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___dump_triggers__stl\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VsmolRF___024root___ico_sequent__TOP__0(VsmolRF___024root* vlSelf);

VL_ATTR_COLD void VsmolRF___024root___eval_stl(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_stl\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VsmolRF___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VsmolRF___024root___eval_triggers__stl(VsmolRF___024root* vlSelf);

VL_ATTR_COLD bool VsmolRF___024root___eval_phase__stl(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_phase__stl\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VsmolRF___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VsmolRF___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__ico(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___dump_triggers__ico\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__act(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___dump_triggers__act\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__nba(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___dump_triggers__nba\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VsmolRF___024root___ctor_var_reset(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___ctor_var_reset\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->wEnable = VL_RAND_RESET_I(1);
    vlSelf->rEnable1 = VL_RAND_RESET_I(1);
    vlSelf->rEnable2 = VL_RAND_RESET_I(1);
    vlSelf->wAddr = VL_RAND_RESET_I(5);
    vlSelf->wData = VL_RAND_RESET_I(32);
    vlSelf->rAddr1 = VL_RAND_RESET_I(5);
    vlSelf->rAddr2 = VL_RAND_RESET_I(5);
    vlSelf->rData1 = VL_RAND_RESET_I(32);
    vlSelf->rData2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->smolRF__DOT__registerFile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->smolRF__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
