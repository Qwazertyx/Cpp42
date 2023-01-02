/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:03:21 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/26 15:02:23 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(std::string Type);
		WrongAnimal(WrongAnimal const &other);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &other);
		std::string getType() const;

		void makeSound() const;
};

#endif
