#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
			HumanB(str name);
			~HumanB();

			void	attack() const;
			void	setWeapon(Weapon &Weapon);
	
	private:
			str	name;
			Weapon	*weapon;
};

#endif