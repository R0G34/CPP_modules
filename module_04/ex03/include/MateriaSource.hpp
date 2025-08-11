#ifndef _MATERIASOURCE_HPP_
#define _MATERIASOURCE_HPP_

#include <iostream>
#include <string>

typedef std::string str;

#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource();

		virtual void	getMemory() const = 0;

		virtual void		learnMateria(AMateria *materia) = 0;
		virtual AMateria *	createMateria(str const &type) = 0;
};

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		virtual	~MateriaSource();

		MateriaSource &	operator=(MateriaSource const &rSym);
		virtual void	getMemory() const;

		virtual void	learnMateria(AMateria *materia);
		virtual AMateria *	createMateria(str const &type);

	private:
		int			_idxTotal;
		AMateria *	_memory[4];
};

#endif