#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int	value = rand() % 3;
	if (value == 0)
		return (new A());
	else if (value == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Real type of class is : A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Real type of class is : B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Real type of class is : C" << std::endl;
	return ;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Real type of class is : A" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << bc.what() << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Real type of class is : B" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << bc.what() << std::endl;
	}
		try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Real type of class is : C" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << bc.what() << std::endl;
	}
}

int main()
{
	srand(time(NULL));

	Base	*instance = generate();

	identify(instance);
	identify(*instance);

	delete instance;

	return 0;
}