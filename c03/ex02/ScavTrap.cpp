#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() 
{
}

ScavTrap::ScavTrap(const std::string name) : 
	ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy effected propelly" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << m_name << " has been shutted down." << std::endl;
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

void					ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string		input;

	m_challenge[0] = "Try to swim in lava";
	m_challenge[1] = "Ice bucket challenge";
	m_challenge[2] = "School breacker";
	m_challenge[3] = "A4 challenge";
	m_challenge[4] = "Russian roulette";
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
