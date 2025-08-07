#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ClapTrap	Pidgeon("Pidgeon");
	ClapTrap	*Charo = new ClapTrap("Charo");
	ScavTrap	Wingdryl("Wingdryl");

	Pidgeon.attack("Charo");
	Wingdryl.takeDamage(Pidgeon.getAttackDamage());
	Wingdryl.beRepaired(18);
	Wingdryl.guardGate();
	Wingdryl.attack("Pidgeon");
	Charo->takeDamage(Wingdryl.getAttackDamage());
	delete Charo;
	return 0;
}