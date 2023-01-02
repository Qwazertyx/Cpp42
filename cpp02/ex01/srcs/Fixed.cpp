/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:54:39 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/21 11:25:28 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.getRawBits();
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = integer << this->bits;
}

Fixed::Fixed(const float floater)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf(floater * (1 << this->bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}


float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return ((int)(this->value >> this->bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
	out << fixe.toFloat();
	return (out);
}
