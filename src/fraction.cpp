#include "fraction.h"
#include <sstream>

using namespace std;

Fraction::Fraction() :
	m_numerator(0),
	m_denominator(0)
{
}

Fraction::Fraction(double numerator, double denominator) :
	m_numerator(numerator),
	m_denominator(denominator)
{
}

double Fraction::getValue() const
{
	if (m_numerator == 0 || m_denominator == 0)
		return 0;

	return m_numerator / m_denominator;
}

void Fraction::setNumerator(double value)
{
	m_numerator = value;
}

double Fraction::getNumerator() const
{
	return m_numerator;
}

void Fraction::setDenominator(double value)
{
	m_denominator = value;
}

double Fraction::getDenominator() const
{
	return m_denominator;
}

bool Fraction::isPositive() const
{
	return m_numerator * m_denominator >= 0;
}

Fraction Fraction::add(const Fraction &fraction) const
{
	Fraction result;
	double commonDivisor = getDenominator()*fraction.getDenominator();
	result.setDenominator(commonDivisor);
	result.setNumerator(getNumerator()*fraction.getDenominator() + fraction.getNumerator()*getDenominator());
	return result;
}

Fraction Fraction::subtract(const Fraction &fraction) const
{
	Fraction result;
	double commonDivisor = getDenominator()*fraction.getDenominator();
	result.setDenominator(commonDivisor);
	result.setNumerator(getNumerator()*fraction.getDenominator() - fraction.getNumerator()*getDenominator());
	return result;
}

Fraction Fraction::multiply(const Fraction &fraction) const
{
	return Fraction(getNumerator()*fraction.getNumerator(), getDenominator()*fraction.getDenominator());
}

Fraction Fraction::divide(const Fraction &fraction) const
{
	return Fraction(getNumerator()*fraction.getDenominator(), getDenominator()*fraction.getNumerator());
}

string Fraction::toString() const
{
	stringstream stream;
	stream << getNumerator() << "/" << getDenominator();
	return stream.str();
}