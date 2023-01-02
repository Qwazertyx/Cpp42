/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:16:09 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 12:11:39 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	std::cout << "New PresidentialPardonForm created by default constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destroyed by destructor" << std::endl;
}

bool PresidentialPardonForm::execute(bureaucrat const &executor) const
{
	if (Form::execute(executor))
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
		return (1);
	}
	return (0);
}

std::ostream &operator<<(std::ostream &outputfile, PresidentialPardonForm const &var)
{
	outputfile << var.getName() << ", PresidentialPardonForm with a sign-grade required of '" << var.getsigngrade();
	std::cout << "' ,an exec-grade required of '" << var.getexecgrade() << "' and '" << var.getTarget() << "' as a target";
	var.getsign() == 1 ? std::cout << " is signed" : std::cout << " isn't signed";
	return (outputfile);
}
