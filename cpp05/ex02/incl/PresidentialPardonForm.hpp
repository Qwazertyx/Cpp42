/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:04:23 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 11:48:36 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();

	public:
		
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
		
		bool	execute(bureaucrat const &executor) const;
		
};

std::ostream &operator<<(std::ostream &outputFile, PresidentialPardonForm const &var);

#endif
