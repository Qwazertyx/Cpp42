/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:44:56 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 14:13:57 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
private:
	Form	*createPresidentialForm(std::string target);
	Form	*createRobotomyForm(std::string target);
	Form	*createShrubberyForm(std::string target);

public:
	Intern();
	~Intern();
	Intern(Intern const& other);
	Intern	&operator=(Intern const &other);

	Form	*makeForm(std::string name, std::string target);
};

#endif
