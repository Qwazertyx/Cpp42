/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:58:41 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 14:06:56 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Form.hpp"
#include "../incl/Intern.hpp"
#include "../incl/Bureaucrat.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"

int main(void)
{
	Intern intern;
	Form *formPresidential = intern.makeForm("presidential pardon", "boss1");
	Form *formShrubbery = intern.makeForm("shrubbery creation", "tree");
	Form *formRobotomy = intern.makeForm("robotomy request", "tv");
	Form *inexitentForm = intern.makeForm("void", "void");
	std::cout << '\n' << std::endl;
	
	bureaucrat bureaucrat("vsedat", 1);
	bureaucrat.executeForm(*formPresidential);
	bureaucrat.signForm(*formPresidential);
	bureaucrat.executeForm(*formPresidential);
	bureaucrat.executeForm(*formShrubbery);
	bureaucrat.signForm(*formShrubbery);
	bureaucrat.executeForm(*formShrubbery);
	bureaucrat.executeForm(*formRobotomy);
	bureaucrat.signForm(*formRobotomy);
	bureaucrat.executeForm(*formRobotomy);
	std::cout << '\n' << std::endl;
	
	delete formPresidential;
	delete formRobotomy;
	delete formShrubbery;
	delete inexitentForm;
	return (0);
}
