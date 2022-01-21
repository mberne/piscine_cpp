#include <iostream>
#include "Karen.hpp"

int main()
{
	Karen karen;

	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	karen.complain("something else");
	karen.complain("");

	return 0;	
}