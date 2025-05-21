// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolALU__Syms.h"


VL_ATTR_COLD void VsmolALU___024root__trace_init_sub__TOP__0(VsmolALU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_init_sub__TOP__0\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+6,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs2_or_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"op_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("smolALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs2_or_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"op_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+11,0,"sum_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+1,0,"a_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"sum_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+4,0,"sra_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolALU___024root__trace_init_top(VsmolALU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_init_top\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsmolALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsmolALU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VsmolALU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsmolALU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsmolALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsmolALU___024root__trace_register(VsmolALU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_register\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VsmolALU___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VsmolALU___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VsmolALU___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VsmolALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsmolALU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_const_0\n"); );
    // Init
    VsmolALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolALU___024root*>(voidSelf);
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VsmolALU___024root__trace_full_0_sub_0(VsmolALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsmolALU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_full_0\n"); );
    // Init
    VsmolALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolALU___024root*>(voidSelf);
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VsmolALU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsmolALU___024root__trace_full_0_sub_0(VsmolALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_full_0_sub_0\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__a_s),32);
    bufp->fullIData(oldp+2,(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__b_s),32);
    bufp->fullIData(oldp+3,(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__sum_s),32);
    bufp->fullQData(oldp+4,(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__sra_aux),64);
    bufp->fullIData(oldp+6,(vlSelfRef.rs1),32);
    bufp->fullIData(oldp+7,(vlSelfRef.rs2_or_imm),32);
    bufp->fullCData(oldp+8,(vlSelfRef.pc),5);
    bufp->fullCData(oldp+9,(vlSelfRef.op_sel),5);
    bufp->fullIData(oldp+10,(vlSelfRef.alu_out),32);
    bufp->fullQData(oldp+11,((0x1ffffffffULL & ((1U 
                                                 == (IData)(vlSelfRef.op_sel))
                                                 ? 
                                                ((QData)((IData)(vlSelfRef.rs1)) 
                                                 - (QData)((IData)(vlSelfRef.rs2_or_imm)))
                                                 : 
                                                ((QData)((IData)(vlSelfRef.rs1)) 
                                                 + (QData)((IData)(vlSelfRef.rs2_or_imm)))))),33);
}
