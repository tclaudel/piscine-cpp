#include "Enemy.hpp"

Enemy::Enemy(void) : m_HP(0), m_type("none")
{
}

Enemy::Enemy(int hp, std::string const &type) : m_HP(hp), m_type(type)
{
	std::cout << " An enemy just appered :" << std::endl;
}

Enemy::Enemy(const Enemy &rhs)
{
	*this = rhs;
}

Enemy::~Enemy(void)
{
	std::cout << "An enemy has been slained" << std::endl;
}

Enemy				&Enemy::operator=(const Enemy &rhs)
{
	this->m_HP = rhs.m_HP;
	this->m_type = rhs.m_type;
	return (*this);
}

void				Enemy::takeDamage(int incDamage)
{
	if (incDamage < 0)
		return;
	if (m_HP - incDamage <= 0)
		m_HP = 0;
	else
		m_HP -= incDamage;
}

	/********************************

			GETTER // SETTER

	********************************/

int					Enemy::getHP(void) const
{
	return (m_HP);
}

std::string			Enemy::getType(void) const
{
	return (m_type);
}


void			Enemy::setHP(int i)
{
	m_HP = i;
	return;
}
