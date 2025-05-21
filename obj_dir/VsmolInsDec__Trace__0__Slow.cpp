// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolInsDec__Syms.h"


VL_ATTR_COLD void VsmolInsDec___024root__trace_init_sub__TOP__0(VsmolInsDec___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_init_sub__TOP__0\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+3,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("smolInsDec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+3,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"optype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolInsDec___024root__trace_init_top(VsmolInsDec___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_init_top\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsmolInsDec___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsmolInsDec___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VsmolInsDec___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsmolInsDec___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsmolInsDec___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsmolInsDec___024root__trace_register(VsmolInsDec___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_register\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VsmolInsDec___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VsmolInsDec___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VsmolInsDec___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VsmolInsDec___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsmolInsDec___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_const_0\n"); );
    // Init
    VsmolInsDec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolInsDec___024root*>(voidSelf);
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VsmolInsDec___024root__trace_full_0_sub_0(VsmolInsDec___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsmolInsDec___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_full_0\n"); );
    // Init
    VsmolInsDec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolInsDec___024root*>(voidSelf);
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VsmolInsDec___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsmolInsDec___024root__trace_full_0_sub_0(VsmolInsDec___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_full_0_sub_0\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.instr),32);
    bufp->fullCData(oldp+2,(vlSelfRef.opcode),7);
    bufp->fullCData(oldp+3,(vlSelfRef.rd),5);
    bufp->fullCData(oldp+4,(vlSelfRef.funct3),3);
    bufp->fullCData(oldp+5,(vlSelfRef.rs1),5);
    bufp->fullCData(oldp+6,(vlSelfRef.rs2),5);
    bufp->fullCData(oldp+7,(vlSelfRef.funct7),7);
    bufp->fullIData(oldp+8,(vlSelfRef.imm),32);
    bufp->fullCData(oldp+9,(vlSelfRef.smolInsDec__DOT__optype),3);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelfRef.instr 
                                       >> 2U))),5);
}
