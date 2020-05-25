/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 14:54:12 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/19 17:09:43 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "lib.hpp"

class Contact
{
	public:

	Contact();
	void			addContact();
	void			displayValues();
	void			showBasics(int i);
	void			showMore();
	std::string		getValues(std::string key);

	private:

	std::string		m_firstName;
	std::string		m_lastName;
	std::string		m_nickname;
	std::string		m_login;
	std::string		m_postalAddress;
	std::string		m_emailAddress;
	std::string		m_phoneNumber;
	std::string		m_birthdayDate;
	std::string		m_favoriteMeal;
	std::string		m_underwearColor;
	std::string		m_darkestSecret;
};

void				displayTruncated();
void				show(Contact *phonebook, int nb_of_contact);
void				showInfo(std::string key, std::string value);

#endif