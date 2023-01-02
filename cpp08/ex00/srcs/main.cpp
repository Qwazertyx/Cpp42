/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:08:06 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/16 11:36:08 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/easyfind.hpp"

int main()
{
	std::array<int, 5> arr;
	for (int i = 0; i < 5; i++)
		arr[i] = i;
	std::cout << easyfind(arr, 1) << std::endl;
	try
	{
		std::cout << easyfind(arr, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::vector<int> vec(5);
	for (int i = 0; i < 5; i++)
		vec[i] = i;
	vec.push_back(42);
	std::cout << easyfind(vec, 1) << std::endl;
	try
	{
		std::cout << easyfind(vec, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::list<int> list;
	for (int i = 0; i < 5; i++)
		list.push_back(i);
	std::cout << easyfind(list, 1) << std::endl;
	try
	{
		std::cout << easyfind(list, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
