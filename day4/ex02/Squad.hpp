#pragma once

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
public:
	Squad();
	Squad(Squad const &other);
	~Squad();

	Squad &operator=(Squad const &other);

	int getCount() const;
	ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);
private:
	int _numberOfUnits;
	typedef struct	Unit
	{
		ISpaceMarine* unit;
		Unit* next;
	}				Unit;
	Unit* _squad;

	void destroySquad();
};
