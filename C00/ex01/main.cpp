/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 09:54:14 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/19 17:42:55 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.hpp"

std::string		s_toupper(std::string s)
{
	size_t		i = 0;

	while (i < s.size())
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}


int				main()
{
	std::string		input;
	Contact			phonebook[MAX_CONTACT];
	int				i = 0;

	display_welcome();
	input = display_menu();
	while (1)
	{
		if (input == "EXIT")
			display_exit();
		else if (input == "HELP")
			display_help();
		else if (input == "ADD")
		{
			if (i < MAX_CONTACT)
				phonebook[i++].addContact();
			else
				std::cout << "Sorry but you are full !\n";
		}
		else if (input == "SEARCH")
		{
			if (i == 0)
				std::cout << "Please add at least one contact\n";
			else
				show(phonebook, i);
		}
		input = display_menu();
	}
}