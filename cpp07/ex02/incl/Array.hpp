/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:46:21 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/12 11:23:09 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int n;

	public:
		Array() : array(0), n(0)
		{};

		Array(unsigned int n) : array(new T[n]), n(n)
		{};

		Array(Array const &other):  array(new T[other.size()]), n(other.size())
		{
			*this = other;
		};

		T &operator[](unsigned int index) const
		{
			if ((index < 0) || (index >= this->n))
				throw OutOfBoundsException();
			return (array[index]);
		};

		Array &operator=(Array const &other)
		{
			try
			{
				for(unsigned int i = 0; i < other.size(); i++)
				{
					if (i >= this->n)
						throw OutOfBoundsException();
					this->array[i] = other.array[i];
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			return (*this);
		};

		~Array()
		{
			if(this->array)
				delete[] this->array;
		};

		unsigned int size() const
		{
			return (this->n);
		};

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("out of bounds");
				}
		};
};

#endif

//		T &operator[](unsigned int index) const
//		{
//			if ((index < 0) || (index >= this->_n))
//				throw OutOfBoundsException();
//			return (_ptr[index]);
//		}
//		Array &operator=(Array const &rightHandSide)
//		{
//			try
//			{
//				for(unsigned int i = 0; i < rightHandSide.size(); i++)
//				{
//					if (i >= this->_n)
//						throw OutOfBoundsException();
//					this->_ptr[i] = rightHandSide._ptr[i];
//				}
//			}
//			catch(const std::exception& e)
//			{
//				std::cerr << e.what() << '\n';
//			}
//			return (*this);
//		}
//		unsigned int size(void) const {return (_n);};
//
//	class OutOfBoundsException : public std::exception
//	{
//		public:
//			virtual const char* what() const throw()
//			{
//				return ("\e[0;31mout of bounds\e[0m");
//			}
//	};
//
