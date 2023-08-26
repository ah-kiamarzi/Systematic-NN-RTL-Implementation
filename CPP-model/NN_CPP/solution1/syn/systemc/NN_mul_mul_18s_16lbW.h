// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __NN_mul_mul_18s_16lbW__HH__
#define __NN_mul_mul_18s_16lbW__HH__
#include "ACMP_smul_su.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(NN_mul_mul_18s_16lbW) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_smul_su<ID, 1, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_smul_su_U;

    SC_CTOR(NN_mul_mul_18s_16lbW):  ACMP_smul_su_U ("ACMP_smul_su_U") {
        ACMP_smul_su_U.din0(din0);
        ACMP_smul_su_U.din1(din1);
        ACMP_smul_su_U.dout(dout);

    }

};

#endif //
