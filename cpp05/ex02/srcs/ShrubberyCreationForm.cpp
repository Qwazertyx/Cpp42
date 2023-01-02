/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:31:53 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 13:34:09 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
	std::cout << "New ShrubberyCreationForm created by default constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destroyed by destructor" << std::endl;
}


void ShrubberyCreationForm::createfile()const
{
	std::string line;
	std::string name = this->getTarget() + "_shrubbery";
	std::ofstream outputfile(name.c_str());

	if(outputfile)
	{
outputfile <<"     ccee88oo" 					<< std::endl;
outputfile <<"  C8O8O8Q8PoOb o8oo" 			<< std::endl;
outputfile <<" dOB69QO8PdUOpugoO9bD"			 << std::endl;
outputfile <<"CgggbU8OU qOp qOdoUOdcb" 		<< std::endl;
outputfile <<"    6OuU  /p u gcoUodpP" 		<< std::endl;
outputfile <<"      |||//  /douUP" 			<< std::endl;
outputfile <<"        ||////" 				<< std::endl;
outputfile <<"         |||/|" 				<< std::endl;
outputfile <<"         ||||||" 				<< std::endl;
outputfile <<"         ||||||" 				<< std::endl;
outputfile <<"   .....//|||||...." 			<< std::endl;

outputfile << "888                            " 	<< std::endl;
outputfile << "888                            " 	<< std::endl;
outputfile << "888                            " 	<< std::endl;
outputfile << "888888 888d888 .d88b.  .d88b.  " 	<< std::endl;
outputfile << "888    888P'   d8P  Y8bd8P  Y8b " 	<< std::endl;
outputfile << "888    888    8888888888888888 " 	<< std::endl;
outputfile << "Y88b.  888    Y8b.    Y8b.     " 	<< std::endl;
outputfile << " 'Y888 888     'Y8888  'Y8888 " 	<< std::endl;

outputfile <<"     ccee88oo" 					<< std::endl;
outputfile <<"  C8O8O8Q8PoOb o8oo" 			<< std::endl;
outputfile <<" dOB69QO8PdUOpugoO9bD"			 << std::endl;
outputfile <<"CgggbU8OU qOp qOdoUOdcb" 		<< std::endl;
outputfile <<"    6OuU  /p u gcoUodpP" 		<< std::endl;
outputfile <<"      |||//  /douUP" 			<< std::endl;
outputfile <<"        ||////" 				<< std::endl;
outputfile <<"         |||/|" 				<< std::endl;
outputfile <<"         ||||||" 				<< std::endl;
outputfile <<"         ||||||" 				<< std::endl;
outputfile <<"   .....//|||||...." 			<< std::endl;

	}
	else
		std::cout << "Error files" << std::endl;
	outputfile.close();
}

bool ShrubberyCreationForm::execute(bureaucrat const &executor) const
{
	if (Form::execute(executor))
	{
		this->createfile();
		return (1);
	}
	return (0);
}

std::ostream &operator<<(std::ostream &outputfile, ShrubberyCreationForm const &var)
{
	outputfile << var.getName() << ", ShrubberyCreationForm with a sign-grade required of '" << var.getsigngrade();
	std::cout << "' ,an exec-grade required of '" << var.getexecgrade() << "' and '" << var.getTarget() << "' as a target";
	var.getsign() == 1 ? std::cout << " is signed" : std::cout << " isn't signed";
	return (outputfile);
}
