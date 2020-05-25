#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &copy);
		~Fixed(void);

		Fixed				&operator=(const Fixed &assigned);
		int					getRawBits(void) const;
		void				setRawBits(int const value);
		float				toFloat(void) const;
		int					toInt(void) const;

		bool				operator==(Fixed const &rhs) const;
		bool				operator!=(Fixed const &rhs) const;
		bool				operator<(Fixed const &rhs) const;
		bool				operator<=(Fixed const &rhs) const;
		bool				operator>(Fixed const &rhs) const;
		bool				operator>=(Fixed const &rhs) const;

		Fixed				operator+(Fixed const &rhs) const;
		Fixed				operator-(Fixed const &rhs) const;
		Fixed				operator/(Fixed const &rhs) const;
		Fixed				operator*(Fixed const &rhs) const;

		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);

		static Fixed		&min(Fixed &a, Fixed &B);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &B);
		static const Fixed	&max(Fixed const &a, Fixed const &b);

	private:
		int					m_rawBits;
		static const int	m_fractionalBits;
};

std::ostream				&operator<<(std::ostream &out, Fixed const &in);

#endif