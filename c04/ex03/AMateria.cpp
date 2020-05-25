#include "AMateria.hpp"

AMateria::AMateria(void) : m_xp(0), m_type("none")
{
}

AMateria::AMateria(const std::string &type) : m_xp(0), m_type(type)
{
	// std::cout << "A materia of type " << m_type << " has been created !" << std::endl;
}

AMateria::AMateria(const AMateria &rhs)
{
	*this = rhs;
}

AMateria::~AMateria(void)
{
}

void					AMateria::use(ICharacter& target)
{
	(void)target;
	this->m_xp = this->m_xp + 10;
	return;
}

AMateria			&AMateria::operator=(const AMateria &rhs)
{
	this->m_xp = rhs.m_xp;
	this->m_type = rhs.m_type;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

unsigned int		AMateria::getXp(void) const
{
	return (m_xp);
}

const std::string	&AMateria::getType(void) const
{
	return (m_type);
}
