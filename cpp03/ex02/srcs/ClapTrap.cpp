/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:28:26 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/24 15:31:55 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"

ClapTrap::ClapTrap() : name("no-name"), hit_points(10), energy_points(10), attack_damage(10)
{
	std::cout << "New ClapTrap created by default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string newname, int newhit_points, int newenergy_points, int newattack_damage)
: name(newname), hit_points(newhit_points), energy_points(newenergy_points), attack_damage(newattack_damage)
{
	std::cout << "New ClapTrap '" << newname << "' has been created with specials statistics"<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
: name(other.name), hit_points(other.hit_points), energy_points(other.energy_points), attack_damage(other.attack_damage)
{
	std::cout << "New ClapTrap created by copy constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string newname) : name(newname), hit_points(10), energy_points(10), attack_damage(10)
{
	std::cout << "New ClapTrap '" << newname << "' has been created"<< std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyed by destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
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
