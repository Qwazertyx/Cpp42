/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:47:12 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/26 14:57:52 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string Type);
		Animal(Animal const &other);
		virtual ~Animal();
		Animal &operator=(Animal const &other);
		
		std::string getType() const;
		virtual	void makeSound() const;
};

#endif
