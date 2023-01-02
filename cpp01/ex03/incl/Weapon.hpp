/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:44:29 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/05 14:54:38 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>


class Weapon
{
private:
	std::string	type;

public:
	Weapon();
	Weapon(std::string newtype);
	~Weapon();
	std::string	& getType();
	void	setType(std::string const & newtype);
};



#endif
