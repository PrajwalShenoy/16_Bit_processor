`timescale 1ns / 1ps



module cpu_tb;
reg [15:0] instruction,inM;
reg rst,clk;
wire [15:0] outM,PCout,addrM;
wire WriteM;



cpu c1(outM,PCout,WriteM,addrM,instruction,inM,rst,clk);

initial begin
clk = 1'b0;
forever
#50 clk =~ clk;
end

initial begin
#100;
inM = 16'd0;instruction = 16'b0000000000000010;#100 // reset
//inM = 16'd0;instruction = 16'b0000000000000010;rst = 1'b1;#100 // reset 
inM = 16'd0;instruction = 16'b0000000000101101;#100 // a=45
inM = 16'd0;instruction = 16'b1110110000010000;#100 // d=a
inM = 16'd0;instruction = 16'b0000000000110111;#100 // a=55
inM = 16'd0;instruction = 16'b1110010011100000;#100; // a=d-a
//inM = 16'd0;instruction = 16'b0111111111111111;rst = 1'b0;#100 // a=32767
//inM = 16'd0;instruction = 16'b1110110000010000;rst = 1'b0;#100 // d=a
//inM = 16'd0;instruction = 16'b0111111111111111;rst = 1'b0;#100 // a=32767
//inM = 16'd0;instruction = 16'b1110000010001000;rst = 1'b0;#100 // m=d+a
//inM = 16'd0;instruction = 16'b1110001100001000;rst = 1'b0;#100 // a=d
$finish;
end

initial begin
rst = 1'b1; #200
rst = 1'b0; 
end

endmodule

