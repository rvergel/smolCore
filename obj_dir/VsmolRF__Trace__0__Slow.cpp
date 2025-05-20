// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolRF__Syms.h"


VL_ATTR_COLD void VsmolRF___024root__trace_init_sub__TOP__0(VsmolRF___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_init_sub__TOP__0\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+34,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"wEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rEnable1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"rEnable2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"wAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"wData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"rAddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"rAddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"rData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"rData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("smolRF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+34,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"wEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rEnable1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"rEnable2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"wAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"wData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"rAddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"rAddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"rData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"rData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registerFile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolRF___024root__trace_init_top(VsmolRF___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_init_top\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsmolRF___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsmolRF___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VsmolRF___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsmolRF___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsmolRF___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsmolRF___024root__trace_register(VsmolRF___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_register\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VsmolRF___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VsmolRF___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VsmolRF___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VsmolRF___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsmolRF___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_const_0\n"); );
    // Init
    VsmolRF___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolRF___024root*>(voidSelf);
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VsmolRF___024root__trace_full_0_sub_0(VsmolRF___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsmolRF___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_full_0\n"); );
    // Init
    VsmolRF___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolRF___024root*>(voidSelf);
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VsmolRF___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsmolRF___024root__trace_full_0_sub_0(VsmolRF___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_full_0_sub_0\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.smolRF__DOT__registerFile[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.smolRF__DOT__registerFile[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.smolRF__DOT__registerFile[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.smolRF__DOT__registerFile[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.smolRF__DOT__registerFile[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.smolRF__DOT__registerFile[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.smolRF__DOT__registerFile[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.smolRF__DOT__registerFile[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.smolRF__DOT__registerFile[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.smolRF__DOT__registerFile[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.smolRF__DOT__registerFile[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.smolRF__DOT__registerFile[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.smolRF__DOT__registerFile[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.smolRF__DOT__registerFile[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.smolRF__DOT__registerFile[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.smolRF__DOT__registerFile[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.smolRF__DOT__registerFile[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.smolRF__DOT__registerFile[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.smolRF__DOT__registerFile[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.smolRF__DOT__registerFile[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.smolRF__DOT__registerFile[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.smolRF__DOT__registerFile[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.smolRF__DOT__registerFile[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.smolRF__DOT__registerFile[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.smolRF__DOT__registerFile[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.smolRF__DOT__registerFile[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.smolRF__DOT__registerFile[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.smolRF__DOT__registerFile[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.smolRF__DOT__registerFile[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.smolRF__DOT__registerFile[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.smolRF__DOT__registerFile[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.smolRF__DOT__registerFile[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.smolRF__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+34,(vlSelfRef.clk));
    bufp->fullBit(oldp+35,(vlSelfRef.rst));
    bufp->fullBit(oldp+36,(vlSelfRef.wEnable));
    bufp->fullBit(oldp+37,(vlSelfRef.rEnable1));
    bufp->fullBit(oldp+38,(vlSelfRef.rEnable2));
    bufp->fullCData(oldp+39,(vlSelfRef.wAddr),5);
    bufp->fullIData(oldp+40,(vlSelfRef.wData),32);
    bufp->fullCData(oldp+41,(vlSelfRef.rAddr1),5);
    bufp->fullCData(oldp+42,(vlSelfRef.rAddr2),5);
    bufp->fullIData(oldp+43,(vlSelfRef.rData1),32);
    bufp->fullIData(oldp+44,(vlSelfRef.rData2),32);
}
