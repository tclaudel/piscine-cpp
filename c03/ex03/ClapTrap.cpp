#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : m_name("none"), m_hitPoints(0), m_maxHitPoints(0),
	m_energyPoints(0), m_maxEnergyPoints(0), m_level(0), m_meleeAttackDamage(0),
	m_rangedAttackDamage(0), m_armorDamageReduction(0)
{
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int maxHitPoints, int energyPoints,
	int maxEnergyPoints, int level, int meleeAttackDamage,
	int rangedAttackDamage, int armorDamageReduction) :
	m_name(name), m_hitPoints(hitPoints), m_maxHitPoints(maxHitPoints),
	m_energyPoints(energyPoints), m_maxEnergyPoints(maxEnergyPoints),
	m_level(level), m_meleeAttackDamage(meleeAttackDamage),
	m_rangedAttackDamage(rangedAttackDamage), m_armorDamageReduction(armorDamageReduction)
{
	srand(time(0));
	std::cout << "=============================================================" << std::endl;
	std::cout << "FragTrap : " << m_name << " constructed with this attributes :" << std::endl;
	std::cout << "\tHit points\t\t\t: " << m_hitPoints << std::endl;
	std::cout << "\tMax hit points\t\t\t: " << m_maxHitPoints << std::endl;
	std::cout << "\tEnergy points\t\t\t: " << m_energyPoints << std::endl;
	std::cout << "\tMax energy points\t\t: " << m_maxEnergyPoints << std::endl;
	std::cout << "\tlevel\t\t\t\t: " << m_level << std::endl;
	std::cout << "\tMelee attack damage\t\t: " << m_meleeAttackDamage << std::endl;
	std::cout << "\tRanged attack damage\t\t: " << m_rangedAttackDamage << std::endl;
	std::cout << "\tArmor damage reduction\t\t: " << m_armorDamageReduction << std::endl ;
	std::cout << "=============================================================" << std::endl << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->getName() << " has been shutted down." << std::endl;
}

ClapTrap			&ClapTrap::operator=(const ClapTrap &assigned)
{
	this->m_hitPoints = assigned.m_hitPoints;
	this->m_energyPoints = assigned.m_energyPoints;
	this->m_level = assigned.m_level;
	this->m_name = assigned.m_name;
	this->m_meleeAttackDamage = assigned.m_meleeAttackDamage;
	this->m_rangedAttackDamage = assigned.m_rangedAttackDamage;
	this->m_armorDamageReduction = assigned.m_armorDamageReduction;
	return (*this);
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	int	true_damage;

	if (m_hitPoints <= 0)
	{
		std::cout << m_name << "\t: What the fuck, I'm already dead, stop it !" << std::endl;
		return ;
	}
	std::cout << m_name << "\t: What the fuck, someone attacked me ! " << std::endl;
	true_damage = amount - m_armorDamageReduction;
	if (true_damage < 0)
	{
		std::cout << "This is not really efficient !" << std::endl;
		return ;
	}
	m_hitPoints -= true_damage;
	std::cout << LIGHT_RED << m_name << " received : " << true_damage <<  RESET << std::endl;
	if (m_hitPoints <= 0)
	{
		std::cout << LIGHT_RED"YOU DIED !" << RESET << std::endl;
	}
	else
		std::cout << m_name << "\t: " << "This was close, I still have " << FLASH_GREEN
			<< m_hitPoints << RESET << " PV." << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hitPoints == m_maxHitPoints)
	{
		std::cout << m_name << "\t: " <<"I'm already full, use your brain !" << std::endl;
		return ;
	}
	std::cout << m_name << "\t: " << FLASH_GREEN"I'm healing myself ." << std::endl;
	m_hitPoints += amount;
	if (m_hitPoints >= m_maxHitPoints)
	{
		m_hitPoints = m_maxHitPoints;
		std::cout << RESET << m_name << "\t: " <<FLASH_GREEN"I'm full thank you !" << RESET << std::endl;
	}
	else
		std::cout << RESET << m_name << "\t: " << amount << FLASH_GREEN" PV restaured I'm now " << m_hitPoints << RESET << std::endl;
}

int			ClapTrap::getHitPoints(void) const
{
	return (m_hitPoints);
}

void			ClapTrap::setHitPoints(int const value)
{
	m_hitPoints = value;
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (m_energyPoints);
}

void			ClapTrap::setEnergyPoints(int const value)
{
	m_energyPoints = value;
}

int			ClapTrap::getLevel(void) const
{
	return (m_level);
}

void			ClapTrap::setLevel(int const value)
{
	m_level = value;
}

std::string			ClapTrap::getName(void) const
{
	return (m_name);
}

void			ClapTrap::setName(std::string const value)
{
	m_name = value;
}

int			ClapTrap::getMeleeAttackDamage(void) const
{
	return (m_meleeAttackDamage);
}

void			ClapTrap::setMeleeAttackDamage(int const value)
{
	m_meleeAttackDamage = value;
}

int			ClapTrap::getRangedAttackDamage(void) const
{
	return (m_rangedAttackDamage);
}

void			ClapTrap::setRangedAttackDamage(int const value)
{
	m_rangedAttackDamage = value;
}

int			ClapTrap::getArmorDamageReduction(void) const
{
	return (m_armorDamageReduction);
}

void			ClapTrap::setArmorDamageReduction(int const value)
{
	m_armorDamageReduction = value;
}
