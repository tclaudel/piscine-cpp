/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:05:48 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/23 15:51:07 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{
	std::string		output;

	if (ac == 1)
		std::cout << std::cin.rdbuf();
	else
	{
		for (int i = 1; i < ac; i++)
		{
			output = av[i];
			std::ifstream   fd(output);
			if (!fd)
			{
				std::cout << "Could not open this fd : " << output << std::endl;
			}
			else
				std::cout << fd.rdbuf();
		}
	}
}