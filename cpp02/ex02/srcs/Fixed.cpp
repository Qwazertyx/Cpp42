/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:54:39 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/21 13:17:52 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->value = other.getRawBits();
}

Fixed::Fixed(const int integer)
{
	//std::cout << "Int constructor called" << std::endl;
	this->value = integer << this->bits;
}

Fixed::Fixed(const float floater)
{
	//std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf(floater * (1 << this->bits)));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed & op) const
{
	Fixed returned;
	returned.setRawBits(this->value + op.getRawBits());
	return (returned);
}

Fixed Fixed::operator-(const Fixed & op) const
{
	Fixed returned;
	returned.setRawBits(this->value - op.getRawBits());
	return (returned);
}

Fixed Fixed::operator*(const Fixed & op) const
{
	Fixed returned;
	returned.setRawBits((this->value * op.getRawBits()) >> this->bits);
	return (returned);
}

Fixed Fixed::operator/(const Fixed & op) const
{
	Fixed returned;
	returned.setRawBits((this->value << this->bits) / op.getRawBits());
	return (returned);
}

Fixed & Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed returned(*this);
	operator++();
	return (returned);
}

Fixed & Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed returned(*this);
	operator--();
	return (returned);
}

static bool isEqual(Fixed const & op1, Fixed const & op2)
{return (op1.getRawBits() == op2.getRawBits());}

bool Fixed::operator>(Fixed const & op) const {return (this->value > op.getRawBits());}
bool Fixed::operator<(Fixed const & op) const {return (this->value < op.getRawBits());}
bool Fixed::operator>=(Fixed const & op) const {return (this->value >= op.getRawBits());}
bool Fixed::operator<=(Fixed const & op) const {return (this->value <= op.getRawBits());}
bool Fixed::operator==(Fixed const & op) const {return (isEqual(*this, op));}
bool Fixed::operator!=(Fixed const & op) const {return !(isEqual(*this, op));}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
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

Fixed & Fixed::min(Fixed &u, Fixed &v) {return (u < v ? u : v);}
const Fixed & Fixed::min(const Fixed &u, const Fixed &v) {return (u < v ? u : v);}
Fixed & Fixed::max(Fixed &u, Fixed &v) {return (u > v ? u : v);}
const Fixed & Fixed::max(const Fixed &u, const Fixed &v) {return (u > v ? u : v);}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
	out << fixe.toFloat();
	return (out);
}

Fixed &min(Fixed &u, Fixed &v)
{
	return (u < v ? u : v);
}

Fixed &max(Fixed &u, Fixed &v)
{
	return (u > v ? u : v);
}
