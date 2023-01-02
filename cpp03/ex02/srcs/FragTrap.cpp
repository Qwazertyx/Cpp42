/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:38:15 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/24 17:50:23 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("no-name", 100, 100, 30)
{
	std::cout << "New FragTrap created by default constructor" << std::endl;
}

FragTrap::FragTrap(std::string newname)	: ClapTrap(newname, 100, 100, 30)
{
	std::cout << "New FragTrap '" << newname << "' has been created"<< std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
	ClapTrap(other.name, other.hit_points, other.energy_points, other.attack_damage);
	std::cout << "New FragTrap created by copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed by destructor" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0)
		std::cout << this->name << " do not have enough energy points for this action" << std::endl;
	else if (this->hit_points <= 0)
		std::cout << this->name << " do not have enough hit points for this action" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->name << " attacks " << target;
		std::cout << " causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Five!!!" << std::endl;
}

