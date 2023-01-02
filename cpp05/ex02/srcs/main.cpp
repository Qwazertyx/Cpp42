/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:58:41 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 13:08:07 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Form.hpp"
#include "../incl/Bureaucrat.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"

int main(void)
{
	PresidentialPardonForm form("robber");
	ShrubberyCreationForm form2("garden");
	RobotomyRequestForm form3("kids");

	std::cout << "\n" << std::endl;

	bureaucrat	vsedat;
	bureaucrat	boss("boss", 1);
	
	vsedat.executeForm(form);
	boss.executeForm(form);
	boss.executeForm(form2);
	boss.executeForm(form3);
	std::cout << std::endl;

	vsedat.signForm(form);
	std::cout << form << std::endl;
	boss.signForm(form);
	boss.signForm(form3);
	boss.signForm(form2);
	std::cout << std::endl;
	
	vsedat.executeForm(form);
	boss.executeForm(form);
	boss.executeForm(form3);
	boss.executeForm(form2);
	std::cout << std::endl;
	return (0);
}
