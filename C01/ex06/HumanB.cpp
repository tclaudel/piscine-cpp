/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 15:36:03 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/22 16:26:50 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(STRING name) : m_name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}

void	HumanB::attack(void)
{
	COUT << m_name << " attacks with his " << m_weapon->getType() << ENDL;
}
