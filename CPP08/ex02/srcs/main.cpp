#include <iostream>
#include "MutantStack.hpp"

int main()
{
	// {	
	// 	std::cout << std::endl << "_____Their main._____" << std::endl;

	// 	MutantStack<int> mstack;

	// 	mstack.push(5);
	// 	mstack.push(17);

	// 	std::cout << mstack.top() << std::endl;

	// 	mstack.pop();

	// 	std::cout << mstack.size() << std::endl;

	// 	mstack.push(3);
	// 	mstack.push(5);
	// 	mstack.push(737);
	// 	mstack.push(0);

	// 	MutantStack<int>::iterator it = mstack.begin();
	// 	MutantStack<int>::iterator ite = mstack.end();

	// 	++it;
	// 	--it;
	// 	while (it != ite)
	// 	{
	// 		std::cout << *it << std::endl;
	// 		++it;
	// 	}

	// 	std::cout << std::endl << "_____Using [] operator._____" << std::endl;

	// 	size_t	i = 0;
	// 	while (i < mstack.size())
	// 	{
	// 		std::cout << mstack[i] << std::endl;
	// 		i++;
	// 	}
	// }

	{	
		std::cout << std::endl << "_____Their main._____" << std::endl;

		MutantStack<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.front() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << std::endl << "_____Using [] operator._____" << std::endl;

		size_t	i = 0;
		while (i < mstack.size())
		{
			std::cout << mstack[i] << std::endl;
			i++;
		}
	}
	
	return 0;
}