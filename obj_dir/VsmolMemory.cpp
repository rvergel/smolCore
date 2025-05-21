// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsmolMemory__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsmolMemory::VsmolMemory(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsmolMemory__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , memRead{vlSymsp->TOP.memRead}
    , memWrite{vlSymsp->TOP.memWrite}
    , memAddr{vlSymsp->TOP.memAddr}
    , writeData{vlSymsp->TOP.writeData}
    , readData{vlSymsp->TOP.readData}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsmolMemory::VsmolMemory(const char* _vcname__)
    : VsmolMemory(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsmolMemory::~VsmolMemory() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsmolMemory___024root___eval_debug_assertions(VsmolMemory___024root* vlSelf);
#endif  // VL_DEBUG
void VsmolMemory___024root___eval_static(VsmolMemory___024root* vlSelf);
void VsmolMemory___024root___eval_initial(VsmolMemory___024root* vlSelf);
void VsmolMemory___024root___eval_settle(VsmolMemory___024root* vlSelf);
void VsmolMemory___024root___eval(VsmolMemory___024root* vlSelf);

void VsmolMemory::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsmolMemory::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsmolMemory___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsmolMemory___024root___eval_static(&(vlSymsp->TOP));
        VsmolMemory___024root___eval_initial(&(vlSymsp->TOP));
        VsmolMemory___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsmolMemory___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsmolMemory::eventsPending() { return false; }

uint64_t VsmolMemory::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsmolMemory::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsmolMemory___024root___eval_final(VsmolMemory___024root* vlSelf);

VL_ATTR_COLD void VsmolMemory::final() {
    VsmolMemory___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsmolMemory::hierName() const { return vlSymsp->name(); }
const char* VsmolMemory::modelName() const { return "VsmolMemory"; }
unsigned VsmolMemory::threads() const { return 1; }
void VsmolMemory::prepareClone() const { contextp()->prepareClone(); }
void VsmolMemory::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsmolMemory::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsmolMemory___024root__trace_decl_types(VerilatedVcd* tracep);

void VsmolMemory___024root__trace_init_top(VsmolMemory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsmolMemory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolMemory___024root*>(voidSelf);
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsmolMemory___024root__trace_decl_types(tracep);
    VsmolMemory___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolMemory___024root__trace_register(VsmolMemory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsmolMemory::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsmolMemory::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsmolMemory___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
