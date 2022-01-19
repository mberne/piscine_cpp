#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	size_t	i = 0;
	Zombie*	horde = new Zombie[N];
	
	if (N > 0)
	{
		while (i < (size_t)N)
		{
			horde[i].setName(name);
			i++;
		}
	}
	return (horde);
}