/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 12:49:43 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/21 15:24:22 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony() : m_name(""), m_owner(""), m_age(0)
{
}

static void		ponyOnTheStack(void)
{
	Pony	didier;

	didier.setName("didier");
	didier.setOwner("thomas");
	didier.setAge(1);
	std::cout << "Name\t: " << didier.getName() << std::endl;
	std::cout << "Owner\t: " << didier.getOwner() << std::endl;
	std::cout << "Age\t: " << didier.getAge() << std::endl;
	didier.setOwner("Mhaman");
	std::cout << didier.getName() << " has been redeem by " << didier.getOwner() << std::endl;
}

static void		ponyOnTheHeap(void)
{
	Pony	*jaques = new Pony();

	jaques->setName("jaques");
	jaques->setOwner("bubu");
	jaques->setAge(3);
	std::cout << "Name\t: " << jaques->getName() << std::endl;
	std::cout << "Owner\t: " << jaques->getOwner() << std::endl;
	std::cout << "Age\t: " << jaques->getAge() << std::endl;
	delete jaques;
	jaques = NULL;
	if (jaques == NULL)
		std::cout << "jaques has been freed" << std::endl;
}

int				main(void)
{
	std::cout << "Creating Pony didier on the Stack" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "Creating Pony Jacques on the Heap" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
}