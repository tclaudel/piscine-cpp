/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 09:58:30 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/02 14:58:02 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main(void)
{
	try {
		Bureaucrat	Michel("michel", 50);
		Form		form1("form1", 50, 50);
		Form		form2("form1", 50, 50);
		Michel.signForm(form1);
		Michel += 5;
		std::cout << Michel;
		Michel.signForm(form2);
		std::cout << form2;
		Michel -= 10;
		Michel.signForm(form2);
		std::cout << form2;
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