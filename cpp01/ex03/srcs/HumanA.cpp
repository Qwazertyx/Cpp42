/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:04:13 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 15:51:08 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon &newWeapon) : weapon(newWeapon)
{
	this->name = newname;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name + " attacks with their " + this->weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon newWeapon)
{
	this->weapon = newWeapon;
}
