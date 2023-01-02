/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:40:50 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 10:08:17 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	chump;
	chump.setname(name);
	chump.announce();
}
