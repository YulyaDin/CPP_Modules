#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) :
	_type(type), _hp(hp)
{
}

Enemy::Enemy(Enemy const &other)
{
	_type = other._type;
	_hp = other._hp;
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(Enemy const &other)
{
	_type = other._type;
	_hp = other._hp;
	return(*this);
}

std::string Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hp;
}

void Enemy::takeDamage(int hp)
{
	if (hp < 0)
	{
		return ;
	}

	int result = _hp - hp;
	if (result < 0)
	{
		_hp = 0;
	}
	else
	{
		_hp = result;
	}
}
