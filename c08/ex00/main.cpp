/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 14:29:10 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/07 15:26:51 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "easyfind.hpp"

int		main(void)
{
	std::list<int>  lst;
	int to_find = 150;

	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(150);
	lst.push_back(45);

	try
	{
		easyfind<std::list<int>> (lst, to_find);
		std::cout << "occurence found" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "could not find the occurence" << std::endl;
	}
	
}