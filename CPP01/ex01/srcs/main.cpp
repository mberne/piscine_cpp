#include "Zombie.hpp"

int	main()
{
	size_t	numberOfZombie = 5;
	size_t	i = 0;
	Zombie* horde = zombieHorde(numberOfZombie, "Jeannette");

	if (numberOfZombie > 0)
	{
		while (i < numberOfZombie)
		{
			horde[i].announce();
			i++;
		}
	}
	delete [] horde;
	return 0;
}