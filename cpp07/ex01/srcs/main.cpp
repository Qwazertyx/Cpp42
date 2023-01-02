/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:38:35 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/10 15:43:32 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/iter.hpp"

template<typename T>
void print(T &n)
{
	std::cout << n << " ";
}

void addone(int &i)
{
	i++;
}

void ft_toupper(char &i)
{
	i = std::toupper(i);
}

int main()
{
	int numbers[] = {0,1,2,3,4,5,6,7,8,9};
	iter(numbers, 10, print);
	std::cout << std::endl;
	
	iter(numbers, 10, addone);
	iter(numbers, 10, print);
	std::cout << "\n" << std::endl;

	char characters[] = "abcdefghjk";
	iter(characters, 10, print);
	std::cout << std::endl;
	
	iter(characters, 10, ft_toupper);
	iter(characters, 10, print);
	std::cout << std::endl;
}
