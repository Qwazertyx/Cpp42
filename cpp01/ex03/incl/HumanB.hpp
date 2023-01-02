/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:44:28 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 15:49:02 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*weapon;
public:
	HumanB(std::string newname);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &newWeapon);
};

#endif
