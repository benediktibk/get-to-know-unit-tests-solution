#include "fractiontest.h"
#include "fraction.h"

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(FractionTest);

void FractionTest::constructor_default_valueIs0()
{
	Fraction fraction;

	CPPUNIT_ASSERT_DOUBLES_EQUAL(0, fraction.getValue(), 0.00001);
}

void FractionTest::constructor_4AsNumerator_numeratorIs4()
{
	Fraction fraction(4, 5);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(4, fraction.getNumerator(), 0.00001);
}

void FractionTest::constructor_5AsDenumerator_denumeratorIs5()
{
	Fraction fraction(4, 5);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(5, fraction.getDenominator(), 0.00001);
}

void FractionTest::getValue_6DividedBy2_3()
{
	Fraction fraction(6, 2);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(3, fraction.getValue(), 0.00001);
}

void FractionTest::isPositive_numeratorAndDenumeratorPositive_true()
{
	Fraction fraction(6, 2);

	CPPUNIT_ASSERT(fraction.isPositive());
}

void FractionTest::isPositive_numeratorAndDenumeratorNegative_true()
{
	Fraction fraction(-6, -2);

	CPPUNIT_ASSERT(fraction.isPositive());
}

void FractionTest::isPositive_numeratorPositiveAndDenumeratorNegative_false()
{
	Fraction fraction(6, -2);

	CPPUNIT_ASSERT(!fraction.isPositive());
}

void FractionTest::isPositive_numeratorNegativeAndDenumeratorPositive_false()
{
	Fraction fraction(-6, 2);

	CPPUNIT_ASSERT(!fraction.isPositive());
}

void FractionTest::add_6DividedBy2To9DividedBy3_6()
{
	Fraction one(6, 2);
	Fraction two(9, 3);

	Fraction result = one.add(two);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(6, result.getValue(), 0.00001);
}

void FractionTest::subtract_9DividedBy3From8DividedBy2_1()
{
	Fraction one(8, 2);
	Fraction two(9, 3);

	Fraction result = one.subtract(two);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(1, result.getValue(), 0.00001);
}

void FractionTest::multiply_10DividedBy3With3DividedBy5_2()
{
	Fraction one(10, 3);
	Fraction two(3, 5);

	Fraction result = one.multiply(two);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(2, result.getValue(), 0.00001);
}

void FractionTest::divide_10DividedBy3With5DividedBy3_2()
{
	Fraction one(10, 3);
	Fraction two(5, 3);

	Fraction result = one.divide(two);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(2, result.getValue(), 0.00001);
}

void FractionTest::setNumerator_5_numeratorIs5()
{
	Fraction fraction;

	fraction.setNumerator(5);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(5, fraction.getNumerator(), 0.00001);
}

void FractionTest::setDenominator_3_denominatorIs3()
{
	Fraction fraction;

	fraction.setDenominator(3);

	CPPUNIT_ASSERT_DOUBLES_EQUAL(3, fraction.getDenominator(), 0.00001);
}

void FractionTest::toString_5DividedBy3_5_3()
{
	Fraction fraction(5, 3);

	CPPUNIT_ASSERT_EQUAL(string("5/3"), fraction.toString());
}