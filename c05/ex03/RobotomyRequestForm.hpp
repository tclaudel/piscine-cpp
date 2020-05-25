#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm(void);
		RobotomyRequestForm			&operator=(const RobotomyRequestForm &rhs);

		void	m_execute(Bureaucrat const &executor) const;

	private:
		RobotomyRequestForm(void);
};

#endif