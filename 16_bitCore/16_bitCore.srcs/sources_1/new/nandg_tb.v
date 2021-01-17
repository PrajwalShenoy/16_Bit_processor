`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 13.01.2020 01:38:56
// Design Name: 
// Module Name: nandg_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module nandg_tb;
reg x, y;
wire out;
nandg nand1(out, x, y);
initial begin
x=1'b0;y=1'b0;#5
x=1'b0;y=1'b1;#5
x=1'b1;y=1'b0;#5
x=1'b1;y=1'b1;#5
$finish;
end
endmodule


//module andg_tb;
//reg x,y;
//wire out;
//andg and1(out,x,y);
//initial begin
//x=1'b0;y=1'b0;#5
//x=1'b0;y=1'b1;#5
//x=1'b1;y=1'b0;#5
//x=1'b1;y=1'b1;#5
//$finish;
//end
//endmodule