#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() 
{
}

FragTrap::FragTrap(const std::string name) :
	ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy effected propelly" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << m_name << " has been shutted down." << std::endl;
}

FragTrap			&FragTrap::operator=(const FragTrap &assigned)
{
	this->m_hitPoints = assigned.m_hitPoints;
	this->m_maxHitPoints = assigned.m_maxHitPoints;
	this->m_energyPoints = assigned.m_energyPoints;
	this->m_maxEnergyPoints = assigned.m_maxEnergyPoints;
	this->m_level = assigned.m_level;
	this->m_name = assigned.m_name;
	this->m_meleeAttackDamage = assigned.m_meleeAttackDamage;
	this->m_rangedAttackDamage = assigned.m_rangedAttackDamage;
	this->m_armorDamageReduction = assigned.m_armorDamageReduction;
	return (*this);
}

void			FragTrap::meleeAttack(std::string const &target)
{
	std::cout <<  m_name << " attacking " << target << std::endl;
	std::cout << "Damn, what a punch ! you inflickted " << this->getMeleeAttackDamage()
		<< " damages !" << std::endl;
}

void			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name << " attacking " << target << std::endl;
	std::cout << "What a shot ! you are a real sniper, you inflickted " << this->getRangedAttackDamage()
		<< " damages !" << std::endl; 
}

void			FragTrap::goomedAttack(std::string const &target)
{
	std::cout << m_name << " attacking " << target << std::endl;
	std::cout << "You goomed your opponent " << 100
		<< " damages !" << std::endl; 
}

void			FragTrap::choucrouteRainAttack(std::string const &target)
{
	std::cout << m_name << " attacking " << target << std::endl;
	std::cout << "Wait ... what the fuck, oh .. for real ??? IT'S RAINING CHOUCROUTE ! this made " << 10
		<< " damages !" << std::endl; 
}

void			FragTrap::chestnutBurstAttack(std::string const &target)
{
	std::cout << m_name << " attacking " << target << std::endl;
	std::cout << "Ttatatatatataat chestnut burst inflicted " << 50
		<< " damages !" << std::endl; 
}

void			FragTrap::bananaShotAttack(std::string const &target)
{
	std::cout << m_name << " attacking " << target << std::endl;
	std::cout << "your opponent glides on your banana " << 40
		<< " damages !" << std::endl; 
}

void			FragTrap::towelShotAttack(std::string const &target)
{
	std::cout << m_name << " attacking " << target << std::endl;
	std::cout << "Clack !! CLACK, you shoted your opponent with your towel, " << 60
		<< " damages !" << std::endl; 
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (m_energyPoints < 25)
	{
		std::cout << "Out of energy ..." << std::endl;
		return;
	}
	m_energyPoints -= 25;
	{
		int random = rand() % 5;
		if (random == 0)
			FragTrap::goomedAttack(target);
		else if (random == 1)
			FragTrap::choucrouteRainAttack(target);
		else if (random == 2)
			FragTrap::chestnutBurstAttack(target);
		else if (random == 3)
			FragTrap::bananaShotAttack(target);
		else
			FragTrap::towelShotAttack(target);
	}
}
