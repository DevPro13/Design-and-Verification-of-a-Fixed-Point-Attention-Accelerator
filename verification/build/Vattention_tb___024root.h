// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vattention_tb.h for the primary calling header

#ifndef VERILATED_VATTENTION_TB___024ROOT_H_
#define VERILATED_VATTENTION_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vattention_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vattention_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ attention_tb__DOT__clk;
    CData/*0:0*/ attention_tb__DOT__rst;
    CData/*0:0*/ attention_tb__DOT__done;
    CData/*0:0*/ attention_tb__DOT__dut__DOT__data_ready;
    CData/*3:0*/ attention_tb__DOT__dut__DOT__state;
    CData/*3:0*/ attention_tb__DOT__dut__DOT__nxtState;
    CData/*1:0*/ attention_tb__DOT__dut__DOT__selectMux3;
    CData/*2:0*/ attention_tb__DOT__dut__DOT__selectMux5;
    CData/*2:0*/ attention_tb__DOT__dut__DOT__demuxSelect5;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__clk__v1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__attention_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__attention_tb__DOT__rst__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
    SData/*15:0*/ attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
    SData/*15:0*/ attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
    SData/*15:0*/ attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
    IData/*31:0*/ attention_tb__DOT__file;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__resultConversionBlock__DOT__i;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__resultConversionBlock__DOT__j;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__key_transpose_calc__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__key_transpose_calc__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__softmax_calc__DOT__address;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum;
    IData/*31:0*/ attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*15:0*/, 12> attention_tb__DOT__context_vector;
    VlUnpacked<SData/*15:0*/, 12> attention_tb__DOT__dut__DOT__X;
    VlUnpacked<SData/*15:0*/, 9> attention_tb__DOT__dut__DOT__Wq;
    VlUnpacked<SData/*15:0*/, 9> attention_tb__DOT__dut__DOT__Wk;
    VlUnpacked<SData/*15:0*/, 9> attention_tb__DOT__dut__DOT__Wv;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 4> attention_tb__DOT__dut__DOT__embedding_X;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 3> attention_tb__DOT__dut__DOT__Qw;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 3> attention_tb__DOT__dut__DOT__Kw;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 3> attention_tb__DOT__dut__DOT__Vw;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 4> attention_tb__DOT__dut__DOT__Q_vector;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 4> attention_tb__DOT__dut__DOT__K_vector;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 3> attention_tb__DOT__dut__DOT__K_vector_transpose;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 4> attention_tb__DOT__dut__DOT__V_vector;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> attention_tb__DOT__dut__DOT__attention_score;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> attention_tb__DOT__dut__DOT__scaled_attention_score;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> attention_tb__DOT__dut__DOT__attention_weight_vector;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 4> attention_tb__DOT__dut__DOT__contextual_embedding_vector;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> attention_tb__DOT__dut__DOT__matA;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> attention_tb__DOT__dut__DOT__matB;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> attention_tb__DOT__dut__DOT__MatMultResult;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vattention_tb__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<SData/*15:0*/, 76> attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE = {{
        0x0100U, 0x00e8U, 0x00d2U, 0x00beU, 0x00acU, 0x009bU, 0x008cU, 0x007fU,
        0x0073U, 0x0068U, 0x005eU, 0x0055U, 0x004dU, 0x0046U, 0x003fU, 0x0039U,
        0x0034U, 0x002fU, 0x002aU, 0x0026U, 0x0023U, 0x001fU, 0x001cU, 0x001aU,
        0x0017U, 0x0015U, 0x0013U, 0x0011U, 0x0010U, 0x000eU, 0x000dU, 0x000cU,
        0x000aU, 9U, 9U, 8U, 7U, 6U, 6U, 5U,
        5U, 4U, 4U, 3U, 3U, 3U, 3U, 2U,
        2U, 2U, 2U, 2U, 1U, 1U, 1U, 1U,
        1U, 1U, 1U, 1U, 1U, 1U, 1U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U
    }};

    // CONSTRUCTORS
    Vattention_tb___024root(Vattention_tb__Syms* symsp, const char* namep);
    ~Vattention_tb___024root();
    VL_UNCOPYABLE(Vattention_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
