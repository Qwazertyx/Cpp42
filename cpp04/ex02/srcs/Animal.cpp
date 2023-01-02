/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:52:27 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 15:05:26 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"

Animal::Animal() : type("Dark creature")
{
	std::cout << "New Animal created by default constructor" << std::endl;
}

Animal::Animal(std::string newtype) : type(newtype)
{
	std::cout << "New Animal '" << newtype << "' has been created"<< std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
	std::cout << "New Animal created by copy constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed by destructor" << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
	this->type = other.getType();
	std::cout << "Animal assignation operator called" << std::endl;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "A dull and unfamiliar noise resounds" << std::endl;
}

void Animal::getIdea(void)
{
	std::cout << "No brain found" << std::endl;
	return ;
}

void Animal::getIdea(int index)
{
	(void)index;
	std::cout << "No brain found" << std::endl;
	return ;
}

