/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:24 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:26:04 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->bbrain = new Brain;
	std::cout << "New Cat created by default constructor" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	*this = other;
	std::cout << "New Cat created by copy constructor" << std::endl;
}

Cat::~Cat()
{
	delete this->bbrain;
	std::cout << "Cat destroyed by destructor" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	this->type = other.type;
	this->bbrain = new Brain(*other.getBrain());
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}

void Cat::getIdea(void)
{
	std::cout << this->bbrain->getideas()[rand() % 100] << std::endl;
}

void Cat::getIdea(int index)
{
	std::cout << this->bbrain->getideas()[index] << std::endl;
}

Brain	*Cat::getBrain(void)const
{
	return (this->bbrain);
}
