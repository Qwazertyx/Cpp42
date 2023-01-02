/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:10:59 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/07 15:28:34 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <math.h>
#include <climits>



int main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	std::string	str;
	double		num;
	int			start = 0;
	int			size = 0;
	
	while (argv[1][start] && std::isspace(argv[1][start]))
		start++;
	while (argv[1][start + size] && !std::isspace(argv[1][start + size]))
		size++;
	str = std::string(argv[1], start, size);
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		num = str[0];
	else
	{
		try
		{
			num = std::stod(str);
		}
		catch(const std::exception& e)
		{
			//std::cerr << e.what() << std::endl;
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return (0);
		}
	}


	
	std::cout << "char: ";
	if (num < CHAR_MIN || num > CHAR_MAX || isnan(num))
		std::cout << "impossible" << std::endl;
	else if (std::isprint(num))
		std::cout << static_cast<unsigned char>(num) << std::endl;
	else
		std::cout << "non displayable" << std::endl;



	std::cout << "int: ";
	if (num >= INT_MIN && num <= INT_MAX && !isnan(num) && !isinf(num))
		std::cout << static_cast<int>(num) << std::endl;
	else
		std::cout << "impossible" << std::endl;



	std::cout << "float: ";
	if (isnan(num))
		std::cout << "nan";
	else if(isinf(num))
		(num < 0 ? std::cout << "-inf" : std::cout << "inf");
	else
		std::cout << static_cast<float>(num);
	std::cout << "f" << std::endl;



	std::cout << "double: ";
	if (isnan(num))
		std::cout << "nan" << std::endl;
	else if(isinf(num))
		(num < 0 ? std::cout << "-inf" : std::cout << "inf") << std::endl;
	else
		std::cout << num << std::endl;
	}
