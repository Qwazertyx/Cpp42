/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:52:27 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/25 17:04:40 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Dark creature")
{
	std::cout << "New WrongAnimal created by default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string newtype) : type(newtype)
{
	std::cout << "New WrongAnimal '" << newtype << "' has been created"<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
: type(other.type)
{
	std::cout << "New WrongAnimal created by copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed by destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.type;
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "A dull and unfamiliar noise resounds" << std::endl;
}
