/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:28:26 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/20 14:28:02 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "no-name";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 10;
}

ClapTrap::ClapTrap(ClapTrap const &other)
: name(other.name), hit_points(other.hit_points), energy_points(other.energy_points), attack_damage(other.attack_damage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newname)
{
	std::cout << "New ClapTrap '" << newname << "' has been created"<< std::endl;
	this->name = newname;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

std::string ClapTrap::get_name()
{
	return (this->name);
}

int ClapTrap::get_hit_points()
{
	return (this->hit_points);
}

int ClapTrap::get_energy_points()
{
	return (this->energy_points);
}

int ClapTrap::get_attack_damage()
{
	return (this->attack_damage);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0)
		std::cout << this->name << " do not have enough energy points for this action" << std::endl;
	else if (this->hit_points <= 0)
		std::cout << this->name << " do not have enough hit points for this action" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << " causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	std::cout << this->name << " took " << amount << " of damage" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points <= 0)
		std::cout << this->name << " do not have enough energy points for this action" << std::endl;
	else if (this->hit_points <= 0)
		std::cout << this->name << " do not have enough hit points for this action" << std::endl;
	else
	{
		std::cout << this->name << " regained " << amount << " hit points"<< std::endl;
		this->energy_points--;
		this->hit_points += amount;
	}
}
