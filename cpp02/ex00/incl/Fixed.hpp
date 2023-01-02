/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:54:55 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/19 11:00:43 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int value;
		static const int bits = 8;

	public:
		Fixed();
		Fixed(Fixed const &other);
		~Fixed();
		Fixed &operator=(Fixed const &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif

