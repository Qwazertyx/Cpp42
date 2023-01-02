/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:21:14 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 11:47:05 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class bureaucrat
{
	protected:
		std::string const name ;
		int grade;

	public:
		class grade_too_high_exception : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};
		class grade_too_low_exception : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};
		bureaucrat();
		bureaucrat(std::string name);
		bureaucrat(int grade);
		bureaucrat(std::string name, int grade);
		bureaucrat(bureaucrat const &other);
		virtual ~bureaucrat();
		bureaucrat &operator=(bureaucrat const &other);

		void incrementGrade();
		void decrementGrade();
		int getGrade() const;
		std::string getName() const;

		void signForm(Form &_form);
		void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &outputFile, bureaucrat const &var);

#endif


