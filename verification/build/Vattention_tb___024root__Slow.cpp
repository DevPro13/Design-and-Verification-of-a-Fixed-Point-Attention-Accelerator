// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vattention_tb.h for the primary calling header

#include "Vattention_tb__pch.h"

// Parameter definitions for Vattention_tb___024root
constexpr VlUnpacked<SData/*15:0*/, 76> Vattention_tb___024root::attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE;


void Vattention_tb___024root___ctor_var_reset(Vattention_tb___024root* vlSelf);

Vattention_tb___024root::Vattention_tb___024root(Vattention_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vattention_tb___024root___ctor_var_reset(this);
}

void Vattention_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vattention_tb___024root::~Vattention_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
