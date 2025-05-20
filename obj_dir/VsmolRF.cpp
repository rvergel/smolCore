// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsmolRF__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsmolRF::VsmolRF(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsmolRF__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , wEnable{vlSymsp->TOP.wEnable}
    , rEnable1{vlSymsp->TOP.rEnable1}
    , rEnable2{vlSymsp->TOP.rEnable2}
    , wAddr{vlSymsp->TOP.wAddr}
    , rAddr1{vlSymsp->TOP.rAddr1}
    , rAddr2{vlSymsp->TOP.rAddr2}
    , wData{vlSymsp->TOP.wData}
    , rData1{vlSymsp->TOP.rData1}
    , rData2{vlSymsp->TOP.rData2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsmolRF::VsmolRF(const char* _vcname__)
    : VsmolRF(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsmolRF::~VsmolRF() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsmolRF___024root___eval_debug_assertions(VsmolRF___024root* vlSelf);
#endif  // VL_DEBUG
void VsmolRF___024root___eval_static(VsmolRF___024root* vlSelf);
void VsmolRF___024root___eval_initial(VsmolRF___024root* vlSelf);
void VsmolRF___024root___eval_settle(VsmolRF___024root* vlSelf);
void VsmolRF___024root___eval(VsmolRF___024root* vlSelf);

void VsmolRF::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsmolRF::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsmolRF___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsmolRF___024root___eval_static(&(vlSymsp->TOP));
        VsmolRF___024root___eval_initial(&(vlSymsp->TOP));
        VsmolRF___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsmolRF___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsmolRF::eventsPending() { return false; }

uint64_t VsmolRF::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsmolRF::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsmolRF___024root___eval_final(VsmolRF___024root* vlSelf);

VL_ATTR_COLD void VsmolRF::final() {
    VsmolRF___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsmolRF::hierName() const { return vlSymsp->name(); }
const char* VsmolRF::modelName() const { return "VsmolRF"; }
unsigned VsmolRF::threads() const { return 1; }
void VsmolRF::prepareClone() const { contextp()->prepareClone(); }
void VsmolRF::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsmolRF::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsmolRF___024root__trace_decl_types(VerilatedVcd* tracep);

void VsmolRF___024root__trace_init_top(VsmolRF___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsmolRF___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolRF___024root*>(voidSelf);
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsmolRF___024root__trace_decl_types(tracep);
    VsmolRF___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolRF___024root__trace_register(VsmolRF___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsmolRF::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsmolRF::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsmolRF___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
