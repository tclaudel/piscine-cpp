#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &rhs) : AMateria(rhs)
{
}

Ice::~Ice(void)
{
}

Ice					&Ice::operator=(const Ice &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria			*Ice::clone(void) const
{
	return (new Ice());
}

void				Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}