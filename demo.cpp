// demo.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <string>
#include <sstream>

import test;

int main()
{
	Test t;

	std::string s("3");
	std::stringstream ss(s);

	ss >> t;

	return 0;
}
