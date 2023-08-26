// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _my_NN_out_func_HH_
#define _my_NN_out_func_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "my_NN_mac_muladd_fYi.h"
#include "my_NN_mul_mul_18sg8j.h"

namespace ap_rtl {

struct my_NN_out_func : public sc_module {
    // Port declarations 16
    sc_out< sc_lv<18> > Y0;
    sc_out< sc_logic > Y0_ap_vld;
    sc_out< sc_lv<18> > Y1;
    sc_out< sc_logic > Y1_ap_vld;
    sc_in< sc_lv<18> > x0;
    sc_in< sc_lv<18> > x1;
    sc_in< sc_lv<18> > x2;
    sc_in< sc_lv<18> > x3;
    sc_in< sc_lv<18> > my_NN_c_0_V;
    sc_in< sc_lv<18> > my_NN_c_1_V;
    sc_in< sc_lv<18> > my_NN_c_2_V;
    sc_in< sc_lv<18> > my_NN_c_3_V;
    sc_in< sc_lv<18> > my_NN_c_4_V;
    sc_in< sc_lv<18> > my_NN_c_5_V;
    sc_in< sc_lv<18> > my_NN_c_6_V;
    sc_in< sc_lv<18> > my_NN_c_7_V;


    // Module declarations
    my_NN_out_func(sc_module_name name);
    SC_HAS_PROCESS(my_NN_out_func);

    ~my_NN_out_func();

    sc_trace_file* mVcdFile;

    my_NN_mac_muladd_fYi<1,1,18,18,30,30>* my_NN_mac_muladd_fYi_U263;
    my_NN_mul_mul_18sg8j<1,1,18,18,30>* my_NN_mul_mul_18sg8j_U264;
    my_NN_mac_muladd_fYi<1,1,18,18,30,30>* my_NN_mac_muladd_fYi_U265;
    my_NN_mac_muladd_fYi<1,1,18,18,30,30>* my_NN_mac_muladd_fYi_U266;
    my_NN_mac_muladd_fYi<1,1,18,18,30,30>* my_NN_mac_muladd_fYi_U267;
    my_NN_mul_mul_18sg8j<1,1,18,18,30>* my_NN_mul_mul_18sg8j_U268;
    my_NN_mac_muladd_fYi<1,1,18,18,30,30>* my_NN_mac_muladd_fYi_U269;
    my_NN_mac_muladd_fYi<1,1,18,18,30,30>* my_NN_mac_muladd_fYi_U270;
    sc_signal< sc_lv<30> > grp_fu_688_p3;
    sc_signal< sc_lv<30> > grp_fu_719_p3;
    sc_signal< sc_lv<30> > p_Val2_1_fu_673_p2;
    sc_signal< sc_lv<30> > grp_fu_666_p3;
    sc_signal< sc_lv<30> > grp_fu_680_p3;
    sc_signal< sc_lv<30> > p_Val2_8_fu_704_p2;
    sc_signal< sc_lv<30> > grp_fu_697_p3;
    sc_signal< sc_lv<30> > grp_fu_711_p3;
    static const bool ap_const_boolean_1;
    static const sc_logic ap_const_logic_0;
    static const sc_logic ap_const_logic_1;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_1D;
    // Thread declarations
    void thread_Y0();
    void thread_Y0_ap_vld();
    void thread_Y1();
    void thread_Y1_ap_vld();
};

}

using namespace ap_rtl;

#endif