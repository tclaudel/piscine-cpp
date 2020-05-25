/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 09:58:30 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/03 14:37:10 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int			main(void)
{
	try {
		Bureaucrat	Michel("michel", 150);
		Bureaucrat	Bob("bob", 1);
		ShrubberyCreationForm Shrubbery("mjalenqu");
		RobotomyRequestForm Robotomy("mjalenqu");
		PresidentialPardonForm PresidentialPardon("mjalenqu");
		Michel.signForm(Shrubbery);
		std::cout << Shrubbery;
		Michel.execForm(Shrubbery);
		Bob.signForm(Shrubbery);
		Bob.signForm(Robotomy);
		Bob.signForm(PresidentialPardon);
		std::cout << Shrubbery;
		std::cout << Robotomy;
		Bob.execForm(Shrubbery);
		Bob.execForm(Robotomy);
		Bob.execForm(PresidentialPardon);
		Intern		Random;
		delete 		Random.makeForm("shrubbery creation", "mhouppin");

		// dele
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}