/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:07:19 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/10 13:42:22 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Harl.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	Harl	harl;
	std::string	level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for (; i < 4; i++)
		if (av[1] == level[i])
			break;
	switch (i)
	{
		case 0 :
			harl.complain("DEBUG");
		case 1 :
			harl.complain("INFO");
		case 2 :
			harl.complain("WARNING");
		case 3 :
			harl.complain("ERROR");
			break;
		case 4 :
			std::cout << "NO PROBLEM" << std::endl;
	}
}

