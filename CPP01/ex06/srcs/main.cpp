#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of parameters" << std::endl;
		return 1;
	}

	Karen	karen;
	std::string arg = av[1];
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t		i = 0;

	while (arg.compare(levels[i]) && i < 4)
		i++;
	switch (i)
	{
		case 0:
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
		case 1:
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
		case 2:
			std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
		case 3:
			std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
			break ;
		default:
			std::cout << "Error" << std::endl;
	}
	return 0;
}