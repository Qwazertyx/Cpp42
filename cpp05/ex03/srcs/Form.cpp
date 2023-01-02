/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:34:06 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 12:04:31 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Form.hpp"
#include "../incl/Bureaucrat.hpp"

Form::Form() : name("Form"), sign(0), signgrade(150), execgrade(150)
{
	std::cout << "New Form created by default constructor" << std::endl;
}

Form::Form(std::string newname, int newsigngrade, int newexecgrade)
: name(newname), sign(0), signgrade(newsigngrade), execgrade(newexecgrade)
{
	if (this->signgrade < 1 || this->execgrade < 1)
		throw Form::grade_too_high_exception();
	if (this->signgrade > 150 || this->signgrade > 150)
		throw Form::grade_too_low_exception();
	std::cout << "New Form '" << newname << "' has been created with a sign-grade required of '";
	std::cout << signgrade << "' and an exec-grade required of '" << execgrade << "'" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destroyed by destructor" << std::endl;
}

Form &Form::operator=(Form const &other)
{
	this->sign = other.getsign();
	std::cout << "Form assignation operator called" << std::endl;
	return (*this);
}

Form::Form(Form const& other) : name(other.getName()), signgrade(other.getsigngrade()), execgrade(other.getexecgrade())
{
	*this = other;
	std::cout << "New Form created by copy constructor" << std::endl;
}

std::string Form::getName() const
{
	return(this->name);
}

int Form::getsigngrade() const
{
	return(this->signgrade);
}

int Form::getexecgrade() const
{
	return(this->execgrade);
}

bool Form::getsign() const
{
	return(this->sign);
}

std::string	Form::getTarget() const
{
	return (this->target);
}

void Form::setTarget(std::string target)
{
	this->target = target;
}

void Form::beSigned(bureaucrat const &signer)
{
	if (signer.getGrade() <= this->signgrade)
		this->sign = 1;
	else
		throw Form::grade_too_low_exception();
}

bool Form::execute(bureaucrat const &executor) const
{
	if (!this->getsign())
	{
		throw Form::NotSignedException();
		return 0;
	}
	if (executor.getGrade() > this->getexecgrade())
	{
		throw Form::grade_too_low_exception();
		return 0;
	}
	return 1;
}

std::ostream &operator<<(std::ostream &outputfile, Form const &var)
{
	outputfile << var.getName() << ", Form with a sign-grade required of '" << var.getsigngrade();
	std::cout << "' and an exec-grade required of '" << var.getexecgrade();
	var.getsign() == 1 ? std::cout << "' is signed" : std::cout << "' isn't signed";
	return (outputfile);
}
