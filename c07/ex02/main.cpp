/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 11:34:05 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/07 11:45:00 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int		main(void)
{
	try {
	Array<int>	intarray(10);

	intarray[1] = 5;
	std::cout << intarray[1] << std::endl;
	std::cout << intarray.size() << std::endl;
	std::cout << intarray[15] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "index does not exist" << std::endl;
	}
}