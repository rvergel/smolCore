// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolInsDec.h for the primary calling header

#include "VsmolInsDec__pch.h"
#include "VsmolInsDec___024root.h"

void VsmolInsDec___024root___ico_sequent__TOP__0(VsmolInsDec___024root* vlSelf);

void VsmolInsDec___024root___eval_ico(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___eval_ico\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VsmolInsDec___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> VsmolInsDec__ConstPool__TABLE_h604fd73c_0;

VL_INLINE_OPT void VsmolInsDec___024root___ico_sequent__TOP__0(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___ico_sequent__TOP__0\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.opcode = (0x7fU & vlSelfRef.instr);
    vlSelfRef.rd = (0x1fU & (vlSelfRef.instr >> 7U));
    vlSelfRef.funct3 = (7U & (vlSelfRef.instr >> 0xcU));
    vlSelfRef.rs1 = (0x1fU & (vlSelfRef.instr >> 0xfU));
    vlSelfRef.rs2 = (0x1fU & (vlSelfRef.instr >> 0x14U));
    vlSelfRef.funct7 = (vlSelfRef.instr >> 0x19U);
    __Vtableidx1 = (0x1fU & (vlSelfRef.instr >> 2U));
    vlSelfRef.smolInsDec__DOT__optype = VsmolInsDec__ConstPool__TABLE_h604fd73c_0
        [__Vtableidx1];
    vlSelfRef.imm = 0U;
    vlSelfRef.imm = ((4U & (IData)(vlSelfRef.smolInsDec__DOT__optype))
                      ? ((2U & (IData)(vlSelfRef.smolInsDec__DOT__optype))
                          ? ((1U & (IData)(vlSelfRef.smolInsDec__DOT__optype))
                              ? 0U : (((- (IData)((vlSelfRef.instr 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelfRef.instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.instr 
                                                            >> 7U))))))
                          : ((1U & (IData)(vlSelfRef.smolInsDec__DOT__optype))
                              ? ((0x7ff00000U & ((- (IData)(
                                                            (vlSelfRef.instr 
                                                             >> 0x1fU))) 
                                                 << 0x14U)) 
                                 | (((0xff000U & vlSelfRef.instr) 
                                     | (0x800U & (vlSelfRef.instr 
                                                  >> 9U))) 
                                    | (0x7feU & (vlSelfRef.instr 
                                                 >> 0x14U))))
                              : 0U)) : ((2U & (IData)(vlSelfRef.smolInsDec__DOT__optype))
                                         ? ((1U & (IData)(vlSelfRef.smolInsDec__DOT__optype))
                                             ? (((- (IData)(
                                                            (vlSelfRef.instr 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelfRef.instr 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.instr 
                                                         >> 7U))))
                                             : (((- (IData)(
                                                            (vlSelfRef.instr 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelfRef.instr 
                                                   >> 0x14U)))
                                         : ((1U & (IData)(vlSelfRef.smolInsDec__DOT__optype))
                                             ? (0x1ffffeU 
                                                & (vlSelfRef.instr 
                                                   >> 0xbU))
                                             : 0U)));
}

void VsmolInsDec___024root___eval_triggers__ico(VsmolInsDec___024root* vlSelf);

bool VsmolInsDec___024root___eval_phase__ico(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___eval_phase__ico\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VsmolInsDec___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VsmolInsDec___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VsmolInsDec___024root___eval_act(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___eval_act\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VsmolInsDec___024root___eval_nba(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___eval_nba\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VsmolInsDec___024root___eval_triggers__act(VsmolInsDec___024root* vlSelf);

bool VsmolInsDec___024root___eval_phase__act(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___eval_phase__act\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsmolInsDec___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsmolInsDec___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsmolInsDec___024root___eval_phase__nba(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___eval_phase__nba\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsmolInsDec___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolInsDec___024root___dump_triggers__ico(VsmolInsDec___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolInsDec___024root___dump_triggers__nba(VsmolInsDec___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolInsDec___024root___dump_triggers__act(VsmolInsDec___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolInsDec___024root___eval(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___eval\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VsmolInsDec___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("smolInsDec.sv", 17, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VsmolInsDec___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsmolInsDec___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("smolInsDec.sv", 17, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsmolInsDec___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("smolInsDec.sv", 17, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsmolInsDec___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsmolInsDec___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsmolInsDec___024root___eval_debug_assertions(VsmolInsDec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root___eval_debug_assertions\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
