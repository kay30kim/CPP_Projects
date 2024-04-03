/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:15 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/03/30 10:19:41 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->index = -1;
}

Contact::~Contact(void){}

std::string	Contact::getStr(void)
{
	std::string str = "";
	while (true)
	{
		std::cout << std::flush;
		std::getline(std::cin, str);
		if (std::cin.good() && !str.empty())
			break;
		else
		{
			std::cin.clear(); // input status clear
			// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "[ERROR] You put invalid string. Not empty please\n";
		}
	}
	return (str);
}

void	Contact::setContact(int i)
{
	this->index = i;
	std::cout << "First name : ";
	this->first_name = this->getStr();
	std::cout << "Last name : ";
	this->last_name = this->getStr();
	std::cout << "Nick name : ";
	this->nick_name = getStr();
	std::cout << "Phone number : ";
	this->phone_number = getStr();
	std::cout << "Darkest secret : ";
	darkest_secret = getStr();
}

void	Contact::displayFormat(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	Contact::display(void)
{
	if (this->index == -1)
		return ;
	std::cout << "#" << index << std::endl;
	this->displayFormat(this->first_name);
	std::cout << "|";
	this->displayFormat(this->last_name);
	std::cout << "|";
	displayFormat(this->nick_name);
	std::cout << std::endl;
}

void	Contact::displayAll(void)
{
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nick_name << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
	std::cout << "Darkset secret : " << this->darkest_secret << std::endl;
}