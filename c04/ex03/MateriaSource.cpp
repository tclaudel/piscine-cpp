#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : m_inventory{0}
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	*this = rhs;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete m_inventory[i];
}

MateriaSource			&MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		m_inventory[i] = NULL;
		m_inventory[i] = rhs.m_inventory[i];
	}
	return (*this);
}

void					MateriaSource::learnMateria(AMateria *obj)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] == NULL)
		{
			m_inventory[i] = obj;
			std::cout << "You learned " << m_inventory[i]->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "Source can't learn more materias" << std::endl;
}

AMateria				*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*newMateria;

	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i]->getType() == type)
		{
			newMateria = m_inventory[i]->clone();
			return (newMateria);
		}
		i++;
	}
	std::cout << "Materia type is invalid" << std::endl;
	return (NULL);
}

	/********************************

			GETTER // SETTER

	********************************/
