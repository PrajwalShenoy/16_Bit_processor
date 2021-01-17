`timescale 1ns / 1ps

module nandg(out, x, y);
input x, y;
output out;
wire p, vdd, gnd;
assign vdd = 1'b1;
assign gnd = 1'b0;
pmos p1(out, vdd, x);
pmos p2(out, vdd, y);
nmos n1(out, p, x);
nmos n2(p, gnd, y);
endmodule


//module andg(out,x,y);
//input x,y ;
//output out;
//wire p,q,vdd,gnd;
//assign vdd=1'b1;
//assign gnd=1'b0;
//pmos p1(q,vdd,x);
//pmos p2(q,vdd,y);
//pmos p3(out,vdd,q);
//nmos n1(q,p,x);
//nmos n2(p,gnd,y);
//nmos n3(out,gnd,q);
//endmodule