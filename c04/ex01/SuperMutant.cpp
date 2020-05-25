#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	std::cout << "\thealth points\t: " << getHP() << std::endl;
	std::cout << "\ttype\t\t: " << getType() << std::endl << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &rhs)  : Enemy(rhs)
{
	*this = rhs;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;

}

SuperMutant			&SuperMutant::operator=(const SuperMutant &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

void				SuperMutant::takeDamage(int incDamage)
{
	incDamage -= 3;
	if (incDamage < 0)
		return;
	if (getHP() - incDamage <= 0)
		setHP(0);
	else
		setHP(getHP() - incDamage);
}
