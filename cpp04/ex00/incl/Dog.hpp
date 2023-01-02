/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:58:48 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:31:23 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	protected:

	public:
		Dog();
		Dog(Animal const &other);
		~Dog();
		Dog &operator=(Dog const &other);

		virtual void	makeSound() const;
};
#endif
