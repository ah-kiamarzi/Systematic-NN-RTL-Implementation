############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project sc_NN
set_top my_NN
add_files sc_NN/sc_NN.cpp
add_files -tb sc_NN/stim.h
add_files -tb sc_NN/sc_NN_test.cpp
add_files -tb sc_NN/mon.h
open_solution "solution1"
set_part {xc7z100ffg1156-1} -tool vivado
create_clock -period 100 -name default
#source "./sc_NN/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
