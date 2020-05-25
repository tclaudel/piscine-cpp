#include "FragTrap.hpp"

FragTrap::FragTrap(void) : m_name("none"), m_hitPoints(0), m_maxHitPoints(0),
	m_energyPoints(0), m_maxEnergyPoints(0), m_level(1), m_meleeAttackDamage(0),
	m_rangedAttackDamage(0), m_armorDamageReduction(0)
{

}

FragTrap::FragTrap(std::string name) : m_name(name), m_hitPoints(100), m_maxHitPoints(100),
	m_energyPoints(100), m_maxEnergyPoints(100), m_level(1), m_meleeAttackDamage(30),
	m_rangedAttackDamage(20), m_armorDamageReduction(5)
{
	srand(time(0));
	std::cout << m_name << " constructed with this attributes :" << std::endl;
	std::cout << "\tHit points\t\t\t: " << m_hitPoints << std::endl;
	std::cout << "\tMax hit points\t\t\t: " << m_maxHitPoints << std::endl;
	std::cout << "\tEnergy points\t\t\t: " << m_energyPoints << std::endl;
	std::cout << "\tMax energy points\t\t: " << m_maxEnergyPoints << std::endl;
	std::cout << "\tlevel\t\t\t\t: " << m_level << std::endl;
	std::cout << "\tMelee attack damage\t\t: " << m_meleeAttackDamage << std::endl;
	std::cout << "\tRanged attack damage\t\t: " << m_rangedAttackDamage << std::endl;
	std::cout << "\tArmor damage reduction\t\t: " << m_armorDamageReduction << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
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

void			FragTrap::takeDamage(unsigned int amount)
{
	int	true_damage;

	if (m_hitPoints == 0)
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
	if (m_hitPoints == 0)
		std::cout << LIGHT_RED"YOU DIED !" << RESET << std::endl;
	else
		std::cout << m_name << "\t: " << "This was close, I still " << FLASH_GREEN
			<< m_hitPoints << RESET << " PV." << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
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



	//	Getter - Setter

int				FragTrap::getHitPoints(void) const
{
	return (m_hitPoints);
}

void			FragTrap::setHitPoints(int const value)
{
	m_hitPoints = value;
}

int				FragTrap::getMaxHitPoints(void) const
{
	return (m_maxHitPoints);
}

int				FragTrap::getEnergyPoints(void) const
{
	return (m_energyPoints);
}

void			FragTrap::setEnergyPoints(int const value)
{
	m_energyPoints = value;
}

int				FragTrap::getMaxEnergyPoints(void) const
{
	return (m_maxEnergyPoints);
}

int				FragTrap::getLevel(void) const
{
	return (m_level);
}

void			FragTrap::setLevel(int const value)
{
	m_level = value;
}

std::string		FragTrap::getName(void) const
{
	return (m_name);
}

void			FragTrap::setName(std::string const value)
{
	m_name = value;
}

int				FragTrap::getMeleeAttackDamage(void) const
{
	return (m_meleeAttackDamage);
}

void			FragTrap::setMeleeAttackDamage(int const value)
{
	m_meleeAttackDamage = value;
}

int				FragTrap::getRangedAttackDamage(void) const
{
	return (m_rangedAttackDamage);
}

void			FragTrap::setRangedAttackDamage(int const value)
{
	m_rangedAttackDamage = value;
}

int				FragTrap::getArmorDamageReduction(void) const
{
	return (m_armorDamageReduction);
}

void			FragTrap::setArmorDamageReduction(int const value)
{
	m_armorDamageReduction = value;
}
