#include "Form.hpp"

Form::Form(void) : m_name("none"), m_signed(0), m_execGrade(0), m_signedGrade(0), m_target(NULL)
{
}

Form::Form(const std::string name, int exec_grade, int signed_grade, const std::string target) :
	m_name(name), m_signed(0), m_execGrade(exec_grade), m_signedGrade(signed_grade), m_target(target)
{
	if (m_execGrade < 1 || m_signedGrade < 1)
		throw Form::GradeTooHighException();
	else if (m_execGrade > 150 || m_signedGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << *this;
}

Form::Form(const Form &rhs) :
	m_execGrade(rhs.m_execGrade), m_signedGrade(rhs.m_signedGrade)
{
	*this = rhs;
}

Form::~Form(void)
{
}

Form				&Form::operator=(const Form &rhs)
{
	this->m_signed = rhs.m_signed;
	return (*this);
}

std::ostream		&operator<<(std::ostream &flux, Form const &rhs)
{
	flux << "Form state :" << std::endl << std::endl
		<< "\tName\t\t\t: " << rhs.getName() << std::endl
		<< "\tSigning need grade\t: " << rhs.getSignedGrade() << std::endl
		<< "\tExecute need grade\t: " << rhs.getExecGrade() << std::endl
		<< "\ttarget\t\t\t: " << rhs.getTarget() << std::endl;
	flux << "\tSign\t\t\t: " << (rhs.getSigned() ? "[X]" : "[ ]") << std::endl << std::endl;
	return (flux);
}

void				Form::beSigned(Bureaucrat &rhs)
{
	if (rhs.getGrade() > m_signedGrade)
		throw GradeTooLowException();
	m_signed = true;
}

void				Form::execute(Bureaucrat const &rhs) const
{
	if (!m_signed)
		throw NotSignedException();
	else if (rhs.getGrade() > m_execGrade)
		throw GradeTooLowException();
	m_execute(rhs);
	
}

	/***********************************

			GradeTooHighException

	***********************************/

Form::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
	return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &r) 
{
	(void)r;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("ERROR [FORM]\t: Grade < 1");
}

	/***********************************

			GradeTooLowException

	***********************************/

Form::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
	return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &r) 
{
	(void)r;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("ERROR [FORM]\t: grade > 150");
}

	/***********************************

			NotSignedException

	***********************************/

Form::NotSignedException::NotSignedException(void)
{
	return;
}

Form::NotSignedException::NotSignedException(NotSignedException const &obj)
{
	*this = obj;
	return;
}

Form::NotSignedException::~NotSignedException(void) throw()
{
	return;
}

Form::NotSignedException &Form::NotSignedException::operator=(NotSignedException const &r) 
{
	(void)r;
	return (*this);
}

const char* Form::NotSignedException::what() const throw()
{
	return ("ERROR [FORM]\t: Not signed");
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			Form::getName(void) const
{
	return (m_name);
}

bool				Form::getSigned(void) const
{
	return (m_signed);
}

int					Form::getExecGrade(void) const
{
	return (m_execGrade);
}

int					Form::getSignedGrade(void) const
{
	return (m_signedGrade);
}

std::string			Form::getTarget(void) const
{
	return (m_target);
}