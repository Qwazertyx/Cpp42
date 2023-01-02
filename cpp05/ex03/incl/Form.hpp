/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:34:11 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/04 12:00:22 by vsedat           ###   ########lyon.fr   */
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
		std::string target;	
		Form();

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
		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form not signed");
				}
		};
		Form(std::string name, int signgrade, int execgrade);
		Form(Form const &other);
		virtual ~Form();
		Form &operator=(Form const &other);

		bool getsign() const;
		int	getsigngrade() const;
		int	getexecgrade() const;
		std::string getName() const;

		std::string getTarget() const;
		void setTarget(std::string target);

		void	beSigned(bureaucrat const &signer);
		virtual bool execute(bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &outputFile, Form const &var);

#endif

