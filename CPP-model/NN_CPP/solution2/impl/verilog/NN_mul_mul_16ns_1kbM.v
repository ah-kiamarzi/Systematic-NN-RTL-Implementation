
`timescale 1 ns / 1 ps

  module NN_mul_mul_16ns_1kbM_DSP48_9(a, b, p);
input [16 - 1 : 0] a; // synthesis attribute keep a "true"
input signed [18 - 1 : 0] b; // synthesis attribute keep b "true"
output signed [34 - 1 : 0] p; // synthesis attribute keep p "true"

assign p = $signed ({1'b0, a}) * $signed (b);

endmodule

`timescale 1 ns / 1 ps
module NN_mul_mul_16ns_1kbM(
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



NN_mul_mul_16ns_1kbM_DSP48_9 NN_mul_mul_16ns_1kbM_DSP48_9_U(
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

