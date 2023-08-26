############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project NN_CPP
set_top NN
add_files NN_CPP/NN.cpp
add_files -tb NN_CPP/NN_test.cpp
open_solution "solution1"
set_part {xc7z100ffg1156-1}
create_clock -period 200 -name default
source "./NN_CPP/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
