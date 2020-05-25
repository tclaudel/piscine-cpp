#include "Weapon.hpp"

Weapon::Weapon(STRING type) : m_type(type)
{
}

Weapon::~Weapon()
{
}

void			Weapon::setType(STRING type)
{
	m_type = type;
}

const STRING&	Weapon::getType(void)
{
	return (m_type);
}