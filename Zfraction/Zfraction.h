#ifndef ZFRACTION_H
# define ZFRACTION_H

# include <iostream>

class	Zfraction
{
	public:

	Zfraction();
	void	minimize_fraction(int num, int den);

	private;

	int		m_num;
	int		m_den;
	double	result;
};

#endif