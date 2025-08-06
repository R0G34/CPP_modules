#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(str name, Weapon &weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() const {
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}