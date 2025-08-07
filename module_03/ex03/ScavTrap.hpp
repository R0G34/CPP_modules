#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(str name);
		ScavTrap(ScavTrap const &src);
		ScavTrap();
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const &rSym);
		
		virtual void	attack(const str &target);
		void	guardGate() const;
	private:
};

#endif