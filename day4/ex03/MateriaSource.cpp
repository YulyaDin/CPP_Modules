#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_materials[i] = nullptr;
	}
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	for (int i = 0; other._materials[i] && i < 4; i++)
    {
        if (_materials[i])
		{
            delete _materials[i];
		}
        _materials[i] = other._materials[i]->clone();
    }
    for (int i=0; i < 4; i++)
    {
        if (_materials[i])
		{
            delete _materials[i];
		}
        _materials[i] = 0;
    }
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4 && _materials[i]; i++)
	{
        delete _materials[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; other._materials[i] && i < 4; i++)
    {
        if (_materials[i])
		{
            delete _materials[i];
		}
        _materials[i] = other._materials[i]->clone();
    }
    for (int i = 0; i < 4; i++)
    {
        if (_materials[i])
		{
            delete _materials[i];
		}
        _materials[i] = 0;
    }
	return(*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i;
	for (i = 0; _materials[i] && i < 4; i++)
    {
        if (_materials[i]->getType() == materia->getType())
            return;
    }
    if (i < 4)
	{
        _materials[i] = materia->clone();
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;
	for (i = 0; _materials[i] && i < 4; i++)
    {
        if (_materials[i]->getType() == type)
            return (_materials[i]->clone());
    }
	return 0;
}
