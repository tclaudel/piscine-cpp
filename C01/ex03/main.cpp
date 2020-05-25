/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 19:54:42 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/21 21:23:51 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main()
{
	int		n;
	string	nbr;

	srand(time(0));
	cout << "Next wave of zombies are comming, How much would you like to fight ?" << endl;
	std::cin >> nbr;
	n = std::stoi(nbr);
	ZombieHorde wave = ZombieHorde(n);
	wave.announce();
	cout << endl << "End of the wave" << endl;
}