#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(const std::string name, int exec_grade, int signed_grade, const std::string target);
		Form(const Form &rhs);
		~Form(void);
		Form				&operator=(const Form &rhs);

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

		class NotSignedException : public std::exception
		{
			public:
				NotSignedException(void);
				NotSignedException(const NotSignedException &);
				virtual ~NotSignedException(void) throw();
				NotSignedException	&operator=(NotSignedException const &rhs);
				virtual const char 		*what() const throw();
		};

		void				beSigned(Bureaucrat &rhs);
		void				execute(Bureaucrat const &exuctor) const;

//		GETTER // SETTER

		std::string			getName(void) const;
		bool				getSigned(void) const;
		int					getExecGrade(void) const;
		int					getSignedGrade(void) const;
		std::string			getTarget(void) const;

	private:
		std::string			m_name;
		bool				m_signed;
		const int			m_execGrade;
		const int			m_signedGrade;
		std::string			m_target;

		virtual void		m_execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &flux, Form const &rhs);

#endif