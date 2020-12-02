#include "pch.h"
#include "Calculator.h"
#include "TestFixture.h"
#include "TestFixtureWithParam.h"


TEST_P(TestFixtureWithParam, Sets)
{
	const char* nums = GetParam().expression;
	int expected = GetParam().expected;
	// act
	int actual = calc->Add(nums);
	//assert
	ASSERT_EQ(actual, expected);
}
/*
TEST_F(TestFixture, PositiveUsual) {
	// arrange
	char* nums = "0,1,2";
	int expected = 3;
	// act
	int actual = calc->Add(nums);
	//assert
	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, PositiveZero) {
	// arrange
	char* nums = "0,0,0";
	int expected = 0;
	// act
	int actual = calc->Add(nums);
	//assert
	ASSERT_EQ(actual, expected);
}


TEST_F(TestFixture, PositiveOne) {
	// arrange
	char* nums = "1";
	int expected = 1;
	// act
	int actual = calc->Add(nums);
	//assert

	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, PositiveTwo) {
	// arrange
	char* nums = "1,2";
	int expected = 3;
	// act
	int actual = calc->Add(nums);
	//assert

	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, PositiveEmpty) {
	// arrange
	char* nums = "";
	int expected = 0;
	// act
	int actual = calc->Add(nums);
	//assert

	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, NegativeNotNumAll) {
	// arrange
	char* nums = "abc";
	int expected = -1;
	// act
	int actual = calc->Add(nums);
	//assert

	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, NegativeNotNumOne) {
	// arrange
	char* nums = "a,1,2";
	int expected = -1;
	// act
	int actual = calc->Add(nums);
	//assert

	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, NegativeNotNumOneAtEnd) {
	// arrange
	char* nums = "1,2,a";
	int expected = -1;
	// act
	int actual = calc->Add(nums);
	//assert
	ASSERT_EQ(actual, -1);
}

TEST_F(TestFixture, NegativeWrongSeparator) {
	// arrange
	char* nums = "1 2";
	int expected = -1;
	// act
	int actual = calc->Add(nums);
	//assert

	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, PositiveFewCountOfNumbers) {
	// arrange
	char* nums = "1,2,3,4,5,6";
	int expected = 21;
	// act
	int actual = calc->Add(nums);
	//assert
	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, PositiveNewLineSeparator) {
	// arrange
	char* nums = "1\n,2,3";
	int expected = 6;
	// act
	int actual = calc->Add(nums);
	//assert
	ASSERT_EQ(actual, expected);
}


TEST_F(TestFixture, NegativeNewLineSeparator) {
	// arrange
	char* nums = "1,\n";
	int expected = -1;
	// act
	int actual = calc->Add(nums);
	//assert
	ASSERT_EQ(actual, expected);
}
TEST_F(TestFixture, PositiveSetSeparator) {
	// arrange
	char* nums = "//;\n1;2";
	int expected = 3;
	// act
	int actual = calc->Add(nums);
	//assert

	ASSERT_EQ(actual, expected);
}

TEST_F(TestFixture, NegativeSetSeparatorNoNeLine) {
	// arrange
	char* nums = "//;1;2";
	int expected = -1;
	// act
	int actual = calc->Add(nums);
	//assert

	ASSERT_EQ(actual, expected);
}
*/