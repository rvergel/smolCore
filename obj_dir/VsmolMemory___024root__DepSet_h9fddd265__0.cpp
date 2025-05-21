// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolMemory.h for the primary calling header

#include "VsmolMemory__pch.h"
#include "VsmolMemory___024root.h"

void VsmolMemory___024root___eval_act(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_act\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VsmolMemory___024root___nba_sequent__TOP__0(VsmolMemory___024root* vlSelf);

void VsmolMemory___024root___eval_nba(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_nba\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VsmolMemory___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VsmolMemory___024root___nba_sequent__TOP__0(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___nba_sequent__TOP__0\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__smolMemory__DOT__memory__v0;
    __VdlyVal__smolMemory__DOT__memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__smolMemory__DOT__memory__v0;
    __VdlyDim0__smolMemory__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__smolMemory__DOT__memory__v0;
    __VdlySet__smolMemory__DOT__memory__v0 = 0;
    // Body
    __VdlySet__smolMemory__DOT__memory__v0 = 0U;
    if (vlSelfRef.memWrite) {
        __VdlyVal__smolMemory__DOT__memory__v0 = vlSelfRef.writeData;
        __VdlyDim0__smolMemory__DOT__memory__v0 = (0x1fU 
                                                   & (vlSelfRef.memAddr 
                                                      >> 2U));
        __VdlySet__smolMemory__DOT__memory__v0 = 1U;
    }
    if (vlSelfRef.memRead) {
        vlSelfRef.readData = vlSelfRef.smolMemory__DOT__memory
            [(0x1fU & (vlSelfRef.memAddr >> 2U))];
    }
    if (__VdlySet__smolMemory__DOT__memory__v0) {
        vlSelfRef.smolMemory__DOT__memory[__VdlyDim0__smolMemory__DOT__memory__v0] 
            = __VdlyVal__smolMemory__DOT__memory__v0;
    }
}

void VsmolMemory___024root___eval_triggers__act(VsmolMemory___024root* vlSelf);

bool VsmolMemory___024root___eval_phase__act(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_phase__act\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsmolMemory___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsmolMemory___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsmolMemory___024root___eval_phase__nba(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_phase__nba\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsmolMemory___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolMemory___024root___dump_triggers__nba(VsmolMemory___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolMemory___024root___dump_triggers__act(VsmolMemory___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolMemory___024root___eval(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VsmolMemory___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("smolMemory.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsmolMemory___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("smolMemory.sv", 10, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsmolMemory___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsmolMemory___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsmolMemory___024root___eval_debug_assertions(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_debug_assertions\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.memRead & 0xfeU)))) {
        Verilated::overWidthError("memRead");}
    if (VL_UNLIKELY(((vlSelfRef.memWrite & 0xfeU)))) {
        Verilated::overWidthError("memWrite");}
}
#endif  // VL_DEBUG
