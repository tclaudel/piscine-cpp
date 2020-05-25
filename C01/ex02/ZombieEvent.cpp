/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 15:56:09 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/21 21:23:40 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(STRING type)
{
	this->m_type = type;
}

ZombieEvent::~ZombieEvent(void) 
{
	std::cout << "Zombie Events done" << std::endl;
	return;
}

void	ZombieEvent::setZombieType(STRING type)
{
	this->m_type = type;
	std::cout << "Zombie type has been set to: " << this->m_type << std::endl;
	return;
}

Zombie	*ZombieEvent::newZombie(STRING name)
{
	Zombie	*zombie = new Zombie(name, this->m_type);
	return (zombie);
}

Zombie	*ZombieEvent::randomChump()
{
	int		i = rand() % 10;
	STRING	name;

	if (i == 0)
		name = "Jerome";
	else if (i == 1)
		name = "Gontran";
	else if (i == 2)
		name = "timothee";
	else if (i == 3)
		name = "corentin";
	else if (i == 4)
		name = "enzo";
	else if (i == 5)
		name = "kevin";
	else if (i == 6)
		name = "samuel";
	else if (i == 7)
		name = "pierrick";
	else if (i == 8)
		name = "richard";
	else if (i == 9)
		name = "marcus";
	Zombie *zombie = new Zombie(name, this->m_type);
	return (zombie);
}