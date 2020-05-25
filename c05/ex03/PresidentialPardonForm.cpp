#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("Presidential Pardon", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : Form(rhs.getName(), 25, 5, getTarget())
{
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm			&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

void							PresidentialPardonForm::m_execute(Bureaucrat const &executor) const
{
	std::cout << executor.getName() << " : " << getTarget() << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}