/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:04:10 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 15:56:35 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanB.hpp"

HumanB::HumanB(std::string newname)
{
	this->name = newname;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}
