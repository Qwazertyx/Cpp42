/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:34:07 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/12 11:24:33 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "../incl/Array.hpp"

# define V_CYAN			"\e[0;38;5;44m"
# define RESET			"\e[0m"

int main(void)
{
	Array<int> intArray(5);
	for (unsigned int i = 0; i < intArray.size() + 1; i++)
	{
		try
		{
			intArray[i] = i;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	for (unsigned int i = 0; i < intArray.size() + 1; i++)
	{
		try
		{
			std::cout << intArray[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << '\n' << std::endl;
	
	Array<int> intArrayCopy(intArray);
	std::cout << intArray[2] << std::endl;
	std::cout << intArrayCopy[2] << std::endl;
	intArray[2] = 7;
	std::cout << intArray[2] << std::endl;
	std::cout << intArrayCopy[2] << std::endl;
	std::cout << '\n' << std::endl;

	Array<char> charArray(3);
	for (unsigned int i = 0; i < 4; i++)
	{
		try
		{
			charArray[i] = 'a' + i;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	for (unsigned int i = 0; i < 4; i++)
	{
		try
		{
			std::cout << charArray[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
