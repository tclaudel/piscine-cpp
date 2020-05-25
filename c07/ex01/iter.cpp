/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 10:55:34 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/07 11:13:01 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

template	<typename T>

void	print(T &rhs)
{
	try {
		std::cout << rhs << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "can't display it" << std::endl;
	}
}

template	<typename T>

void	iter(T* addr, size_t len, void (*func)(T &))
{
	for (size_t i = 0; i < len; i++)
		func(addr[i]);
}

int		main(int ac, char **av)
{
	iter(av, ac, &print);
	int		inttab[] = {
		1, 5, 456
	};
	iter(inttab, 3, &print);
}