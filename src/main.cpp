#include "fraction.h"
#include <iostream>

using namespace std;

int main(int, char**)
{
	while(true)
	{
		double value;
		Fraction one;
		Fraction two;

		cin.clear();
		cout << "enter the first numerator: ";
		cin >> value;
		one.setNumerator(value);
		cout << "enter the first denominator: ";
		cin >> value;
		one.setDenominator(value);
		cout << "enter the second numerator: ";
		cin >> value;
		two.setNumerator(value);
		cout << "enter the second denominator: ";
		cin >> value;
		two.setDenominator(value);

		if (one.getDenominator() == 0 || two.getDenominator() == 0)
			cout << "you have entered zero for one denominator, please try again" << endl;
		else if (cin.fail())
			cout << "you have entered a wrong value, please try again" << endl;
		else
		{
			Fraction result = one.add(two);
			cout << one.toString() << " + " << two.toString() << " = " << result.toString() << endl;
			return 0;
		}
	}
}