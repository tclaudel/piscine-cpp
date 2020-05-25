#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
}

NinjaTrap::NinjaTrap(const std::string name) :
	ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NinjaTrap created" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &rhs) :
	ClapTrap(rhs)
{
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << m_name << " has been shutted down." << std::endl;
}

NinjaTrap			&NinjaTrap::operator=(const NinjaTrap &rhs)
{
	(void)rhs;
	return (*this);
}

void			NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout <<  m_name << " attacking " << target << std::endl;
	std::cout << "NINJAAAAA ! you inflickted " << this->getMeleeAttackDamage()
		<< " damages !" << std::endl;
}

void			NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name << " attacking " << target << std::endl;
	std::cout << "Ninja shoe shot ! you inflickted " << this->getRangedAttackDamage()
		<< " damages !" << std::endl;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
	std::cout << m_name << "\tOh! Another ninja!" << std::endl;
	std::cout << " *shoeboxing* " << target.getName() << "." << std::endl;
}

void			NinjaTrap::ninjaShoebox(FragTrap & target)
{
	std::cout << m_name << "\t Oh! A Fragtrap!" << std::endl;
	std::cout << " *shoeboxing* " << target.getName() << "." << std::endl;
}

void			NinjaTrap::ninjaShoebox(ScavTrap & target)
{
	std::cout << m_name << "\t Oh! A Scavtrap!" << std::endl;
	std::cout << " *shoeboxing* " << target.getName() << "." << std::endl;
}