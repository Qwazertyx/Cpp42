/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:28:28 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/24 15:26:34 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int	hit_points;
		int	energy_points;
		int	attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(std::string Name, int hit_points, int energy_points, int attack_damage);
		ClapTrap(ClapTrap const &other);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &other);

		std::string get_name();
		int	get_hit_points();
		int	get_energy_points();
		int	get_attack_damage();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif


