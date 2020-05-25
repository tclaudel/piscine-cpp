#include "Character.hpp"

Character::Character(void) : m_name("none")
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}

Character::Character(const std::string name) : m_name(name)
{
	std::cout << "A new character named " << m_name << " just appeard" << std::endl;
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}

Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete m_inventory[i];
}

Character			&Character::operator=(const Character &rhs)
{
	this->m_name = rhs.m_name;
	for (int i = 0; i < 4; i++)
	{
		m_inventory[i] = NULL;
		m_inventory[i] = rhs.m_inventory[i]->clone();
	}
	return (*this);
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] == NULL)
		{
			m_inventory[i] = m->clone();
			std::cout << "You equiped " << m_inventory[i]->getType() << std::endl;
			std::cout << "Inventory :" << std::endl;
			for (int i = 0; m_inventory[i] ; i++)
			{
				std::cout << "\t[" << i << "] : " << m_inventory[i]->getType() << std::endl;
			}
			return ;
		}
	}
	std::cout << "You can't add more materias" << std::endl;
}

void 				Character::unequip(int i)
{
	if (this->m_inventory[i] == NULL)
		std::cout << "Nothing equiped at this index" << std::endl;
	else
		this->m_inventory[i] = NULL;
	return;
}

void				Character::use(int i, ICharacter &target)
{

	if (i > 0 && i < 4)
	{
		if (m_inventory == NULL)
			std::cout << "No materia at this index" << std::endl;
		else
		{
			m_inventory[i]->use(target);
			std::cout <<  "You used " << m_inventory[i]->getType() << " on " << target.getName() << std::endl;
		}
	}
}

	/********************************

			GETTER // SETTER

	********************************/

const std::string			&Character::getName(void) const
{
	return (m_name);
}