/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:44:25 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 15:49:27 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H
# include "Weapon.hpp"
# include "HumanB.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon	&weapon;
public:
	HumanA(std::string newname, Weapon &newWeapon);
	~HumanA();
	void	attack();
	void	setWeapon(Weapon newWeapon);
};



#endif
