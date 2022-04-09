#include "Squad.hpp"
#include <typeinfo>

Squad::Squad() : _numberOfUnits(0), _squad(NULL)
{
}

Squad::Squad(Squad const &other)
{
	*this = other;
}

Squad::~Squad()
{
	if (_squad)
	{
		destroySquad();
	}
}

void Squad::destroySquad()
{
	Unit* tmp = _squad;
	while (tmp)
	{
		Unit* current = tmp;
		tmp = tmp->next;
		
		delete current->unit;
		delete current;
	}
}

Squad &Squad::operator=(Squad const &other)
{
	if (this == &other)
	{
		return(*this);
	}

	if (_squad)
	{
		destroySquad();
	}

	Unit* copy = other._squad;;
	if (not copy)
	{
		_squad = NULL;
	}

	Unit* newUnit = new Unit();
	_squad = newUnit;
	
	while (copy)
	{
		newUnit->unit = copy->unit->clone();
		
		if (copy->next)
		{
			newUnit->next = new Unit();
			newUnit = newUnit->next;
		}
		
		copy = copy->next;
	}

	_numberOfUnits = other._numberOfUnits;

	return(*this);
}

int Squad::getCount() const
{
	return _numberOfUnits;
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (index >= _numberOfUnits || index < 0)
		return nullptr;
	 
	Unit* tmpList = _squad;
	for (int i = 0; i < index; i++)
	{
		tmpList = tmpList->next;
	}
	return tmpList->unit;
}

int Squad::push(ISpaceMarine* spaceMarine)
{
	if (not spaceMarine)
		return _numberOfUnits;
	
	if (not _squad)
	{
		_squad = new Unit();
		_squad->unit = spaceMarine;
		_squad->next = nullptr;
	}
	else
	{
		Unit* tmpList = _squad;
		
		while (tmpList->next)
		{
			if (tmpList->unit == spaceMarine)
			{
				return _numberOfUnits;
			}
			tmpList = tmpList->next;
		}
		if (tmpList->unit == spaceMarine)
		{
			return _numberOfUnits;
		}

		tmpList->next = new Unit();
		tmpList->next->unit = spaceMarine;
		tmpList->next->next = nullptr;
	}
	
	_numberOfUnits++;
	return _numberOfUnits;
}
