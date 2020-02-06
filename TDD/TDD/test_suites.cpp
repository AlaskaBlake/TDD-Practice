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
		INFO("0,0 should return 0");
		REQUIRE(stringCalc("0,0") == 0);
	}

	{
		INFO("1,1 should return 2");
		REQUIRE(stringCalc("1,1") == 2);
	}

	{
		INFO("2,2 should return 4");
		REQUIRE(stringCalc("2,2") == 4);
	}

	{
		INFO("20,5 should return 25");
		REQUIRE(stringCalc("20,5") == 25);
	}

}

TEST_CASE("Testing New Line")
{
	{
		INFO("0\\n0 should return 0");
		REQUIRE(stringCalc("0\n0") == 0);

	}

	{
		INFO("1\\n1 should return 2");
		REQUIRE(stringCalc("1\n1") == 2);

	}

	{
		INFO("2\\n6 should return 8");
		REQUIRE(stringCalc("2\n6") == 8);

	}

	{
		INFO("21\\n11 should return 32");
		REQUIRE(stringCalc("21\n11") == 32);

	}

	{
		INFO("101\\n110 should return 211");
		REQUIRE(stringCalc("101\n110") == 211);

	}


}