#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <exception>

# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &rhs);
		virtual ~Bureaucrat(void);
		Bureaucrat			&operator=(const Bureaucrat &rhs);
		void				operator+=(int const grade);
		void				operator-=(int const grade);

		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				setGrade(const int grade);

		void				signForm(Form &rhs);

		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &);
				GradeTooHighException	&operator=(GradeTooHighException const &rhs);
				virtual ~GradeTooHighException(void) throw();
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException &);
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException	&operator=(GradeTooLowException const &rhs);
				virtual const char 		*what() const throw();
		};

	private:
		const std::string	m_name;
		int					m_grade;
};

std::ostream	&operator<<(std::ostream &flux, Bureaucrat const &rhs);

#endif