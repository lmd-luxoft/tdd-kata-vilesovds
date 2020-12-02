#include "pch.h"
#include "TestFixtureWithParam.h"

INSTANTIATE_TEST_CASE_P(PositiveSet, TestFixtureWithParam,
	::testing::Values(
		Param("0,1,2" , 3), 
		Param("0,0,0", 0),
		Param("1", 1),
		Param("1,2", 3),
		Param("", 0),
		Param("1,2,3,4,5,6", 21),
		Param("1\n,2,3", 6),
		Param("//;\n1;2", 3)
		));

INSTANTIATE_TEST_CASE_P(NegativeSet, TestFixtureWithParam,
	::testing::Values(
		Param("abc", -1),
		Param("a,1,2", -1),
		Param("1,2,a", -1),
		Param("1 2", -1),
		Param("1,\n", -1),
		Param("//;1;2", -1)
	));
