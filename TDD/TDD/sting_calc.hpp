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
	int holder = 0;
	char op;
	istringstream ins(input);
	ins >> int1;
	ins >> op;

	if (op - '0' >= 0 && op - '0' <= 9) {
		holder = op - '0';
	}


	ins >> int2;

	if (int2 >= 10) {
		int2 = holder * 100 + int2;
	}
	else if (int2 >= 1) {
		int2 = holder * 10 + int2;
	}
	else {
		int2 = holder;
	}

	int1 += int2;

	return int1;
}