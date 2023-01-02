/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:50:55 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/06 15:05:24 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "debug" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "info" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "warning" << std::endl;
}
void	Harl::error(void)
{
	std::cout << "error" << std::endl;
}


void	Harl::complain(std::string level)
{
	std::string	stab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*ptab[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
		if (stab[i] == level)
			(this->*ptab[i])();
}
