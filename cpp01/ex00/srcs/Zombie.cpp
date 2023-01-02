/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:55:34 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 10:40:05 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

Zombie::Zombie()
{
	this->name = "new Zombie";
	std::cout << this->name + " spawned" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name + " died" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}
