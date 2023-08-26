`timescale 1ns / 1ps
module top_test;

	reg clk;
	reg reset;
	reg [17:0] U0;
	reg [17:0] U1;
	reg [17:0] U2;
	wire [17:0] Y0;
	wire [17:0] Y1;

	top uut (
		.clk(clk), 
		.reset(reset), 
		.U0(U0), 
		.U1(U1), 
		.U2(U2), 
		.Y0(Y0), 
		.Y1(Y1)
	);

	initial begin
		clk = 0;
		// Wait 100 ns for global reset to finish
		reset = 1;
		U0 = 18'b000000001001100011;
		U1 = 18'b000000010000011110;
		U2 = 18'b000000110101110011;
		#100;
		reset = 0;
		#20;
		U0 = 0;
		U1 = 0;
		U2 = 0;

		// Add stimulus here

	end

	always
	begin
		#10;
		clk = !clk;
	end
      
endmodule

