// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolInsMem.h for the primary calling header

#include "VsmolInsMem__pch.h"
#include "VsmolInsMem___024root.h"

void VsmolInsMem___024root___eval_act(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_act\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VsmolInsMem___024root___nba_sequent__TOP__0(VsmolInsMem___024root* vlSelf);

void VsmolInsMem___024root___eval_nba(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_nba\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VsmolInsMem___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VsmolInsMem___024root___nba_sequent__TOP__0(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___nba_sequent__TOP__0\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction = vlSelfRef.InstructionMemory__DOT__mem
        [(0x3ffU & ((IData)(vlSelfRef.addr) >> 2U))];
}

void VsmolInsMem___024root___eval_triggers__act(VsmolInsMem___024root* vlSelf);

bool VsmolInsMem___024root___eval_phase__act(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_phase__act\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsmolInsMem___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsmolInsMem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsmolInsMem___024root___eval_phase__nba(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_phase__nba\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsmolInsMem___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolInsMem___024root___dump_triggers__nba(VsmolInsMem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolInsMem___024root___dump_triggers__act(VsmolInsMem___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolInsMem___024root___eval(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VsmolInsMem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("smolInsMem.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsmolInsMem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("smolInsMem.sv", 9, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsmolInsMem___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsmolInsMem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsmolInsMem___024root___eval_debug_assertions(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_debug_assertions\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.addr & 0xf000U)))) {
        Verilated::overWidthError("addr");}
}
#endif  // VL_DEBUG
