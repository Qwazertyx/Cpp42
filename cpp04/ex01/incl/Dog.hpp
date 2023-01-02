/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:58:48 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:04:42 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	protected:
		Brain *bbrain;
		
	public:
		Dog();
		Dog(Dog const &other);
		~Dog();
		Dog &operator=(Dog const &other);

		Brain	*getBrain(void)const;
		void getIdea(void);
		void getIdea(int index);
		void	makeSound() const;
};
#endif
