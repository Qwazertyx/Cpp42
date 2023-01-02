/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:31:16 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/10 13:35:31 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T temp;
	
	temp = x;
	x = y;
	y = temp;
}

template<typename T>
T const &min(T const &x, T const &y)
{
	return ((x < y) ? x : y);
}

template<typename T>
T const &max(T const &x, T const &y)
{
	return ((x > y) ? x : y);
}

#endif
