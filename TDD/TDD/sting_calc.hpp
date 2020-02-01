//string_calc.hpp
//Blake Caldwell and Theng Yang
//January 31, 2020
//string stuff

#include <string>
using std::string;

#include <sstream>
using std::istringstream;

int stringCalc(string input)
{
	int int1 = 0;
	int int2 = 0;
	char op;
	istringstream ins(input);
	ins >> int1;
	ins >> op;
	ins >> int2;

	if (op == '+')
		int1 += int2;

	return int1;
}