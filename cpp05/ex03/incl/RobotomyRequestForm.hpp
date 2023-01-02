/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:37:29 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 11:52:38 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const& other);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &other);

		bool execute(bureaucrat const &executor) const;

};

std::ostream &operator<<(std::ostream &outputFile, RobotomyRequestForm const &var);

#endif
