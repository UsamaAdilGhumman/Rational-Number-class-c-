#include<iostream>
using namespace std;
class Rational
{
	int p, q;
public:
	Rational();
	Rational(int, int);
	void setP(int);
	void setQ(int);
	int getP() const;
	int getQ() const;
	Rational operator*(const Rational &R)
	{
		Rational R1;
		R1.p = p*R.p;
		R1.q = q*R.q;
		return R1;
	}
	Rational operator+(const Rational &R)
	{
		Rational R1;
		R1.p = p + R.p;
		R1.q = q + R.q;
		return R1;
	}
	Rational operator-(const Rational &R)
	{
		Rational R1;
		R1.p = p - R.p;
		R1.q = q - R.q;
		return R1;
	}
	Rational operator/(const Rational &R)
	{
		Rational R1;
		R1.p = p / R.p;
		R1.q = q / R.q;
		return R1;
	}
	void operator=(const Rational &R)
	{
		p = R.p;
		q = R.q;
	}
	Rational operator++()
	{
		Rational Temp;
		Temp.p = p++;
		Temp.q = q++;
		return Temp;
	}
	Rational operator++(int)
	{
		Rational Temp;
		Temp.p = ++p;
		Temp.q = ++q;
		return Temp;
	}
	Rational operator--()
	{
		Rational Temp;
		Temp.p = p--;
		Temp.q = q--;
		return Temp;
	}
	Rational operator--(int)
	{
		Rational Temp;
		Temp.p = --p;
		Temp.q = --q;
		return Temp;
	}
	void Display() const;
};