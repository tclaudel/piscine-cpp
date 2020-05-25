#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power fist", 8, 50, "* pschhh... SBAM ! *")
{
}

PowerFist::PowerFist(const PowerFist &rhs) : AWeapon(rhs)
{
	*this = rhs;
}

PowerFist::~PowerFist(void)
{
}

PowerFist			&PowerFist::operator=(const PowerFist &rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void				PowerFist::attack(void) const
{
	std::cout << getOutputOfAttack() << std::endl;
}
