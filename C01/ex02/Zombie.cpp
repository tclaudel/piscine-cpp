/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 15:41:32 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/21 19:46:02 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(STRING name, STRING type) : m_name(name), m_type(type)
{
	advert();
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->m_name << " The zombie has been killed" << std::endl;
}

void	Zombie::advert(void)
{
	std::cout << "<" << this->m_name << " (" << this->m_type << ")>  Braiiiiiiinnnssss.." << std::endl;
	return;
}