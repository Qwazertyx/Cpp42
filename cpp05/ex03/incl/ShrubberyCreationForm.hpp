/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:37:28 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 11:50:51 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm(void);
		void	createfile(void) const;

	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const& other);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &other);

		bool execute(bureaucrat const &executor) const;

};

std::ostream &operator<<(std::ostream &outputFile, ShrubberyCreationForm const &var);

#endif
