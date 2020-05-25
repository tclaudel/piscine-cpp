#include "Peon.hpp"

Peon::Peon(void) : Victim()
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &rhs) : Victim(rhs)
{
	*this = rhs;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon				&Peon::operator=(const Peon &rhs)
{
	this->m_name = rhs.m_name;
	return (*this);
}

void				Peon::getPolymorphed(void) const
{
	std::cout << m_name << " has been turned into a pink pony !" << std::endl;
}