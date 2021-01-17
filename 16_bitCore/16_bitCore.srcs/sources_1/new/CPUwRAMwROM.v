`timescale 1ns / 1ps


module CPUwRAMwROM;
reg rst, clk;
wire WriteM;
wire [15:0] PCout, instruction, inM, outM, addrM; 

//module cpu(outM,PCout,WriteM,addrM,instruction,inM,rst,clk);
cpu c1(outM, PCout, WriteM, addrM,  instruction, inM,rst, clk);
//module rom(instruction, clk, pco_in);
rom rom1(instruction, clk, PCout);
//module ram(inM_o, clk_i, writeM_i, addressM_i, outM_i);
ram ram1(inM, clk, WriteM, addrM, outM);

initial begin
clk = 1'b0;
forever
#50 clk =~ clk;
end

initial begin
rst = 1'b1; #200
rst = 1'b0;
#20000;
$finish;
end

endmodule