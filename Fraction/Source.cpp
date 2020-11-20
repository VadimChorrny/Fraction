#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;
int main() {
	setlocale(LC_ALL, " ");
	Fraction one;
	int num1, num2, action = 0;
	cout << "Enter first number:\t";
	cin >> num1;
	cout << "Enter second number:\t";
	cin >> num2;
	one.setNum(num1);
	one.setDenom(num2);
	one.print();
	return 0;
}