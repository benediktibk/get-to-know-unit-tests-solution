#ifndef FRACTION_H
#define FRACTION_H

#include <string>

class Fraction
{
public:
	Fraction();
	Fraction(double numerator, double denominator);

	double getValue() const;
	void setNumerator(double value);
	double getNumerator() const;
	void setDenominator(double value);
	double getDenominator() const;
	bool isPositive() const;
	Fraction add(const Fraction &fraction) const;
	Fraction subtract(const Fraction &fraction) const;
	Fraction multiply(const Fraction &fraction) const;
	Fraction divide(const Fraction &fraction) const;
	std::string toString() const;

private:
	double m_numerator;
	double m_denominator;
};

#endif