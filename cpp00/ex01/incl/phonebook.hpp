/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:01:01 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/04 11:57:41 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>
# include "contact.hpp"

class	Phonebook{

private:
	Contact contacts[8];

public:
	void	fillcontact(int16_t index);
	void	renderlist(std::int16_t maxindex);
};

#endif

