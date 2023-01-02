/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:20:41 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/21 13:19:12 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"

#include <iostream>
int main( void )
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (b / a) << std::endl;
	a = b;
	std::cout << (a == b) << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << (a * b) << std::endl;
	return 0;
}
