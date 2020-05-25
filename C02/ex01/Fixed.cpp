#include "Fixed.hpp"

const int	Fixed::m_fractionalBits = 8;

Fixed::Fixed(void) : m_rawBits(0), m_fractionalBits(0)
{
}

Fixed::Fixed(const int value) : m_rawBits(value)
{
	m_rawBits = value << Fixed::m_fractionalBits;
}

Fixed::Fixed(const float value)
{
	m_rawBits = (int)roundf(value * (1 << Fixed::m_fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed(void)
{
}

Fixed			&Fixed::operator=(const Fixed &assigned)
{
	this->m_rawBits = assigned.getRawBits();
	return (*this);
}

int				Fixed::getRawBits(void) const
{
	return (m_rawBits);
}

void			Fixed::setRawBits(int const value)
{
	m_rawBits = value;
}

int				Fixed::toInt(void) const
{
	return ((int)(m_rawBits >> m_fractionalBits));
}

float			Fixed::toFloat(void) const
{
	return (m_rawBits / (float)(1 << Fixed::m_fractionalBits));
}

std::ostream	&operator<<(std::ostream &fdout, Fixed const &number)
{
	fdout << number.toFloat();
	return (fdout);
}