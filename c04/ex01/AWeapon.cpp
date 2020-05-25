#include "AWeapon.hpp"

AWeapon::AWeapon(void) : m_name("none"), m_APCost(0), m_damage(0), m_outputOfAttack("none")
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage, 
	std::string outputOfAttack) :
	m_name(name), m_APCost(apcost), m_damage(damage), m_outputOfAttack(outputOfAttack)
{
	std::cout << m_name << " weapon has been created with these stats :" << std::endl;
	std::cout << "\tAP cost\t: " << m_APCost << std::endl;
	std::cout << "\tdamage\t: " << m_damage << std::endl;
	std::cout << "\toutput\t: " << m_outputOfAttack << std::endl << std::endl;
}

AWeapon::AWeapon(const AWeapon &rhs)
{
	*this = rhs;
}

AWeapon::~AWeapon(void)
{
}

AWeapon				&AWeapon::operator=(const AWeapon &rhs)
{
	this->m_name = rhs.m_name;
	this->m_APCost = rhs.m_APCost;
	this->m_damage = rhs.m_damage;
	this->m_outputOfAttack = rhs.m_outputOfAttack;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			AWeapon::getName(void) const
{
	return (m_name);
}

int					AWeapon::getAPCost(void) const
{
	return (m_APCost);
}

int					AWeapon::getDamage(void) const
{
	return (m_damage);
}

std::string			AWeapon::getOutputOfAttack(void) const
{
	return (m_outputOfAttack);
}