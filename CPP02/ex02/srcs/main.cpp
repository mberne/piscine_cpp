#include <iostream>
#include "Fixed.hpp"

void	other_tests()
{
	bool	test;
	Fixed	a(10);
	Fixed	b(15);
	Fixed	c(a);
	Fixed	res;


	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl << std::endl;
	
	test = (0 < 1);
	std::cout << "for reference, 0 < 1 returns " << test << std::endl << std::endl;
	
	test = (a < b);
	std::cout << "a < b returns " << test << " and b < a returns ";
	test = (b < a);
	std::cout << test << std::endl << std::endl;
	
	test = (a <= b);
	std::cout << "a <= b returns " << test << " and b <= a returns ";
	test = (b <= a);
	std::cout << test << std::endl;
	test = (a <= c);
	std::cout << "a <= c returns " << test << " and c <= a returns ";
	test = (c <= a);
	std::cout << test << std::endl << std::endl;
	
	test = (a >= b);
	std::cout << "a >= b returns " << test << " and b >= a returns ";
	test = (b >= a);
	std::cout << test << std::endl;
	test = (a >= c);
	std::cout << "a >= c returns " << test << " and c >= a returns ";
	test = (c >= a);
	std::cout << test << std::endl << std::endl;

	test = (0 == 1);
	std::cout << "for reference, 0 == 1 returns " << test << std::endl << std::endl;
	
	test = (a == b);
	std::cout << "a == b returns " << test << " and c == a returns ";
	test = (c >= a);
	std::cout << test << std::endl << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;
	res = a + b;
	std::cout << "a + b = " << res << std::endl;
	res = a - b;
	std::cout << "a - b = " << res << std::endl;
	res = a * b;
	std::cout << "a * b = " << res << std::endl;
	res = b / a;
	std::cout << "b / a = " << res << std::endl << std::endl;

	std::cout << "b = " << b << std::endl;
	std::cout<< "b++ " << b++ << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout<< "++b " << ++b << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout<< "b-- " << b-- << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout<< "--b " << --b << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;

	res = Fixed::max(a, b);
	std::cout << "max(a, b) = " << res << std::endl;
	res = Fixed::min(a, b);
	std::cout << "min(a, b) = " << res << std::endl;
}

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl << std::endl;

	std::cout << "___________" << std::endl;
	std::cout << "Other tests" << std::endl;
	std::cout << "___________" << std::endl;
	// other_tests();
	std::cout << "___________" << std::endl;
	std::cout << "End other tests" << std::endl;
	std::cout << "___________" << std::endl;

	return 0;
}