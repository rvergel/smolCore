// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolMemory__Syms.h"


VL_ATTR_COLD void VsmolMemory___024root__trace_init_sub__TOP__0(VsmolMemory___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_init_sub__TOP__0\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"memWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"memAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"readData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("smolMemory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"memWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"memAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"readData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolMemory___024root__trace_init_top(VsmolMemory___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_init_top\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsmolMemory___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsmolMemory___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VsmolMemory___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsmolMemory___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsmolMemory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsmolMemory___024root__trace_register(VsmolMemory___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_register\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VsmolMemory___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VsmolMemory___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VsmolMemory___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VsmolMemory___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsmolMemory___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_const_0\n"); );
    // Init
    VsmolMemory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolMemory___024root*>(voidSelf);
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VsmolMemory___024root__trace_full_0_sub_0(VsmolMemory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsmolMemory___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_full_0\n"); );
    // Init
    VsmolMemory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolMemory___024root*>(voidSelf);
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VsmolMemory___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsmolMemory___024root__trace_full_0_sub_0(VsmolMemory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_full_0_sub_0\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.smolMemory__DOT__memory[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.smolMemory__DOT__memory[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.smolMemory__DOT__memory[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.smolMemory__DOT__memory[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.smolMemory__DOT__memory[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.smolMemory__DOT__memory[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.smolMemory__DOT__memory[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.smolMemory__DOT__memory[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.smolMemory__DOT__memory[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.smolMemory__DOT__memory[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.smolMemory__DOT__memory[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.smolMemory__DOT__memory[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.smolMemory__DOT__memory[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.smolMemory__DOT__memory[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.smolMemory__DOT__memory[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.smolMemory__DOT__memory[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.smolMemory__DOT__memory[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.smolMemory__DOT__memory[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.smolMemory__DOT__memory[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.smolMemory__DOT__memory[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.smolMemory__DOT__memory[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.smolMemory__DOT__memory[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.smolMemory__DOT__memory[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.smolMemory__DOT__memory[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.smolMemory__DOT__memory[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.smolMemory__DOT__memory[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.smolMemory__DOT__memory[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.smolMemory__DOT__memory[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.smolMemory__DOT__memory[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.smolMemory__DOT__memory[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.smolMemory__DOT__memory[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.smolMemory__DOT__memory[31]),32);
    bufp->fullBit(oldp+33,(vlSelfRef.clk));
    bufp->fullBit(oldp+34,(vlSelfRef.memRead));
    bufp->fullBit(oldp+35,(vlSelfRef.memWrite));
    bufp->fullIData(oldp+36,(vlSelfRef.memAddr),32);
    bufp->fullIData(oldp+37,(vlSelfRef.writeData),32);
    bufp->fullIData(oldp+38,(vlSelfRef.readData),32);
}
