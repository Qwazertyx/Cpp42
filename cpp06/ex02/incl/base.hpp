/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:02:25 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/09 13:21:53 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <math.h>
#include <iostream>
#include <chrono>
#include <thread>

class Base
{
	public:
	virtual ~Base(){};
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

#endif
