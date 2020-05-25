#include "Victim.hpp"

Victim::Victim(void) : m_name("none")
{
}

Victim::Victim(std::string name) : m_name(name)
{
	std::cout << "A random victim called " << m_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim::~Victim(void)
{
	std::cout << "The victim " << m_name << " died for no apparent reasons!" << std::endl;
}

Victim				&Victim::operator=(const Victim &rhs)
{
	this->m_name = rhs.m_name;
	return (*this);
}

void				Victim::getPolymorphed(void) const
{
	std::cout << m_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string			Victim::getName(void) const
{
	return (m_name);
}

void			Victim::setName(std::string const value)
{
	m_name = value;
}

std::ostream		&operator<<(std::ostream &flux, Victim const &rhs)
{
	flux << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (flux);
}
