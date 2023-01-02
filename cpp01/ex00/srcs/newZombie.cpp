/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:35:33 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 10:35:35 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*newZombie;
	newZombie = new Zombie;
	newZombie->setname(name);
	return (newZombie);
}
