/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:53:48 by vsedat            #+#    #+#             */
/*   Updated: 2022/09/28 12:29:11 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string	buff;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE*" << std::endl;
		return (0);
	}
	for (int j = 1; j < ac; j++)
	{
		buff = av[j];
		for (int i = 0; buff[i]; i++)
			buff[i] = toupper(buff[i]);
		std::cout << buff;
	}
	std::cout << std::endl;
	return (0);
}
