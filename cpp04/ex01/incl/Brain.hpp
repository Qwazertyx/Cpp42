/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:48:22 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:23:52 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &other);
		virtual ~Brain();
		Brain &operator=(Brain const &other);
		std::string* getideas();
};

#endif
