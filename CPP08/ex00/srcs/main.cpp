#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
	std::vector<int>	vector1;

	int	i = 0;
	while (i < 5)
	{
		vector1.push_back(i);
		i++;
	}

	try
	{
		std::cout << *easyfind(vector1, 2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << *easyfind(vector1, 9) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
