/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:17:44 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:25:50 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->bbrain = new Brain;
	std::cout << "New Dog created by default constructor" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	*this = other;
	std::cout << "New Dog created by copy constructor" << std::endl;
}

Dog::~Dog()
{
	delete this->bbrain;
	std::cout << "Dog destroyed by destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	this->type = other.type;
	this->bbrain = new Brain (*other.getBrain());
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);
}

void Dog::getIdea(void)
{
	std::cout << this->bbrain->getideas()[rand() % 100] << std::endl;
	
}

void Dog::getIdea(int index)
{
	std::cout << this->bbrain->getideas()[index] << std::endl;
}

Brain	*Dog::getBrain(void)const
{
	return (this->bbrain);
}

void	Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
