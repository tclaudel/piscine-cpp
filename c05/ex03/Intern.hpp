#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &rhs);
		~Intern(void);
		Intern				&operator=(const Intern &rhs);
		
		class UnknownFormException : public std::exception
		{
			public:
				UnknownFormException(void);
				UnknownFormException(const UnknownFormException &);
				UnknownFormException	&operator=(UnknownFormException const &rhs);
				virtual ~UnknownFormException(void) throw();
				virtual const char *what() const throw();
		};

		Form	*makeForm(std::string form, std::string target);
	private:
};

#endif