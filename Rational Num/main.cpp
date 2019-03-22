#include"Rational.h"
int main()
{
	Rational R1, R2;
	R1.setP(12);
	R1.setQ(2);
	R1.Display();
	R2.setP(3);
	R2.setQ(4);
	R2.Display();
	Rational R3, R4;
	R3 = R2;
	R3.Display();
	R4 = R1;
	R4.Display();
	R2 = R1*R3;
	R2.Display();
	R2 = R3 + R1;
	R2.Display();
	R2 = R3 - R1;
	R2.Display();
	R2 = R3 / R1;
	R2.Display();
	Rational R8, R5(R4), R6(R2), R7(R1);
	R8.Display();
	R5.Display();
	R6.Display();
	R7.Display();
	    R8 = R4++;
		R5  = ++R5;
		R6 =  --R6;
		R7 = R7--;
		R8.Display();
		R5.Display();
		R6.Display();
		R7.Display();
	return 0;
}