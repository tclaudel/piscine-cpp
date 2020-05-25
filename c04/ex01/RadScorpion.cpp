#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpions")
{
	std::cout << "* click click click *" << std::endl;
	std::cout << "\thealth points\t: " << getHP() << std::endl;
	std::cout << "\ttype\t\t: " << getType() << std::endl << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &rhs) : Enemy(rhs)
{
	*this = rhs;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion			&RadScorpion::operator=(const RadScorpion &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}
