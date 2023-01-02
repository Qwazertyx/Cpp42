/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:58:41 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/03 13:14:50 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"

int main(void)
{
	bureaucrat slave;
	std::cout << slave << std::endl;
	bureaucrat *vsedat = new bureaucrat("vsedat", 42);
	std::cout << *vsedat << std::endl;
	vsedat->incrementGrade();
	std::cout << *vsedat << std::endl;
	delete vsedat;
	bureaucrat boss("boss", 1);
	std::cout << "\n" << std::endl;

	try
	{
		bureaucrat bossofboss("bossofboss", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bureaucrat slaveofslave("slaveofslave", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n" << std::endl;
	
	try
	{
		boss.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << boss << std::endl;
	boss.decrementGrade();
	std::cout << boss << std::endl;
	std::cout << "\n" << std::endl;
	
	try
	{
		slave.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
		std::cout << slave << std::endl;
	return (0);
}
