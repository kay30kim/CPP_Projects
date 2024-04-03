/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:15 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/03/30 10:19:41 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->idx = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(void)
{
	this->contact[idx % MAX_NUMBER].setContact(idx % MAX_NUMBER);
	idx++;
}

void	PhoneBook::search(void)
{
	std::string	str;
	int	sidx;

	if (this->idx == 0)
	{
		std::cout << "[ERROR] You don't have any contact" << std::endl;
		return ;
	}
	for (int i = 0; i < 8 && i < idx; i++)
		this->contact[i].display();
	std::cout << "Which index do you want to search ? : " << std::endl;
	std::cin >> sidx;
	if (std::cin.good() && (sidx >= 0 && sidx < 8 && sidx < this->idx))
		this->contact[sidx].displayAll();
	else
		std::cout << "Put write number and also it should be in the range\n" << std::endl;
}

void	PhoneBook::Exit(void)
{
	exit(0);
}
