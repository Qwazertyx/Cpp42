/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:57:53 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 15:31:58 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	protected:
		Brain *bbrain;

	public:
		Cat();
		Cat(Cat const &other);
		~Cat();
		Cat &operator=(Cat const &other);

		Brain	*getBrain(void)const;
		void getIdea(void);
		void getIdea(int index);
		void	makeSound() const;
};

#endif
