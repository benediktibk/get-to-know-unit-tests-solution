#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
}

Fraction::Fraction(double /*numerator*/, double /*denominator*/)
{
}

double Fraction::getValue() const
{
	return 0;
}

void Fraction::setNumerator(double /*value*/)
{
}

double Fraction::getNumerator() const
{
	return 0;
}

void Fraction::setDenominator(double /*value*/)
{
}

double Fraction::getDenominator() const
{
	return 0;
}

bool Fraction::isPositive() const
{
	return false;
}

Fraction Fraction::add(const Fraction &/*fraction*/) const
{
	return Fraction();
}

Fraction Fraction::subtract(const Fraction &/*fraction*/) const
{
	return Fraction();
}

Fraction Fraction::multiply(const Fraction &/*fraction*/) const
{
	return Fraction();
}

Fraction Fraction::divide(const Fraction &/*fraction*/) const
{
	return Fraction();
}

string Fraction::toString() const
{
	return string();
}