/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:56:01 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 10:46:13 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		void	setname(std::string name);
		void	announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif
