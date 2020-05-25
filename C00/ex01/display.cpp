/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 10:48:53 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/19 17:51:09 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.hpp"

void			display_welcome()
{
	std::cout << "\n#####################################################################" << std::endl;
	std::cout << "                                                                 " << std::endl;
	std::cout << "    ______  _                         ______                _    " << std::endl;
	std::cout << "    | ___ \\| |                        | ___ \\              | |   " << std::endl;
	std::cout << "    | |_/ /| |__    ___   _ __    ___ | |_/ /  ___    ___  | | __" << std::endl;
	std::cout << "    |  __/ | '_ \\  / _ \\ | '_ \\  / _ \\| ___ \\ / _ \\  / _ \\ | |/ /" << std::endl;
	std::cout << "    | |    | | | || (_) || | | ||  __/| |_/ /| (_) || (_) ||   < " << std::endl;
	std::cout << "    \\_|    |_| |_| \\___/ |_| |_| \\___|\\____/  \\___/  \\___/ |_|\\_\\" << std::endl;
	std::cout << "                                                                 " << std::endl;
	std::cout << "                                                                 " << std::endl;
	std::cout << "#####################################################################" << std::endl;
	std::cout << std::endl << "Welcone, you can enter \"HELP\" to get some help !" << std::endl << std::endl;
}

void			display_exit()
{
	std::string		input;

	std::cout << "\nIf you exit, you will loose all your contact\nAre you sure (y/N) ? ";
	std::cin >> input;
	if (input == "Y" || input == "y")
	{
		std::cout << "Goodbye ! exiting ..." << std::endl;
		exit(0);
	}
	std::cout << std::endl;
}

std::string		display_menu()
{
	std::string		input;

	std::cout << YELLOW_BOLD"Phonebook : " << RESET ;
	getline(std::cin, input, '\n');
	if (std::cin.eof())
		exit(0);
	return (input);
}

void		display_help()
{
	std::string		input;

	std::cout << CLEAR;
	std::cout << WHITE_BOLD"\nDESCRIPTION :\n\n\tPHONEBOOK "
		<< RESET "is a simple phonebook whitch in you can enter 8 contacts no more\n\n";

	std::cout << WHITE_BOLD"\n\tADD" << RESET <<
		":\tThis is the why to add contacts in your phonebook\n\t\tThis will give you a form to complete\n\n";

	std::cout << WHITE_BOLD"\n\tSEARCH" << RESET <<
		":\tThis will display a resume of all your contacts\n\t\tThen you could enter a contact index to get more informations\n\n";
	std::cout << std::endl;
}
