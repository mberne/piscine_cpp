#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon) : _name(name), _weapon(newWeapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}