/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:51:20 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:40:35 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "idea number ";
		this->ideas[i] += std::to_string(i);
	//	this->ideas[i] += std::to_string(rand() % 100));
	//	std::cout << this->ideas[i] << std::endl;
	}
	std::cout << "New Brain created by default constructor" << std::endl;
}

Brain::Brain(Brain const &other)
{
	*this = other;
	std::cout << "New Brain created by copy constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed by destructor" << std::endl;
}

std::string* Brain::getideas()
{
	return(this->ideas);
}

Brain &Brain::operator=(Brain const &other)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain assignation operator called" << std::endl;
	return (*this);
}
