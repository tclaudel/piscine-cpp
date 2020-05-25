/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 15:48:27 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/21 12:46:35 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.hpp"

Contact::Contact() : m_firstName(""), m_lastName(""), m_nickname(""), m_login(""),
	m_postalAddress(""), m_emailAddress(""), m_phoneNumber(""), m_birthdayDate(""),
	m_favoriteMeal(""), m_underwearColor(""), m_darkestSecret("")
{
}

std::string		askForInformation(std::string key)
{
	std::string		value;

	if (key.size() >= 8) 
		std::cout << key << "\t: ";
	else
		std::cout << key << "\t\t: ";
	getline(std::cin, value, '\n');
	return (value);
}

void			Contact::addContact()
{
	std::cout << CLEAR;
	std::cout << "Creating new contact :\n\n";
	m_firstName = askForInformation("first name");
	m_lastName = askForInformation("last name");
	m_nickname = askForInformation("nickname");
	m_login = askForInformation("login");
	m_postalAddress = askForInformation("postal");
	m_emailAddress = askForInformation("email address");
	m_phoneNumber = askForInformation("phone number");
	m_birthdayDate = askForInformation("birthday date");
	m_favoriteMeal = askForInformation("favorite meal");
	m_underwearColor = askForInformation("underwear color");
	m_darkestSecret = askForInformation("darkest secret");
	std::cout << RESET << FLASH_GREEN"Contact Succesfully created\n" << RESET << std::endl;
}

void			displayTruncated(std::string s)
{
	char	nb_of_spaces;

	if (s.size() > 10)
	{
		s.erase(9);
		s.push_back('.');
		std::cout << s;
	}
	else
	{
		nb_of_spaces = 10 - s.size();
		while (nb_of_spaces--)
			std::cout << " ";
		std::cout << s;
	}
	
}

void			Contact::showBasics(int i)
{
	std::cout << "|         " << i << "|";
	displayTruncated(m_firstName);
	std::cout <<  "|";
	displayTruncated(m_lastName);
	std::cout << "|";
	displayTruncated(m_nickname);
	std::cout << "|" << std::endl;
}

void			showInfo(std::string key, std::string value)
{
	std::cout << "\t";
	if (key.size() >= 8) 
		std::cout << key << "\t: ";
	else
		std::cout << key << "\t\t: ";
	std::cout << value << std::endl;
}

void			Contact::showMore()
{
	std::cout << std::endl;
	showInfo("first name", m_firstName);
	showInfo("last name", m_lastName);
	showInfo("nickname", m_nickname);
	showInfo("login", m_login);
	showInfo("Postal address", m_postalAddress);
	showInfo("Email ddress", m_emailAddress);
	showInfo("Phone number", m_phoneNumber);
	showInfo("Birthday date", m_birthdayDate);
	showInfo("Favorite meal", m_favoriteMeal);
	showInfo("Underwear color",m_underwearColor);
	showInfo("Darkest secret", m_darkestSecret);
	std::cout << std::endl;
}

void			show(Contact phonebook[], int nb_of_contact)
{
	int	i = 0;
	std::string contact;
	int i_contact;

	std::cout << CLEAR;
	std::cout << "Showing all your contacts :\n\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	while (i < nb_of_contact)
	{
		phonebook[i].showBasics(i);
		i++;
	}
	std::cout << "\nwould you like to see more about a contact ?\nInsert his index : ";
	getline(std::cin, contact, '\n');
	i_contact = std::stoi(contact);
	if (i > nb_of_contact || i <= 0)
	{
		std::cout << "Can't find contact at this index !\n\n";
		show(phonebook, nb_of_contact);
	}
	else
		phonebook[i_contact].showMore();
}