/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 12:49:48 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/21 15:05:44 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void			Pony::setName(std::string name)
{
	m_name = name;
}

void			Pony::setOwner(std::string owner)
{
	m_owner = owner;
}

void			Pony::setAge(int age)
{
	m_age = age;
}

std::string		Pony::getName(void)
{
	return (m_name);
}

std::string		Pony::getOwner(void)
{
	return (m_owner);
}

int				Pony::getAge(void)
{
	return (m_age);
}
