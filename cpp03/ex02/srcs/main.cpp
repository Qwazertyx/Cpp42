/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:28:23 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/24 17:53:30 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/FragTrap.hpp"

//void	createentity()
//{
//	ScavTrap Robot4;
//}

int main()
{
	//ClapTrap Robot1("Robot1");
	//ClapTrap Robot2("Robot2");
	//
	//Robot1.attack("Robot2");
	//Robot2.takeDamage(Robot1.get_attack_damage());
	//std::cout << "Clap Trap: " << Robot1.get_name();
	//std::cout << " has an attack damage of " << Robot1.get_attack_damage();
	//std::cout << " and " << Robot1.get_energy_points() << " energy points" << std::endl;
	//std::cout << "Clap Trap: " << Robot2.get_name();
	//std::cout << " has " << Robot2.get_hit_points() << " hit points" << std::endl;
	//Robot2.attack("Robot1");
//
	//ClapTrap Robot3;
	//Robot3.beRepaired(5);
	//Robot1.attack("Robot3");
	//Robot3.takeDamage(Robot1.get_attack_damage());
	//std::cout << "Clap Trap: " << Robot3.get_name();
	//std::cout << " has " << Robot3.get_hit_points() << " hit points" << std::endl;
//
	//for (int i = 0; i < 9; i++)
	//	Robot3.beRepaired(5);
//
	//std::cout << "Clap Trap: " << Robot3.get_name();
	//std::cout << " has " << Robot3.get_hit_points() << " hit points";
	//std::cout << " and " << Robot3.get_energy_points() << " energy points" << std::endl;
	//
	//Robot3.attack("Robot1");
	//std::cout << "\n" << std::endl;
	
	//createentity();
	//std::cout << "\n" << std::endl;
	//
	//ScavTrap Robot5("vsedat");
	//std::cout << "Scav Trap: " << Robot5.get_name();
	//std::cout << " has " << Robot5.get_hit_points() << " hit points";
	//std::cout << " , " << Robot5.get_energy_points() << " energy points";
	//std::cout << " and " << Robot5.get_attack_damage() << " attack damage" << std::endl;
	//Robot5.guardGate();

	FragTrap Robot6("vsedat");
	std::cout << "Frag Trap: " << Robot6.get_name();
	std::cout << " has " << Robot6.get_hit_points() << " hit points";
	std::cout << " , " << Robot6.get_energy_points() << " energy points";
	std::cout << " and " << Robot6.get_attack_damage() << " attack damage" << std::endl;
	Robot6.highFivesGuys();
	std::cout << "\n" << std::endl;

	FragTrap Robot7("evil vsedat");
	Robot6.attack("Robot7");
	Robot7.takeDamage(Robot6.get_attack_damage());

	std::cout << "Frag Trap: " << Robot7.get_name();
	std::cout << " has " << Robot7.get_hit_points() << " hit points";
	std::cout << " , " << Robot7.get_energy_points() << " energy points";
	std::cout << " and " << Robot7.get_attack_damage() << " attack damage" << std::endl;
	
}
