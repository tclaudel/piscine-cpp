#include "Character.hpp"

Character::Character(void) : m_ap(40), m_name("none")
{
	m_weapon = NULL;
}

Character::Character(std::string const name) : m_ap(40), m_name(name)
{
	m_weapon = NULL;
}


Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character::~Character(void)
{
}

Character			&Character::operator=(const Character &rhs)
{
	this->m_ap = rhs.m_ap;
	this->m_weapon = rhs.m_weapon;
	this->m_name = rhs.m_name;
	return (*this);
}

std::ostream				&operator<<(std::ostream &output, const Character &rhs)
{
	if (rhs.getWeapon() != NULL)
		output << rhs.getName() << " has AP_NUMBER " << rhs.getAp() << " and carries a " << rhs.getWeapon()->getName() << std::endl;
	else
		output << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
	return (output);
}

void				Character::attack(Enemy *enemy)
{
	if (enemy->getHP() <= 0)
	{
		std::cout << "Enemy already dead" << std::endl;
		return;
	}
	if (m_weapon != NULL && enemy != NULL)
	{
		if (m_ap - m_weapon->getAPCost() >= 0)
		{
			m_ap -= m_weapon->getAPCost();
			m_weapon->attack();
			enemy->takeDamage(m_weapon->getDamage());
			std::cout << m_name << " attacks " << enemy->getType()
				<< " with a " << m_weapon->getName() << std::endl;
			if (enemy->getHP() <= 0)
				delete enemy;
		}
		else
			std::cout << "Out of mana !" << std::endl;
	}
	return ;
}

void			Character::equip(AWeapon *weapon)
{
	std::cout << m_name << " equipped weapon : " << weapon->getName() << std::endl;
	m_weapon = weapon;
	return ;
}

void			Character::recoverAP(void)
{
	m_ap += 10;
	if (m_ap > 40)
		m_ap = 40;
}

	/********************************

			GETTER // SETTER

	********************************/

int					Character::getAp(void) const
{
	return (m_ap);
}

AWeapon				*Character::getWeapon(void) const
{
	return (m_weapon);
}

std::string			Character::getName(void) const
{
	return (m_name);
}
