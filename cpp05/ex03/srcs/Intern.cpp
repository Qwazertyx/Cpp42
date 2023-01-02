/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:44:57 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 14:05:59 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>
#include "../incl/Intern.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout << "New Intern created by default constructor" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed by destructor" << std::endl;
}

Intern::Intern(Intern const& other)
{
	*this = other;
	std::cout << "New Intern created by copy constructor" << std::endl;
}

Intern	&Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string namesArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	Form	*(Intern::*createForm[3])(std::string target) = { &Intern::createShrubberyForm,
&Intern::createRobotomyForm, &Intern::createPresidentialForm};
	
	for(int i = 0; i < 3; i++)
	{
		if(name == namesArray[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*createForm[i])(target));
		}
	}
	std::cout << name << " is not a valid form." << std::endl;
	return (NULL);
}

Form *Intern::createPresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::createRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::createShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
