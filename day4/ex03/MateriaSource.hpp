#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	~MateriaSource();

	MateriaSource &operator=(MateriaSource const &other);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
private:
    AMateria* _materials[4];
};
