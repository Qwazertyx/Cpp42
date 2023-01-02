/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:27:28 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 13:03:49 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/RobotomyRequestForm.hpp"
#include <iostream>
#include <math.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
	std::cout << "New RobotomyRequestForm created by default constructor" << std::endl;
}

bool RobotomyRequestForm::execute(bureaucrat const &executor) const
{
	if (Form::execute(executor))
	{
		std::srand((unsigned int)time(NULL));
		(rand() % 2) != 0 ?
			(std::cout << "Robotomization Failure" << std::endl)
			: (std::cout << "Beeeep Bzzztrrrrr beeeeeeeep! " << this->getTarget() << " has been robotomized successfully" << std::endl);
		return (1);
	}
	return (0);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destroyed by destructor" << std::endl;
}


std::ostream &operator<<(std::ostream &outputfile, RobotomyRequestForm const &var)
{
	outputfile << var.getName() << ", RobotomyRequestForm with a sign-grade required of '" << var.getsigngrade();
	std::cout << "' ,an exec-grade required of '" << var.getexecgrade() << "' and '" << var.getTarget() << "' as a target";
	var.getsign() == 1 ? std::cout << " is signed" : std::cout << " isn't signed";
	return (outputfile);
}
