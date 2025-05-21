// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolALU.h for the primary calling header

#include "VsmolALU__pch.h"
#include "VsmolALU___024root.h"

VL_ATTR_COLD void VsmolALU___024root___eval_static(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_static\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolALU___024root___eval_initial(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_initial\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsmolALU___024root___eval_final(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_final\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__stl(VsmolALU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VsmolALU___024root___eval_phase__stl(VsmolALU___024root* vlSelf);

VL_ATTR_COLD void VsmolALU___024root___eval_settle(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_settle\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VsmolALU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("smolALU.sv", 18, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VsmolALU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__stl(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___dump_triggers__stl\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VsmolALU___024root___ico_sequent__TOP__0(VsmolALU___024root* vlSelf);
VL_ATTR_COLD void VsmolALU___024root____Vm_traceActivitySetAll(VsmolALU___024root* vlSelf);

VL_ATTR_COLD void VsmolALU___024root___eval_stl(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_stl\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VsmolALU___024root___ico_sequent__TOP__0(vlSelf);
        VsmolALU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VsmolALU___024root___eval_triggers__stl(VsmolALU___024root* vlSelf);

VL_ATTR_COLD bool VsmolALU___024root___eval_phase__stl(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_phase__stl\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VsmolALU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VsmolALU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__ico(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___dump_triggers__ico\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__act(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___dump_triggers__act\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__nba(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___dump_triggers__nba\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsmolALU___024root____Vm_traceActivitySetAll(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root____Vm_traceActivitySetAll\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VsmolALU___024root___ctor_var_reset(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___ctor_var_reset\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->rs1 = VL_RAND_RESET_I(32);
    vlSelf->rs2_or_imm = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(5);
    vlSelf->op_sel = VL_RAND_RESET_I(5);
    vlSelf->alu_out = VL_RAND_RESET_I(32);
    vlSelf->smolALU__DOT__unnamedblk1__DOT__a_s = VL_RAND_RESET_I(32);
    vlSelf->smolALU__DOT__unnamedblk1__DOT__b_s = VL_RAND_RESET_I(32);
    vlSelf->smolALU__DOT__unnamedblk1__DOT__sum_s = VL_RAND_RESET_I(32);
    vlSelf->smolALU__DOT__unnamedblk1__DOT__sra_aux = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
