#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(const Peon &rhs);
		~Peon(void);
		Peon				&operator=(const Peon &rhs);
		void				getPolymorphed(void) const;

	private:
		Peon(void);
};

#endif