#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap	Nunu("Nunu");
	DiamondTrap	Marcus(Nunu);

	Nunu.attack("Test");
	Marcus.attack("Nunu");
	Marcus.whoAmI();
	return 0;
}