#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
		using	FragTrap::_hit_points;
		using	ScavTrap::_energy_points;
		using	FragTrap::_attack_damage;

	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap	&operator=(DiamondTrap const &rhs);
		
		void	whoAmI();
		using	ScavTrap::attack;
};

#endif