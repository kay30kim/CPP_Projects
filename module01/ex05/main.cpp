/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:40:58 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 15:41:08 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	std::string str="";
	Harl		harl;

	while (1) {
		std::cout << "Please write down cmd among this" << std::endl;
		std::cout << "DEBUG | INFO | ERROR | WARNING | EXIT" << std::endl;
		std::cout << "> " << std::flush;
		std::cin >> str;
		if (str.compare("EXIT") == 0)
			break;
		harl.complain(str);
		std::cout << "\n";
	}

	return 0;
}