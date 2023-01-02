/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:12:26 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/30 12:23:07 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>


class Span
{
	private:
		unsigned int N;
		std::vector<int> list;

	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(Span const &other);
		Span &operator=(Span const &other);
		
		bool isinlist(int n);
		void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		void addNumber(int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};

#endif
