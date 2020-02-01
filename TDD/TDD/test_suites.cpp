//test_suites.cpp
//Blake Caldwell & Theng Yang
//January 31, 2020
//tests for string length

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "sting_calc.hpp"

#include <string>

TEST_CASE("String of Zero")
{
	{
		INFO("Must return zero for empty string");
		REQUIRE(stringCalc("") == 0);
	}
}

TEST_CASE("Testing integers")
{
	{
		INFO("One should return 1");
		REQUIRE(stringCalc("1") == 1);
	}

	{
		INFO("Three should return 3");
		REQUIRE(stringCalc("3") == 3);
	}

	{
		INFO("10 should return 10");
		REQUIRE(stringCalc("10") == 10);
	}
}

TEST_CASE("Testing simple addition")
{
	{
		INFO("0+0 should return 0");
		REQUIRE(stringCalc("0+0") == 0);
	}

	{
		INFO("1+1 should return 1");
		REQUIRE(stringCalc("1+1") == 2);
	}
}