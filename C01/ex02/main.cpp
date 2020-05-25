/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 17:46:37 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/25 16:16:58 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie	*Jaques;
	Zombie	*Michel;

	srand(time(0));
	std::cout << "Spawning zombie on Stack:" << std::endl;
	Zombie Arta = Zombie("Arta", "Learner");
	std::cout << std::endl << "Spawning zombie Event on Heap" << std::endl;
	ZombieEvent	*School = new ZombieEvent("learner");
	std::cout << std::endl << "Setting Zombie type to pole emploi" << std::endl;
	School->setZombieType("Chomeur");
	std::cout << std::endl << "Phillipe contaminated another one" << std::endl;
	Jaques = School->newZombie("Phillipe");
	Michel = School->randomChump();
	delete School;
	delete Jaques;
	delete Michel;
	return (0);
}