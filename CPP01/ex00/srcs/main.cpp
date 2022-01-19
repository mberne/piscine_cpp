#include "Zombie.hpp"

int	main()
{
	Zombie	jean("Jean");
	jean.announce();

	Zombie* michel = newZombie("Michel");
	michel->announce();

	randomChump("Random");

	delete (michel);
	return 0;
}