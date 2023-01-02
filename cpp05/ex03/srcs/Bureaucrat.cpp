/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:21:16 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 13:05:42 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"
#include "../incl/Form.hpp"

bureaucrat::bureaucrat() : name("bureaucrat"), grade(150)
{
	std::cout << "New bureaucrat created by default constructor" << std::endl;
}

bureaucrat::bureaucrat(std::string newname) : name(newname), grade(150)
{
	std::cout << "New bureaucrat '" << newname << "' has been created"<< std::endl;
}

bureaucrat::bureaucrat(int newgrade) : grade(newgrade)
{
	if (this->grade < 1)
		throw bureaucrat::grade_too_high_exception();
	if (this->grade > 150)
		throw bureaucrat::grade_too_low_exception();
	std::cout << "New bureaucrat has been created with the grade : " << grade << std::endl;
}

bureaucrat::bureaucrat(std::string newname, int newgrade) : name(newname), grade(newgrade)
{
	if (this->grade < 1)
		throw bureaucrat::grade_too_high_exception();
	if (this->grade > 150)
		throw bureaucrat::grade_too_low_exception();
	std::cout << "New bureaucrat '" << newname << "' has been created with the grade : " << grade << std::endl;
}

bureaucrat::bureaucrat(bureaucrat const &other)
{
	*this = other;
	std::cout << "New bureaucrat created by copy constructor" << std::endl;
}

bureaucrat::~bureaucrat()
{
	std::cout << "bureaucrat destroyed by destructor" << std::endl;
}

bureaucrat &bureaucrat::operator=(bureaucrat const &other)
{
	this->grade = other.getGrade();
	std::cout << "bureaucrat assignation operator called" << std::endl;
	return (*this);
}

void	bureaucrat::incrementGrade()
{
	this->grade--;
	try
	{
		if (this->grade < 1)
			throw bureaucrat::grade_too_high_exception();
		if (this->grade > 150)
			throw bureaucrat::grade_too_low_exception();
	}
	catch(const std::exception& e)
	{
		this->grade++;
		std::cerr << e.what() << std::endl;
	}
}

void	bureaucrat::decrementGrade()
{
	this->grade++;
	try
	{
		if (this->grade < 1)
			throw bureaucrat::grade_too_high_exception();
		if (this->grade > 150)
			throw bureaucrat::grade_too_low_exception();
	}
	catch(const std::exception& e)
	{
		this->grade--;
		std::cerr << e.what() << std::endl;
	}
}

int bureaucrat::getGrade() const
{
	return(this->grade);
}

std::string bureaucrat::getName() const
{
	return(this->name);
}

void	bureaucrat::signForm(Form &_form)
{
	try
	{
		_form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << _form.getName();
		std::cout << " because " << e.what() << std::endl;
		return;
	}
	std::cout << this->getName() << " signed " << _form.getName() << std::endl;

}

void bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " cannot execute " << form.getName()<< " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->name << " executed " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &outputfile, bureaucrat const &bc)
{
	outputfile << bc.getName() << ", bureaucrat grade " << bc.getGrade();
	return (outputfile);
}
