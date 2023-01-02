/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:55:37 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 10:43:39 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

int	main()
{
	Zombie	*vsedat;
	randomChump("chump_vsedat");
	vsedat = newZombie("vsedat");
	vsedat->announce();
	vsedat->setname("Zombie_vsedat");
	vsedat->announce();
	delete vsedat;
}
