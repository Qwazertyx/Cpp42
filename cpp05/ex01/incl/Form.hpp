/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:34:11 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/03 14:39:14 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class bureaucrat;

class Form
{
	private:
		std::string const name ;
		bool sign;
		int signgrade;
		int execgrade;

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
		Form();
		Form(std::string name, int signgrade, int execgrade);
		Form(Form const &other);
		virtual ~Form();
		Form &operator=(Form const &other);

		bool getsign() const;
		int	getsigngrade() const;
		int	getexecgrade() const;
		std::string getName() const;

		void	beSigned(bureaucrat const &signer);
};

std::ostream &operator<<(std::ostream &outputFile, Form const &i);

#endif

