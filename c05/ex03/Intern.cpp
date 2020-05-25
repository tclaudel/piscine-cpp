#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern::~Intern(void)
{
}

Intern				&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Form				*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}
Form				*makeRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}
Form				*makePardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form				*Intern::makeForm(std::string form, const std::string target)
{
	std::string formnames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	std::cout << "target : " << form << std::endl;
	if (form != "shrubbery creation" && form != "robotomy request" && form != "presidential pardon")
		throw UnknownFormException();
	Form *(*make[3])(std::string)= { makeShrubbery, makeRobotomy, makePardon};
	for (int i = 0; i < 3; i++)
	{
		if (formnames[i] == form)
		{
			std::cout << "Intern creates " << formnames[i] << std::endl;
			return (make[i](target));
		}
	}
	return (NULL);
}

	/***********************************

			UnknownFormException

	***********************************/

Intern::UnknownFormException::UnknownFormException(void)
{
	return;
}

Intern::UnknownFormException::UnknownFormException(UnknownFormException const &obj)
{
	*this = obj;
	return;
}

Intern::UnknownFormException::~UnknownFormException(void) throw()
{
	return;
}

Intern::UnknownFormException &Intern::UnknownFormException::operator=(UnknownFormException const &r) 
{
	(void)r;
	return (*this);
}

const char* Intern::UnknownFormException::what() const throw()
{
	return ("ERROR [FORM]\t: Could not find this type of form");
}