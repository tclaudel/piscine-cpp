/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 20:25:30 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/23 12:18:49 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : m_amount(n)
{
	this->m_horde = new Zombie[n];
	int		i = 0;

	while (i < n)
	{
		this->m_horde[i].setName();
		this->m_horde[i].setType("Horde");
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->m_horde;
}

void		ZombieHorde::announce(void)
{
	int		i = 0;
	while (i < this->m_amount)
	{
		this->m_horde[i].advert();
		i++;
	}
}


