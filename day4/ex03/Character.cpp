#include "Character.hpp"

Character::Character(std::string name) : _name(name), _counter(0)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = nullptr;
	}
}

Character::Character(Character const &other)
{
	_name = other._name;
	int i;
    for (i = 0; other._inventory[i] && i < 4; i++)
	{
        _inventory[i] = other._inventory[i]->clone();
	}
    for (; i < 4; i++)
	{
		_inventory[i] = nullptr;
	}
}

Character::~Character()
{
	for (int i = 0; _inventory[i] && i < 4; i++)
	{
        delete _inventory[i];
	}
}

Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_counter = other._counter;
		int i;
        for (i = 0; other._inventory[i] && i < 4; i++)
        {
            if (_inventory[i])
			{
                delete _inventory[i];
			}
            _inventory[i] = other._inventory[i]->clone();
        }
        for (; i < 4; i++)
        {
            if (_inventory[i])
			{
                delete _inventory[i];
			}
            _inventory[i] = nullptr;
        }
	}
	return(*this);
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    if (_counter == 4 || !m)
	{
        return;
	}
    else
    {
        _inventory[_counter] = m;
        _counter++;
    }
}

void Character::unequip(int idx)
{
	if (idx < 4 && _inventory[idx])
	{
		_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < _counter)
	{
        _inventory[idx]->use(target);
	}
}
