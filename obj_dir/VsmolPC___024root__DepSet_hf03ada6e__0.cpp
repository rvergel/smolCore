// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolPC.h for the primary calling header

#include "VsmolPC__pch.h"
#include "VsmolPC___024root.h"

void VsmolPC___024root___eval_act(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_act\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VsmolPC___024root___nba_sequent__TOP__0(VsmolPC___024root* vlSelf);

void VsmolPC___024root___eval_nba(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_nba\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VsmolPC___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VsmolPC___024root___nba_sequent__TOP__0(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___nba_sequent__TOP__0\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc = ((IData)(vlSelfRef.rst) ? 0U : vlSelfRef.next_pc);
}

void VsmolPC___024root___eval_triggers__act(VsmolPC___024root* vlSelf);

bool VsmolPC___024root___eval_phase__act(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_phase__act\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsmolPC___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsmolPC___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsmolPC___024root___eval_phase__nba(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_phase__nba\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsmolPC___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolPC___024root___dump_triggers__nba(VsmolPC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolPC___024root___dump_triggers__act(VsmolPC___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolPC___024root___eval(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsmolPC___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("smolPC.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsmolPC___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("smolPC.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsmolPC___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsmolPC___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsmolPC___024root___eval_debug_assertions(VsmolPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolPC___024root___eval_debug_assertions\n"); );
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
