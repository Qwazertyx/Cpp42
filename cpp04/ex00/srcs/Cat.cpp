/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:24 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:29:12 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "New Cat created by default constructor" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "New Cat created by copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed by destructor" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	this->type = other.getType();
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}
