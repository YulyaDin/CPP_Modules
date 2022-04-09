#pragma once

#include <string>

class Enemy
{
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &other);
	virtual ~Enemy();

	Enemy &operator=(Enemy const &other);

	virtual std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);

protected:
	std::string _type;
	int _hp;
};
