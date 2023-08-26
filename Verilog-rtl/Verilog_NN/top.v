`timescale 1ns / 1ps
module top(
    input clk,
    input reset,
    input [17:0] U0,//Q6.12
    input [17:0] U1,
    input [17:0] U2,
    output [17:0] Y0,
    output [17:0] Y1
    );


wire [17:0] temp0,temp1,temp2,temp3;
reg [1:0] n;
reg [17:0] x0,x1,x2,x3;
reg [17:0] tanh[127:0];
reg [17:0] b[11:0];
reg [17:0] c[7:0];
reg [17:0] w[63:0];

wire [18*2-1:0] m00,m01,m02,m03;
wire [18*2-1:0] m10,m11,m12,m13;
wire [18*2-1:0] m20,m21,m22,m23;
wire [18*2-1:0] m30,m31,m32,m33;

wire [18*2-1:0] mx00,mx01,mx02;
wire [18*2-1:0] mx10,mx11,mx12;
wire [18*2-1:0] mx20,mx21,mx22;
wire [18*2-1:0] mx30,mx31,mx32;

wire [18*2-1:0] my00,my01,my02,my03;
wire [18*2-1:0] my10,my11,my12,my13;


initial
begin
	$readmemb("tanh.txt",tanh);
	$readmemb("b.txt",b);
	$readmemb("c.txt",c);
	$readmemb("w.txt",w);
end


assign m00 = w[n*16+0] *x0;
assign m01 = w[n*16+4] *x1;
assign m02 = w[n*16+8] *x2;
assign m03 = w[n*16+12]*x3;

assign m10 = w[n*16+1] *x0;
assign m11 = w[n*16+5] *x1;
assign m12 = w[n*16+9] *x2;
assign m13 = w[n*16+13]*x3;

assign m20 = w[n*16+2] *x0;
assign m21 = w[n*16+6] *x1;
assign m22 = w[n*16+10]*x2;
assign m23 = w[n*16+14]*x3;

assign m30 = w[n*16+3] *x0;
assign m31 = w[n*16+7] *x1;
assign m32 = w[n*16+11]*x2;
assign m33 = w[n*16+15]*x3;

assign mx30 = b[3] *U0;
assign mx31 = b[7] *U1;
assign mx32 = b[11]*U2;

assign mx20 = b[2] *U0;
assign mx21 = b[6] *U1;
assign mx22 = b[10]*U2;

assign mx10 = b[1] *U0;
assign mx11 = b[5] *U1;
assign mx12 = b[9] *U2;

assign mx00 = b[0] *U0;
assign mx01 = b[4] *U1;
assign mx02 = b[8] *U2;




assign temp0 = m00[29:12] + m01[29:12] + m02[29:12] + m03[29:12];
assign temp1 = m10[29:12] + m11[29:12] + m12[29:12] + m13[29:12];
assign temp2 = m20[29:12] + m21[29:12] + m22[29:12] + m23[29:12];
assign temp3 = m30[29:12] + m31[29:12] + m32[29:12] + m33[29:12];

always@(posedge clk)
begin
	if(reset)
	begin
		x3 <= 0;
		x2 <= 0;
		x1 <= 0;
		x0 <= 0;
		n  <= 0;
	end
	else
	begin
		if(n == 0)begin
			x0 <= mx00[29:12] + mx01[29:12] + mx02[29:12];
			x1 <= mx10[29:12] + mx11[29:12] + mx12[29:12];
			x2 <= mx20[29:12] + mx21[29:12] + mx22[29:12];
			x3 <= mx30[29:12] + mx31[29:12] + mx32[29:12];				
		end
		else
		begin
			x0 <= tanh[temp0[17:11]]+ mx00[29:12] + mx01[29:12] + mx02[29:12];
			x1 <= tanh[temp1[17:11]]+ mx10[29:12] + mx11[29:12] + mx12[29:12];
			x2 <= tanh[temp2[17:11]]+ mx20[29:12] + mx21[29:12] + mx22[29:12];
			x3 <= tanh[temp3[17:11]]+ mx30[29:12] + mx31[29:12] + mx32[29:12];
		end

		if(n == 3)begin
			n <= 0;
		end
		else
		begin
			n <= n + 1;
		end
	end
end

assign my00 = c[0]*x0;
assign my01 = c[2]*x1;
assign my02 = c[4]*x2;
assign my03 = c[6]*x3;

assign my10 = c[1]*x0;
assign my11 = c[3]*x1;
assign my12 = c[5]*x2;
assign my13 = c[7]*x3;

assign Y0 = (my00[29:12] + my01[29:12] + my02[29:12] + my03[29:12]);
assign Y1 = (my10[29:12] + my11[29:12] + my12[29:12] + my13[29:12]);

endmodule
