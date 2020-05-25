/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 10:55:00 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/27 10:49:33 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::m_bitsNb = 8;

Fixed::Fixed(void) : m_rawBits(0) : m_bitsNb(0);
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed			&Fixed::operator=(const Fixed &affected)
{
	std::cout << "Assignation operator called" << std::endl;
	this->m_rawBits = affected.getRawBits();
	return (*this);
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_rawBits);
}

void			Fixed::setRawBits(int const value)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_rawBits = value;
}
