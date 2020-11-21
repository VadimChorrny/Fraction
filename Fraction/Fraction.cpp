#include "Fraction.h"
#include <iostream>
using namespace std;

void Fraction::print() 
{
	cout << num << "*" << denom << "=" << num * denom << endl;
	cout << num << "/" << denom << "=" << num / denom << endl;
	cout << num << "+" << denom << "=" << num + denom << endl;
	cout << num << "-" << denom << "=" << num - denom << endl;
}

void Fraction::setDenom(int denom)
{
	if (denom == 0)
	{
		denom = 1;
	}
	if (denom < 0)
	{
		num = -num;
		denom = -denom;
	}
	this->denom = denom;
}

void Fraction::setNum(int num)
{
	this->num = num;
}

const int Fraction::getDenom() const
{
	return denom;
}

const int Fraction::getNum() const
{
	return num;
}

Fraction Fraction::setMult(const Fraction& two)
{
	Fraction result;
	result.num = this->num * two.num;
	result.denom = this->denom * two.denom;
	return result;
}

Fraction Fraction::setDivision(const Fraction& two)
{
	Fraction result;
	result.num = this->num / two.num;
	result.denom = this->denom / two.denom;
	return result;
}

Fraction Fraction::setPlus(const Fraction& two)
{
	Fraction result;
	result.num = (this->num * two.denom) + (two.num * this->denom);
	result.denom = (this->denom * two.denom);
	return result;
}

Fraction Fraction::setMinus(const Fraction& two)
{
	Fraction result;
	result.num = (this->num * two.denom) - (two.num * this->denom);
	result.denom = (this->denom * two.denom);
	return result;
}

Fraction Fraction::setComparison(const Fraction& two) // comparsion
{
	if ((two.num / two.denom) > (this->num / this->denom)) {
		return two;
	}
	else if ((two.num / two.denom) < (this->num / this->denom)) {
		return *this;
	}
	else {
		return 0;
	}
}


Fraction::Fraction(int num, int denom)
{
	setNum(num);
	setDenom(denom);
}

Fraction::Fraction(int num) : Fraction(num, denom = 1) {}