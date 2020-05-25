#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
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

	private:
		int					m_rawBits;
		static const int	m_fractionalBits;
};

std::ostream				&operator<<(std::ostream &out, Fixed const &in);

#endif