/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:12:32 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/30 12:22:20 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Span.hpp"

Span::Span() : N(0)
{}

Span::Span(unsigned int newN) : N(newN)
{
	this->list.reserve(newN);
}

Span::~Span()
{}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &other)
{
	this->N = other.N;
	this->list.reserve(this->N);
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->list.size() >= this->N)
		throw std::exception();
	this->list.push_back(n);
}

unsigned int	Span::shortestSpan()
{
	if (this->N == 0 || this->N == 1 || &this->list.front() == &this->list.back() || this->list.empty())
		throw std::exception();
	unsigned int minspan = *max_element(this->list.begin(), this->list.end()) - *min_element(this->list.begin(), this->list.end());
	std::vector<int> sortlist = this->list;
	std::sort(sortlist.begin(), sortlist.end());
	for (unsigned int i = 0; i + 2 <= sortlist.size(); i++)
	{
		if (sortlist[i + 1] - sortlist[i] < (int)minspan)
			minspan = sortlist[i + 1] - sortlist[i];
	}
	return (minspan);
}

unsigned int	Span::longestSpan()
{
	if (this->N == 0 || this->N == 1)
		throw std::exception();
	return (*max_element(this->list.begin(), this->list.end()) - *min_element(this->list.begin(), this->list.end()));
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for (;start != end; start++)
		this->addNumber(*start);
}
