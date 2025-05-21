// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolALU.h for the primary calling header

#include "VsmolALU__pch.h"
#include "VsmolALU___024root.h"

void VsmolALU___024root___ico_sequent__TOP__0(VsmolALU___024root* vlSelf);

void VsmolALU___024root___eval_ico(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_ico\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VsmolALU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VsmolALU___024root___ico_sequent__TOP__0(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___ico_sequent__TOP__0\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.smolALU__DOT__unnamedblk1__DOT__sra_aux = 0ULL;
    if ((0x10U & (IData)(vlSelfRef.op_sel))) {
        vlSelfRef.alu_out = ((8U & (IData)(vlSelfRef.op_sel))
                              ? 0U : ((4U & (IData)(vlSelfRef.op_sel))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelfRef.op_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.op_sel))
                                                    ? 
                                                   ((vlSelfRef.rs1 
                                                     >= vlSelfRef.rs2_or_imm)
                                                     ? 
                                                    ((IData)(vlSelfRef.pc) 
                                                     + vlSelfRef.rs2_or_imm)
                                                     : 0U)
                                                    : 
                                                   ((vlSelfRef.rs1 
                                                     < vlSelfRef.rs2_or_imm)
                                                     ? 
                                                    ((IData)(vlSelfRef.pc) 
                                                     + vlSelfRef.rs2_or_imm)
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.op_sel))
                                                    ? 
                                                   (((vlSelfRef.rs1 
                                                      >= vlSelfRef.rs2_or_imm) 
                                                     ^ 
                                                     ((vlSelfRef.rs1 
                                                       >> 0x1fU) 
                                                      != 
                                                      (vlSelfRef.rs2_or_imm 
                                                       >> 0x1fU)))
                                                     ? 
                                                    ((IData)(vlSelfRef.pc) 
                                                     + vlSelfRef.rs2_or_imm)
                                                     : 0U)
                                                    : 
                                                   (((vlSelfRef.rs1 
                                                      < vlSelfRef.rs2_or_imm) 
                                                     ^ 
                                                     ((vlSelfRef.rs1 
                                                       >> 0x1fU) 
                                                      != 
                                                      (vlSelfRef.rs2_or_imm 
                                                       >> 0x1fU)))
                                                     ? 
                                                    ((IData)(vlSelfRef.pc) 
                                                     + vlSelfRef.rs2_or_imm)
                                                     : 0U)))));
    } else if ((8U & (IData)(vlSelfRef.op_sel))) {
        if ((4U & (IData)(vlSelfRef.op_sel))) {
            if ((2U & (IData)(vlSelfRef.op_sel))) {
                vlSelfRef.alu_out = ((1U & (IData)(vlSelfRef.op_sel))
                                      ? ((vlSelfRef.rs1 
                                          != vlSelfRef.rs2_or_imm)
                                          ? ((IData)(vlSelfRef.pc) 
                                             + vlSelfRef.rs2_or_imm)
                                          : 0U) : (
                                                   (vlSelfRef.rs1 
                                                    == vlSelfRef.rs2_or_imm)
                                                    ? 
                                                   ((IData)(vlSelfRef.pc) 
                                                    + vlSelfRef.rs2_or_imm)
                                                    : 0U));
            } else if ((1U & (IData)(vlSelfRef.op_sel))) {
                vlSelfRef.alu_out = (vlSelfRef.rs1 
                                     + vlSelfRef.rs2_or_imm);
            } else {
                vlSelfRef.smolALU__DOT__unnamedblk1__DOT__sra_aux 
                    = ((((QData)((IData)((- (IData)(
                                                    (vlSelfRef.rs1 
                                                     >> 0x1fU))))) 
                         << 0x20U) | (QData)((IData)(vlSelfRef.rs1))) 
                       >> (0x1fU & vlSelfRef.rs2_or_imm));
                vlSelfRef.alu_out = (IData)(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__sra_aux);
            }
        } else {
            vlSelfRef.alu_out = ((2U & (IData)(vlSelfRef.op_sel))
                                  ? ((1U & (IData)(vlSelfRef.op_sel))
                                      ? (((vlSelfRef.rs1 
                                           >> 0x1fU) 
                                          == (vlSelfRef.rs2_or_imm 
                                              >> 0x1fU))
                                          ? (vlSelfRef.rs1 
                                             < vlSelfRef.rs2_or_imm)
                                          : (vlSelfRef.rs1 
                                             >> 0x1fU))
                                      : ((IData)(4U) 
                                         + (IData)(vlSelfRef.pc)))
                                  : ((1U & (IData)(vlSelfRef.op_sel))
                                      ? ((IData)(vlSelfRef.pc) 
                                         + vlSelfRef.rs2_or_imm)
                                      : (0xfffff000U 
                                         & vlSelfRef.rs2_or_imm)));
        }
    } else {
        vlSelfRef.alu_out = ((4U & (IData)(vlSelfRef.op_sel))
                              ? ((2U & (IData)(vlSelfRef.op_sel))
                                  ? ((1U & (IData)(vlSelfRef.op_sel))
                                      ? (vlSelfRef.rs1 
                                         < vlSelfRef.rs2_or_imm)
                                      : (vlSelfRef.rs1 
                                         << (0x1fU 
                                             & vlSelfRef.rs2_or_imm)))
                                  : ((1U & (IData)(vlSelfRef.op_sel))
                                      ? (vlSelfRef.rs1 
                                         >> (0x1fU 
                                             & vlSelfRef.rs2_or_imm))
                                      : (vlSelfRef.rs1 
                                         ^ vlSelfRef.rs2_or_imm)))
                              : ((2U & (IData)(vlSelfRef.op_sel))
                                  ? ((1U & (IData)(vlSelfRef.op_sel))
                                      ? ((0U != vlSelfRef.rs1) 
                                         | (0U != vlSelfRef.rs2_or_imm))
                                      : (vlSelfRef.rs1 
                                         & vlSelfRef.rs2_or_imm))
                                  : ((1U & (IData)(vlSelfRef.op_sel))
                                      ? (vlSelfRef.rs1 
                                         - vlSelfRef.rs2_or_imm)
                                      : (vlSelfRef.rs1 
                                         + vlSelfRef.rs2_or_imm))));
    }
    vlSelfRef.smolALU__DOT__unnamedblk1__DOT__a_s = vlSelfRef.rs1;
    vlSelfRef.smolALU__DOT__unnamedblk1__DOT__b_s = 
        ((1U == (IData)(vlSelfRef.op_sel)) ? (- vlSelfRef.rs2_or_imm)
          : vlSelfRef.rs2_or_imm);
    vlSelfRef.smolALU__DOT__unnamedblk1__DOT__sum_s 
        = (vlSelfRef.smolALU__DOT__unnamedblk1__DOT__a_s 
           + vlSelfRef.smolALU__DOT__unnamedblk1__DOT__b_s);
}

void VsmolALU___024root___eval_triggers__ico(VsmolALU___024root* vlSelf);

bool VsmolALU___024root___eval_phase__ico(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_phase__ico\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VsmolALU___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VsmolALU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VsmolALU___024root___eval_act(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_act\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VsmolALU___024root___eval_nba(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_nba\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VsmolALU___024root___eval_triggers__act(VsmolALU___024root* vlSelf);

bool VsmolALU___024root___eval_phase__act(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_phase__act\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsmolALU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsmolALU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsmolALU___024root___eval_phase__nba(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_phase__nba\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsmolALU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__ico(VsmolALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__nba(VsmolALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__act(VsmolALU___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolALU___024root___eval(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VsmolALU___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("smolALU.sv", 18, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VsmolALU___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsmolALU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("smolALU.sv", 18, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsmolALU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("smolALU.sv", 18, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsmolALU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsmolALU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsmolALU___024root___eval_debug_assertions(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_debug_assertions\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.pc & 0xe0U)))) {
        Verilated::overWidthError("pc");}
    if (VL_UNLIKELY(((vlSelfRef.op_sel & 0xe0U)))) {
        Verilated::overWidthError("op_sel");}
}
#endif  // VL_DEBUG
