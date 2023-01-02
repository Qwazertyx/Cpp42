/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:24 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/25 17:04:48 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "New WrongCat created by default constructor" << std::endl;
}

WrongCat::WrongCat(WrongAnimal const &other) : WrongAnimal(other)
{
	std::cout << "New WrongCat created by copy constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed by destructor" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
	this->type = other.type;
	std::cout << "WrongCat assignation operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}
