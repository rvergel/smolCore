// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolNextPC.h for the primary calling header

#include "VsmolNextPC__pch.h"
#include "VsmolNextPC___024root.h"

VL_ATTR_COLD void VsmolNextPC___024root___eval_static(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___eval_static\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolNextPC___024root___eval_initial(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___eval_initial\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolNextPC___024root___eval_final(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___eval_final\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolNextPC___024root___dump_triggers__stl(VsmolNextPC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VsmolNextPC___024root___eval_phase__stl(VsmolNextPC___024root* vlSelf);

VL_ATTR_COLD void VsmolNextPC___024root___eval_settle(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___eval_settle\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VsmolNextPC___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("smolNextPC.sv", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VsmolNextPC___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolNextPC___024root___dump_triggers__stl(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___dump_triggers__stl\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VsmolNextPC___024root___ico_sequent__TOP__0(VsmolNextPC___024root* vlSelf);

VL_ATTR_COLD void VsmolNextPC___024root___eval_stl(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___eval_stl\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VsmolNextPC___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VsmolNextPC___024root___eval_triggers__stl(VsmolNextPC___024root* vlSelf);

VL_ATTR_COLD bool VsmolNextPC___024root___eval_phase__stl(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___eval_phase__stl\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VsmolNextPC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VsmolNextPC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolNextPC___024root___dump_triggers__ico(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___dump_triggers__ico\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VsmolNextPC___024root___dump_triggers__act(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___dump_triggers__act\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolNextPC___024root___dump_triggers__nba(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___dump_triggers__nba\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsmolNextPC___024root___ctor_var_reset(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___ctor_var_reset\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->rs1 = VL_RAND_RESET_I(32);
    vlSelf->rs2_or_imm = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->alu_out = VL_RAND_RESET_I(32);
    vlSelf->br_auipc_enable = VL_RAND_RESET_I(1);
    vlSelf->jal_enable = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->nextPC = VL_RAND_RESET_I(32);
}
