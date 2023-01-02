/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:54:55 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/21 11:45:36 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int value;
		static const int bits = 8;

	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float floater);
		Fixed(Fixed const &other);
		~Fixed();
		Fixed &operator=(Fixed const &other);

		Fixed operator+(const Fixed& op) const;
		Fixed operator-(const Fixed& op) const;
		Fixed operator*(const Fixed& op) const;
		Fixed operator/(const Fixed& op) const;
		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);
		bool operator>(Fixed const & op) const;
		bool operator<(Fixed const & op) const;
		bool operator>=(Fixed const & op) const;
		bool operator<=(Fixed const & op) const;
		bool operator==(Fixed const & op) const;
		bool operator!=(Fixed const & op) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		static Fixed &min(Fixed &u, Fixed &v);
		const static Fixed &min(const Fixed &u, const Fixed &v);
		static Fixed &max(Fixed &u, Fixed &v);
		const static Fixed &max(const Fixed &u, const Fixed &v);
};

Fixed &min(Fixed &u, Fixed &v);
Fixed &max(Fixed &u, Fixed &v);
std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif

