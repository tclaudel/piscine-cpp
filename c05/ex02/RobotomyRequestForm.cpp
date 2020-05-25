#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy Request", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : Form(rhs.getName(), 72, 45, getTarget())
{
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

void						RobotomyRequestForm::m_execute(Bureaucrat const &executor) const
{
	std::cout << "*TAC TAC TAC *" << std::endl;
	std::cout << executor.getName() << " has been robotomized" << std::endl;
}

