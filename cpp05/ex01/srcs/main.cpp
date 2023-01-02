/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:58:41 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/03 14:50:09 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Form.hpp"
#include "../incl/Bureaucrat.hpp"

int main(void)
{
	bureaucrat vsedat;
	bureaucrat student("student", 42);
	Form form42("42", 42, 42);
	Form form140("140", 140, 140);
	Form *form5050 = new Form("5050", 50, 50);
	delete form5050;
	std::cout << "\n" << std::endl;

	try
	{
		Form		form200_50("200_50", 200, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form		form500("3_minus1", 50, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n" << std::endl;

	std::cout << vsedat << std::endl;
	std::cout << student << std::endl;
	vsedat.signForm(form42);
	vsedat.signForm(form140);
	student.signForm(form140);
	std::cout << form42 << std::endl;
	student.signForm(form42);
	std::cout << form42 << std::endl;
}
