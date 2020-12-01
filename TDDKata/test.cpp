#include "pch.h"
#include "Calculator.h"
TEST(TDDKata, PositiveUsual) {
	// arrange
	Calculator calc;
	char* nums = "0,1,2";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, 3);
}

TEST(TDDKata, PositiveZero) {
	// arrange
	Calculator calc;
	char* nums = "0,0,0";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, 0);
}


TEST(TDDKata, PositiveOne) {
	// arrange
	Calculator calc;
	char* nums = "1";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, 1);
}

TEST(TDDKata, PositiveTwo) {
	// arrange
	Calculator calc;
	char* nums = "1,2";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, 3);
}

TEST(TDDKata, PositiveEmpty) {
	// arrange
	Calculator calc;
	char* nums = "";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, 0);
}

TEST(TDDKata, NegativeNotNumAll) {
	// arrange
	Calculator calc;
	char* nums = "abc";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, -1);
}

TEST(TDDKata, NegativeNotNumOne) {
	// arrange
	Calculator calc;
	char* nums = "a,1,2";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, -1);
}

TEST(TDDKata, NegativeNotNumOneAtEnd) {
	// arrange
	Calculator calc;
	char* nums = "1,2,a";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, -1);
}

TEST(TDDKata, NegativeWrongSeparator) {
	// arrange
	Calculator calc;
	char* nums = "1 2";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, -1);
}



TEST(TDDKata, PositiveFewCountOfNumbers) {
	// arrange
	Calculator calc;
	char* nums = "1,2,3,4,5,6";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, 21);
}

TEST(TDDKata, PositiveNewLineSeparator) {
	// arrange
	Calculator calc;
	char* nums = "1\n,2,3";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, 6);
}

TEST(TDDKata, NegativeNewLineSeparator) {
	// arrange
	Calculator calc;
	char* nums = "1,\n";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, -1);
}

TEST(TDDKata, PositiveSetSeparator) {
	// arrange
	Calculator calc;
	char* nums = "//;\n1;2";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, 3);
}

TEST(TDDKata, NegativeSetSeparatorNoNeLine) {
	// arrange
	Calculator calc;
	char* nums = "//;1;2";
	// act
	int res = calc.Add(nums);
	//assert

	ASSERT_EQ(res, -1);
}
