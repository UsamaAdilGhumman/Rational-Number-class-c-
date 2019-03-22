#include"Rational.h"
Rational::Rational()
{
	this->p = 0;
	this->q = 0;
}
Rational::Rational(int p, int q)
{
	setP(p);
	setQ(q);
}
void Rational::setP(int p)
{
	this->p = p;
}
void Rational::setQ(int q)
{
	this->q = q;
}
int Rational::getP() const
{
	return this->p;
}
int Rational::getQ() const
{
	return this->q;
}
void Rational::Display() const
{
	cout << p << "/" << q << endl;
}
