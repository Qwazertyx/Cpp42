/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:12:25 by vsedat            #+#    #+#             */
/*   Updated: 2022/12/03 13:26:28 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Span.hpp"

int main()
{
	Span sp = Span(6);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "\n" << std::endl;
	
	Span sp2 = Span(3);
	sp2.addNumber(INT_MAX);
	sp2.addNumber(INT_MIN);
//	sp2.addNumber(17);
//	sp2.addNumber(11);
//	sp2.addNumber(-192);
//	std::cout << sp2.list[0] << std::endl;
//	std::cout << sp2.list[1] << std::endl;
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n" << std::endl;
	
	Span numbers(20003);
	try
	{
		std::vector<int> tabvec;
	//numbers.addNumber(43);
		for (int i = 0; i <= 20000; i++)
			tabvec.push_back(i * 100);
		numbers.addRange(tabvec.begin(), tabvec.end());
	//numbers.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << numbers.shortestSpan() << std::endl;
		std::cout << numbers.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
}
