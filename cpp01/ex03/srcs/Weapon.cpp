/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:55:38 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 15:54:45 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Weapon.hpp"

Weapon::Weapon(std::string newtype)
{
	this->type = newtype;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string	&Weapon::getType()
{
	std::string &gettype	=type;
	return (gettype);
}

void	Weapon::setType(std::string const & newtype)
{
	this->type = newtype;
}
