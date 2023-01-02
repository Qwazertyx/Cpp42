/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:56:49 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/04 11:57:44 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/phonebook.hpp"

void	Contact::fillinfos()
{
	std::string temp;
	
	std::cout << "first name:" << std::endl;
	std::cin >> first_name;
	std::cout << "last name:" << std::endl;
	std::cin >> last_name;
	std::cout << "nickname:" << std::endl;
	std::cin >> nickname;
	std::cout << "phone number:" << std::endl;
	std::cin >> phone_number;
	std::cout << "darkest secret:" << std::endl;
	std::cin >> darkest_secret;
}

void	Phonebook::fillcontact(int16_t	index)
{
	contacts[index].fillinfos();
}

void	rendertext(std::string	str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		for (int i = 0; str.length() + i < 10; i++)
			std::cout << " ";
		std::cout << str;
	}

}

std::string	Contact::returninfo(std::string	str)
{
	if (str == "first_name")
		return (first_name);
	else if (str == "last_name")
		return (last_name);
	else if (str == "nickname")
		return (nickname);
	else if (str == "phone_number")
		return (phone_number);
	else if (str == "darkest_secret")
		return (darkest_secret);
	return (0);
}

void	Phonebook::renderlist(std::int16_t maxindex)
{
	int	max = 0;
	int	i;
	std::string buff;
	std::cout << "┌----------┬----------┬----------┬----------┐" << std::endl;
	for (int i = 0; i < 8 && i < maxindex; i++)
	{
		std::cout << "|         " << i;
		std::cout << "|";
		rendertext(contacts[i].returninfo("first_name"));
		std::cout << "|";
		rendertext(contacts[i].returninfo("last_name"));
		std::cout << "|";
		rendertext(contacts[i].returninfo("nickname"));
		std::cout << "|" << std::endl;
		max = i;
	}
	std::cout << "└----------┴----------┴----------┴----------┘" << std::endl;
	std::cout << "index:" << std::endl;
	std::cin >> buff;
	i = buff[0] - '0';
	if (i >= 0 && i <= max)
	{
		std::cout << "first_name:" << contacts[i].returninfo("first_name") << std::endl;
		std::cout << "last_name:" << contacts[i].returninfo("last_name") << std::endl;
		std::cout << "nickname:" << contacts[i].returninfo("nickname") << std::endl;
		std::cout << "phone_number:" << contacts[i].returninfo("phone_number") << std::endl;
		std::cout << "darkest_secret:" << contacts[i].returninfo("darkest_secret") << std::endl;
	}
}

int	main()
{
	Phonebook		phonebook;
	std::int16_t	index = 0;
	std::int16_t	maxindex = 0;
	std::string		command;
	while (2)
	{
		std::cin >> command;
		if (command == "ADD")
		{
			if (index == 8)
				index = 0;
			phonebook.fillcontact(index);
			index++;
			maxindex++;
		}
		else if (command == "SEARCH")
		{
			phonebook.renderlist(maxindex);
		}
		else if (command == "EXIT")
			break;
		command = "";
	}
	return (0);
}
