/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:15 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/03/30 10:19:41 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "PhoneBook.hpp"

void	message_print()
{
    std::cout << "PhoneBook 📖" << std::endl;
    std::cout << "Type the right menu and press enter" << std::endl;
    std::cout << "| ADD | SEARCH | EXIT |" << std::endl;
    std::cout << std::endl;
}

int main()
{
	PhoneBook	phonebook;
	std::string	str = "";

	while(str.compare("EXIT"))
	{
		if (str.compare("ADD") == 0)
			phonebook.add();
		else if (str.compare("SEARCH") == 0)
			phonebook.search();
		else
			std::cout << "Please write down among \"ADD, SEARCH, EXIT\"" <<std::endl;
		message_print();
		std::cout << "PhoneBook$ " << std::flush;
		std::cin >> str;
	}
	return (0);
}