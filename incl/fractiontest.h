#ifndef FRACTIONTEST_H
#define FRACTIONTEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class FractionTest :
		public CPPUNIT_NS::TestFixture
{
	 CPPUNIT_TEST_SUITE(FractionTest);
	 CPPUNIT_TEST(constructor_default_valueIs0);
	 CPPUNIT_TEST(constructor_4AsNumerator_numeratorIs4);
	 CPPUNIT_TEST(constructor_5AsDenumerator_denumeratorIs5);
	 CPPUNIT_TEST(getValue_6DividedBy2_3);
	 CPPUNIT_TEST(isPositive_numeratorAndDenumeratorPositive_true);
	 CPPUNIT_TEST(isPositive_numeratorAndDenumeratorNegative_true);
	 CPPUNIT_TEST(isPositive_numeratorPositiveAndDenumeratorNegative_false);
	 CPPUNIT_TEST(isPositive_numeratorNegativeAndDenumeratorPositive_false);
	 CPPUNIT_TEST(add_6DividedBy2To9DividedBy3_6);
	 CPPUNIT_TEST(subtract_9DividedBy3From8DividedBy2_1);
	 CPPUNIT_TEST(multiply_10DividedBy3With3DividedBy5_2);
	 CPPUNIT_TEST(divide_10DividedBy3With5DividedBy3_2);
	 CPPUNIT_TEST(setNumerator_5_numeratorIs5);
	 CPPUNIT_TEST(setDenominator_3_denominatorIs3);
	 CPPUNIT_TEST(toString_5DividedBy3_5_3);
	 CPPUNIT_TEST_SUITE_END();

private:
	 void constructor_default_valueIs0();
	 void constructor_4AsNumerator_numeratorIs4();
	 void constructor_5AsDenumerator_denumeratorIs5();
	 void getValue_6DividedBy2_3();
	 void isPositive_numeratorAndDenumeratorPositive_true();
	 void isPositive_numeratorAndDenumeratorNegative_true();
	 void isPositive_numeratorPositiveAndDenumeratorNegative_false();
	 void isPositive_numeratorNegativeAndDenumeratorPositive_false();
	 void add_6DividedBy2To9DividedBy3_6();
	 void subtract_9DividedBy3From8DividedBy2_1();
	 void multiply_10DividedBy3With3DividedBy5_2();
	 void divide_10DividedBy3With5DividedBy3_2();
	 void setNumerator_5_numeratorIs5();
	 void setDenominator_3_denominatorIs3();
	 void toString_5DividedBy3_5_3();
};

#endif
