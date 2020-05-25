#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &rhs)
{
	*this = rhs;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator			&AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine			*AssaultTerminator::clone() const
{
	ISpaceMarine	*cloned = new AssaultTerminator(*this);
	return (cloned);
}

void					AssaultTerminator::battleCry() const
{
	std::cout <<  "This code is unclean. Purify it !" << std::endl;
}

void					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void					AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attaque with chainfists *" << std::endl;
}
