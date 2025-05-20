// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolRF.h for the primary calling header

#include "VsmolRF__pch.h"
#include "VsmolRF___024root.h"

void VsmolRF___024root___ico_sequent__TOP__0(VsmolRF___024root* vlSelf);

void VsmolRF___024root___eval_ico(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_ico\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VsmolRF___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VsmolRF___024root___ico_sequent__TOP__0(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___ico_sequent__TOP__0\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rData1 = ((IData)(vlSelfRef.rEnable1)
                         ? vlSelfRef.smolRF__DOT__registerFile
                        [vlSelfRef.rAddr1] : 0U);
    vlSelfRef.rData2 = ((IData)(vlSelfRef.rEnable2)
                         ? vlSelfRef.smolRF__DOT__registerFile
                        [vlSelfRef.rAddr2] : 0U);
}

void VsmolRF___024root___eval_triggers__ico(VsmolRF___024root* vlSelf);

bool VsmolRF___024root___eval_phase__ico(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_phase__ico\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VsmolRF___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VsmolRF___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VsmolRF___024root___eval_act(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_act\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VsmolRF___024root___nba_sequent__TOP__0(VsmolRF___024root* vlSelf);

void VsmolRF___024root___eval_nba(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_nba\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VsmolRF___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VsmolRF___024root___nba_sequent__TOP__0(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___nba_sequent__TOP__0\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__smolRF__DOT__registerFile__v0;
    __VdlySet__smolRF__DOT__registerFile__v0 = 0;
    IData/*31:0*/ __VdlyVal__smolRF__DOT__registerFile__v32;
    __VdlyVal__smolRF__DOT__registerFile__v32 = 0;
    CData/*4:0*/ __VdlyDim0__smolRF__DOT__registerFile__v32;
    __VdlyDim0__smolRF__DOT__registerFile__v32 = 0;
    CData/*0:0*/ __VdlySet__smolRF__DOT__registerFile__v32;
    __VdlySet__smolRF__DOT__registerFile__v32 = 0;
    // Body
    __VdlySet__smolRF__DOT__registerFile__v0 = 0U;
    __VdlySet__smolRF__DOT__registerFile__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.smolRF__DOT__unnamedblk1__DOT__i = 0x20U;
        __VdlySet__smolRF__DOT__registerFile__v0 = 1U;
    } else if (((IData)(vlSelfRef.wEnable) & (0U != (IData)(vlSelfRef.wAddr)))) {
        __VdlyVal__smolRF__DOT__registerFile__v32 = vlSelfRef.wData;
        __VdlyDim0__smolRF__DOT__registerFile__v32 
            = vlSelfRef.wAddr;
        __VdlySet__smolRF__DOT__registerFile__v32 = 1U;
    }
    if (__VdlySet__smolRF__DOT__registerFile__v0) {
        vlSelfRef.smolRF__DOT__registerFile[0U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[1U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[2U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[3U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[4U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[5U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[6U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[7U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[8U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[9U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0xaU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0xbU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0xcU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0xdU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0xeU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0xfU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x10U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x11U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x12U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x13U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x14U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x15U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x16U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x17U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x18U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x19U] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x1aU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x1bU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x1cU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x1dU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x1eU] = 0U;
        vlSelfRef.smolRF__DOT__registerFile[0x1fU] = 0U;
    }
    if (__VdlySet__smolRF__DOT__registerFile__v32) {
        vlSelfRef.smolRF__DOT__registerFile[__VdlyDim0__smolRF__DOT__registerFile__v32] 
            = __VdlyVal__smolRF__DOT__registerFile__v32;
    }
    vlSelfRef.rData1 = ((IData)(vlSelfRef.rEnable1)
                         ? vlSelfRef.smolRF__DOT__registerFile
                        [vlSelfRef.rAddr1] : 0U);
    vlSelfRef.rData2 = ((IData)(vlSelfRef.rEnable2)
                         ? vlSelfRef.smolRF__DOT__registerFile
                        [vlSelfRef.rAddr2] : 0U);
}

void VsmolRF___024root___eval_triggers__act(VsmolRF___024root* vlSelf);

bool VsmolRF___024root___eval_phase__act(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_phase__act\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsmolRF___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsmolRF___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsmolRF___024root___eval_phase__nba(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_phase__nba\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsmolRF___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__ico(VsmolRF___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__nba(VsmolRF___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__act(VsmolRF___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolRF___024root___eval(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VsmolRF___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("smolRF.sv", 10, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VsmolRF___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsmolRF___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("smolRF.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsmolRF___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("smolRF.sv", 10, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsmolRF___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsmolRF___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsmolRF___024root___eval_debug_assertions(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_debug_assertions\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.wEnable & 0xfeU)))) {
        Verilated::overWidthError("wEnable");}
    if (VL_UNLIKELY(((vlSelfRef.rEnable1 & 0xfeU)))) {
        Verilated::overWidthError("rEnable1");}
    if (VL_UNLIKELY(((vlSelfRef.rEnable2 & 0xfeU)))) {
        Verilated::overWidthError("rEnable2");}
    if (VL_UNLIKELY(((vlSelfRef.wAddr & 0xe0U)))) {
        Verilated::overWidthError("wAddr");}
    if (VL_UNLIKELY(((vlSelfRef.rAddr1 & 0xe0U)))) {
        Verilated::overWidthError("rAddr1");}
    if (VL_UNLIKELY(((vlSelfRef.rAddr2 & 0xe0U)))) {
        Verilated::overWidthError("rAddr2");}
}
#endif  // VL_DEBUG
