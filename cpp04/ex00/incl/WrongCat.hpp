/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:03:40 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/26 14:56:51 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:

	public:
		WrongCat();
		WrongCat(WrongAnimal const &other);
		~WrongCat();
		WrongCat &operator=(WrongCat const &other);

		void	makeSound() const;
};

#endif
