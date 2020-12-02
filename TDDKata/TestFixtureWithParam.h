#pragma once
#include "TestFixture.h"
struct Param
{
    const char * expression;
    int expected;
    Param(const char * expression, int expected) :
        expression(expression), expected(expected) {}
};

class TestFixtureWithParam :
    public TestFixture, public ::testing::WithParamInterface<Param>
{
};

