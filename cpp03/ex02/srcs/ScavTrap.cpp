/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:58:55 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/24 16:16:38 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("no-name", 100, 50, 20)
{
	std::cout << "New ScavTrap created by default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string newname)	: ClapTrap(newname, 100, 50, 20)
{
	std::cout << "New ScavTrap '" << newname << "' has been created"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	ClapTrap(other.name, other.hit_points, other.energy_points, other.attack_damage);
	std::cout << "New ScavTrap created by copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed by destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0)
		std::cout << this->name << " do not have enough energy points for this action" << std::endl;
	else if (this->hit_points <= 0)
		std::cout << this->name << " do not have enough hit points for this action" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << " causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " have entered in Gate keeper mode." << std::endl;
}
