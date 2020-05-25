#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21, "* piouuu piouuu piouuu *")
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &rhs) : AWeapon(rhs)
{
	*this = rhs;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle			&PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void				PlasmaRifle::attack(void) const
{
	std::cout << getOutputOfAttack() << std::endl;
}
