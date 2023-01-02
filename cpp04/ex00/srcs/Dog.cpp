/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:17:44 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:31:33 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "New Dog created by default constructor" << std::endl;
}

Dog::Dog(Animal const &other) : Animal(other)
{
	std::cout << "New Dog created by copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed by destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	this->type = other.getType();
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
