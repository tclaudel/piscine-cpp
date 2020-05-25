#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : m_name("none"), m_grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : m_name(name)
{
	setGrade(grade);
	std::cout << *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat			&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->m_grade = rhs.m_grade;
	return (*this);
}

void				Bureaucrat::operator+=(const int grade)
{
	setGrade(m_grade + grade);
	std::cout << m_name << " have been downgraded to " << m_grade << std::endl;
}

void				Bureaucrat::operator-=(const int grade)
{
	setGrade(m_grade - grade);
	std::cout << m_name << " have been upgraded to " << m_grade << std::endl;
}

std::ostream		&operator<<(std::ostream &flux, Bureaucrat const &rhs)
{
	flux << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (flux);
}

void				Bureaucrat::signForm(Form &rhs)
{
	if (rhs.getSigned() == true)
	{
		std::cout << m_name << " can't signs " << rhs.getName()
			<< " because it is already signed." << std::endl;
		return ;
	}
	try {
		rhs.beSigned(*this);
		std::cout << m_name << " signs " << rhs.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &)
	{
		std::cout << m_name << " can't signs " << rhs.getName()
			<< " because the grade was too low" << std::endl;
	}
}

void				Bureaucrat::execForm(Form const &rhs)
{
	try {
		std::cout << m_name << " executs " << rhs.getName() << std::endl;
		rhs.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

	/***********************************

			GradeTooHighException

	***********************************/

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &r) 
{
	(void)r;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR [BUREAUCRAT]\t: Grade < 1");
}

	/***********************************

			GradeTooLowException

	***********************************/

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &r) 
{
	(void)r;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{

	return ("ERROR [BUREAUCRAT]\t: grade > 150");
}

	/********************************

			GETTER // SETTER

	********************************/

const std::string	Bureaucrat::getName(void) const
{
	return (m_name);
}

int					Bureaucrat::getGrade(void) const
{
	return (m_grade);
}

void				Bureaucrat::setGrade(const int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade = grade;
}