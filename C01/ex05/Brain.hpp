#ifndef BRAIN_HPP
# define BRAIN_HPP

# define STRING std::string
# define COUT std::cout
# define ENDL std::endl

# include <string>
# include <iostream>
# include <sstream>

class Brain
{
	public:

		Brain(void);
		~Brain(void);
		STRING		identify();

	private:
		STRING		m_address;

};

#endif
