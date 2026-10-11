// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vattention_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vattention_tb::Vattention_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vattention_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vattention_tb::Vattention_tb(const char* _vcname__)
    : Vattention_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vattention_tb::~Vattention_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vattention_tb___024root___eval_debug_assertions(Vattention_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vattention_tb___024root___eval_static(Vattention_tb___024root* vlSelf);
void Vattention_tb___024root___eval_initial(Vattention_tb___024root* vlSelf);
void Vattention_tb___024root___eval_settle(Vattention_tb___024root* vlSelf);
void Vattention_tb___024root___eval(Vattention_tb___024root* vlSelf);

void Vattention_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vattention_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vattention_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vattention_tb___024root___eval_static(&(vlSymsp->TOP));
        Vattention_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vattention_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vattention_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vattention_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vattention_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vattention_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vattention_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vattention_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vattention_tb___024root___eval_final(Vattention_tb___024root* vlSelf);

VL_ATTR_COLD void Vattention_tb::final() {
    contextp()->executingFinal(true);
    Vattention_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vattention_tb::hierName() const { return vlSymsp->name(); }
const char* Vattention_tb::modelName() const { return "Vattention_tb"; }
unsigned Vattention_tb::threads() const { return 1; }
void Vattention_tb::prepareClone() const { contextp()->prepareClone(); }
void Vattention_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vattention_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vattention_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vattention_tb___024root__trace_init_top(Vattention_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vattention_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vattention_tb___024root*>(voidSelf);
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vattention_tb___024root__trace_decl_types(tracep);
    Vattention_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vattention_tb___024root__trace_register(Vattention_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vattention_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vattention_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 290);
    Vattention_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
