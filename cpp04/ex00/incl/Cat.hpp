/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:57:53 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:28:10 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	protected:

	public:
		Cat();
		Cat(Cat const &other);
		~Cat();
		Cat &operator=(Cat const &other);

		void	makeSound() const;
};

#endif
