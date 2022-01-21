#include "Karen.hpp"

Karen::Karen()
{
	return ;
}

Karen::~Karen()
{
	return ;
}

void Karen::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void Karen::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

void Karen::complain(std::string level)
{
	std::string	levels[] = {"debug", "info", "warning", "error"};
	size_t		i = 0;
	void		(Karen::*array_ptr_fct[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	while (level.compare(levels[i]) && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	(this->*array_ptr_fct[i])();
}
