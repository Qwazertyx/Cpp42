/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:55:37 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/13 13:55:28 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

int	main()
{
	Zombie	*first;
	first = zombieHorde(5, "vsedat");
	for (int i = 0; i < 5; i++)
	{
		first[i].announce();
	}
	delete [] first;
	return (0);
}
