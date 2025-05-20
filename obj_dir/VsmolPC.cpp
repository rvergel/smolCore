// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsmolPC__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsmolPC::VsmolPC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsmolPC__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , next_pc{vlSymsp->TOP.next_pc}
    , pc{vlSymsp->TOP.pc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsmolPC::VsmolPC(const char* _vcname__)
    : VsmolPC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsmolPC::~VsmolPC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsmolPC___024root___eval_debug_assertions(VsmolPC___024root* vlSelf);
#endif  // VL_DEBUG
void VsmolPC___024root___eval_static(VsmolPC___024root* vlSelf);
void VsmolPC___024root___eval_initial(VsmolPC___024root* vlSelf);
void VsmolPC___024root___eval_settle(VsmolPC___024root* vlSelf);
void VsmolPC___024root___eval(VsmolPC___024root* vlSelf);

void VsmolPC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsmolPC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsmolPC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsmolPC___024root___eval_static(&(vlSymsp->TOP));
        VsmolPC___024root___eval_initial(&(vlSymsp->TOP));
        VsmolPC___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsmolPC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsmolPC::eventsPending() { return false; }

uint64_t VsmolPC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsmolPC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsmolPC___024root___eval_final(VsmolPC___024root* vlSelf);

VL_ATTR_COLD void VsmolPC::final() {
    VsmolPC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsmolPC::hierName() const { return vlSymsp->name(); }
const char* VsmolPC::modelName() const { return "VsmolPC"; }
unsigned VsmolPC::threads() const { return 1; }
void VsmolPC::prepareClone() const { contextp()->prepareClone(); }
void VsmolPC::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsmolPC::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsmolPC___024root__trace_decl_types(VerilatedVcd* tracep);

void VsmolPC___024root__trace_init_top(VsmolPC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsmolPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolPC___024root*>(voidSelf);
    VsmolPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsmolPC___024root__trace_decl_types(tracep);
    VsmolPC___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolPC___024root__trace_register(VsmolPC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsmolPC::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsmolPC::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsmolPC___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
