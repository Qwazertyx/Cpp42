/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:15:48 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/06 15:17:17 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class Harl{

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		void	complain(std::string level);
		void	(Harl::*ptab[4])(void);

};
#endif
