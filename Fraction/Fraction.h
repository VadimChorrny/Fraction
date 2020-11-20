#pragma once
class Fraction
{
public:
	Fraction() : num(0), denom(1)
	{}
	void print();


	void setDenom(int denom);
	void setNum(int num);
	const int getDenom() const;
	Fraction setMult(const Fraction& two);
	Fraction setDivision(const Fraction& two); // Need development
	Fraction setPlus(const Fraction& two);
	Fraction setMinus(const Fraction& two);
	Fraction(int num, int denom);
	Fraction(int num);

private:
	int num, denom;
};