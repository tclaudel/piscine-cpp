#include "ScavTrap.hpp"
#include "FragTrap.hpp"

ScavTrap::ScavTrap(void) : m_name("none"), m_hitPoints(0), m_maxHitPoints(0),
	m_energyPoints(0), m_maxEnergyPoints(0), m_level(1), m_meleeAttackDamage(0),
	m_rangedAttackDamage(0), m_armorDamageReduction(0)
{
}

ScavTrap::ScavTrap(std::string name) : m_name(name), m_hitPoints(100), m_maxHitPoints(100),
	m_energyPoints(50), m_maxEnergyPoints(50), m_level(1), m_meleeAttackDamage(20),
	m_rangedAttackDamage(15), m_armorDamageReduction(3)
{
	srand(time(0));
	std::cout << "=============================================================" << std::endl;
	std::cout << "SvavTrap : " << m_name << " constructed with this attributes :" << std::endl;
	std::cout << "\tHit points\t\t\t: " << m_hitPoints << std::endl;
	std::cout << "\tMax hit points\t\t\t: " << m_maxHitPoints << std::endl;
	std::cout << "\tEnergy points\t\t\t: " << m_energyPoints << std::endl;
	std::cout << "\tMax energy points\t\t: " << m_maxEnergyPoints << std::endl;
	std::cout << "\tlevel\t\t\t\t: " << m_level << std::endl;
	std::cout << "\tMelee attack damage\t\t: " << m_meleeAttackDamage << std::endl;
	std::cout << "\tRanged attack damage\t\t: " << m_rangedAttackDamage << std::endl;
	std::cout << "\tArmor damage reduction\t\t: " << m_armorDamageReduction << std::endl;
	std::cout << "=============================================================" << std::endl << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
}

ScavTrap			&ScavTrap::operator=(const ScavTrap &assigned)
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

void				ScavTrap::meleeAttack(std::string const &target)
{
	std::cout <<  m_name << " attacking " << target << std::endl;
	std::cout << "Oppa kung-fu style !" << this->getMeleeAttackDamage()
		<< " damages !" << std::endl;
}

void				ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name << " attacking " << target << std::endl;
	std::cout << "insane bullet lunched" << this->getRangedAttackDamage()
		<< " damages !" << std::endl; 
}

void				ScavTrap::takeDamage(unsigned int amount)
{
	int	true_damage;

	if (m_hitPoints <= 0)
	{
		std::cout << m_name << "\t: What the fuck, I'm already dead, stop it !";
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
		std::cout << LIGHT_RED"YOU DIED !" << RESET << std::endl;
	else
		std::cout << m_name << "\t: " << "This was close, I still have" << FLASH_GREEN
			<< m_hitPoints << RESET << " PV." << std::endl;
}

void					ScavTrap::beRepaired(unsigned int amount)
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

void					ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string		input;

	std::cout << "Welcome " << target << " ! you have to pass one of the following challenges" << std::endl;
	std::cout << "Choose your challenge :\n" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << i << "> " << m_challenge[i] << std::endl;
	std::cout << "enter index challenge : ";
	std::cin >> input;
	for (int i = 0; i < 5; i++)
	{
		if (std::stoi(input) == i)
		{
			std::cout << "You selected : " << m_challenge[i] << " !" << std::endl;
			return;
		}
		if (i == 4)
		{
			std::cout << "Wrong index /!\\, please retry ..." << std::endl;
			challengeNewcomer(target);
		}
	}
}

int			ScavTrap::getHitPoints(void) const
{
	return (m_hitPoints);
}

void			ScavTrap::setHitPoints(int const value)
{
	m_hitPoints = value;
}

void			ScavTrap::setMaxHitPoints(int const value)
{
	m_maxHitPoints = value;
}

int			ScavTrap::getEnergyPoints(void) const
{
	return (m_energyPoints);
}

void			ScavTrap::setEnergyPoints(int const value)
{
	m_energyPoints = value;
}

void			ScavTrap::setMaxEnergyPoints(int const value)
{
	m_maxEnergyPoints = value;
}

int			ScavTrap::getLevel(void) const
{
	return (m_level);
}

void			ScavTrap::setLevel(int const value)
{
	m_level = value;
}

std::string			ScavTrap::getName(void) const
{
	return (m_name);
}

void			ScavTrap::setName(std::string const value)
{
	m_name = value;
}

int			ScavTrap::getMeleeAttackDamage(void) const
{
	return (m_meleeAttackDamage);
}

void			ScavTrap::setMeleeAttackDamage(int const value)
{
	m_meleeAttackDamage = value;
}

int			ScavTrap::getRangedAttackDamage(void) const
{
	return (m_rangedAttackDamage);
}

void			ScavTrap::setRangedAttackDamage(int const value)
{
	m_rangedAttackDamage = value;
}

int			ScavTrap::getArmorDamageReduction(void) const
{
	return (m_armorDamageReduction);
}

void			ScavTrap::setArmorDamageReduction(int const value)
{
	m_armorDamageReduction = value;
}
