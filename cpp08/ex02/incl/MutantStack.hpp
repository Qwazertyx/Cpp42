/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:39:10 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/15 17:38:42 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {};
		~MutantStack() {};
		MutantStack<T> &operator=(const MutantStack<T> &other)
		{
			this->c = other->c;
			return(*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return(this->c.begin());
		}
		iterator end()
		{
			return(this->c.end());
		}
	
};


#endif
