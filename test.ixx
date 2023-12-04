module;

#include <iostream>

export module test;

export struct Test
{
	int i;

	friend std::istream& operator>>(std::istream&, Test&);

};

std::istream& operator>>(std::istream& in, Test& t)
{
	in >> t.i;

	return in;
}
