/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:45:34 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 11:12:12 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setname(name);
	return (horde);
}
