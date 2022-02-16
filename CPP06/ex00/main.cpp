#include <iostream>
#include <climits>
#include <float.h>

bool	check_nan_inf(std::string value)
{
	if (value.length() && (!value.compare("inff") || !value.compare("-inff")))
		value.erase(3, 1);
	if (value.length() && (!value.compare("nan") || !value.compare("nanf") || !value.compare("inf") || !value.compare("-inf") || !value.compare("inff") || !value.compare("-inff")))
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << value << "f" << std::endl;
		std::cout << "double : " << value << std::endl;
		return 1;
	}
	return 0;
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of parameter." << std::endl;
		return 1;
	}

	std::string str = av[1];
	if (check_nan_inf(str))
		return 0;

	double	value = atof(av[1]);

	std::cout << "char : ";
	if (isprint(str[0]) && str.length() == 1)
		std::cout << "'" << static_cast<char>(str[0]) << "'"  << std::endl;
	else if (value < CHAR_MIN || value > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(value))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;

	std::cout << "int : ";
	if (value < INT_MIN || value > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;

	std::cout << "float : ";
	if ((value < FLT_MIN || value > FLT_MAX) && value != 0)
		std::cout << "impossible" << std::endl;
	else
	{
		if (value - static_cast<int>(value) == 0.0 && value < 999999)
			std::cout << static_cast<float>(value) << ".0f" << std::endl;
		else
			std::cout << static_cast<float>(value) << "f" << std::endl;
	}

	std::cout << "double : ";
	if (value - static_cast<int>(value) == 0.0 && value < 999999)
		std::cout << value << ".0" << std::endl;
	else
		std::cout << value << std::endl;

	return 0;
}