/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:43:39 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/24 16:52:52 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(FragTrap const &other);
		~FragTrap();
		FragTrap &operator=(FragTrap const &other);

		void	highFivesGuys(void);
		void	attack(std::string const & target);
};

#endif

