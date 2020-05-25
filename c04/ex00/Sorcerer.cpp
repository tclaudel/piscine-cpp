#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : m_name("none"), m_title("none")
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : m_name(name), m_title(title)
{
	std::cout << m_name << ", " << m_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer			&Sorcerer::operator=(const Sorcerer &rhs)
{
	this->m_name = rhs.m_name;
	this->m_title = rhs.m_title;
	return (*this);
}

std::ostream		&operator<<(std::ostream &flux, Sorcerer const &rhs)
{
	flux << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return (flux);
}

void				Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

std::string			Sorcerer::getName(void) const
{
	return (m_name);
}

void				Sorcerer::setName(std::string const value)
{
	m_name = value;
}

std::string			Sorcerer::getTitle(void) const
{
	return (m_title);
}

void				Sorcerer::setTitle(std::string const value)
{
	m_title = value;
}
