/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 15:41:32 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/21 21:24:02 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(string name, string type) : m_name(name), m_type(type)
{
	advert();
	return;
}

Zombie::~Zombie(void)
{
	cout << this->m_name << " The zombie has been killed" << endl;
}

void	Zombie::advert(void)
{
	cout << "<" << this->m_name << " (" << this->m_type << ")>  Braiiiiiiinnnssss.." << endl;
	return;
}

string	Zombie::randomName(void)
{
	string		names[10] = {"Jac Jackson", "Vicki Rodrigues", "Suzanne Pike",
		"Wiktoria Dudley", "Joshua Roman", "Hebe Peterson", "Emerson Melendez",
		"Akshay Mata", "Ruairi Mccaffrey", "Ace Mack"};
	return(names[rand() % 10]);
}

void	Zombie::setName(void)
{
	m_name = this->randomName();
}

void	Zombie::setType(string	type)
{
	m_type = type;
}