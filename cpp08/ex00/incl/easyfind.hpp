/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:55:45 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/14 14:50:55 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <array>

class cantfindexception : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("can't find this");
		}
};

template<typename T>
int easyfind(T &cont, int i)
{
	typename T::iterator iterator;
	
	iterator = std::find(cont.begin(), cont.end(), i);
	if (iterator != cont.end())
		return (*iterator);
	throw cantfindexception();
}

#endif
