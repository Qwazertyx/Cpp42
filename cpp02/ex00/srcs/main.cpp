/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:20:41 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/19 11:05:59 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

//$> ./a.out
//Default constructor called
//Copy constructor called
//Copy assignment operator called // <-- This line may be missing depending on your implementation
//getRawBits member function called
//Default constructor called
//Copy assignment operator called
//getRawBits member function called
//getRawBits member function called
//0
//getRawBits member function called
//0
//getRawBits member function called
//0
//Destructor called
//Destructor called
//Destructor called
//$>
