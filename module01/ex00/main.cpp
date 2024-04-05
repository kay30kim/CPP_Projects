/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:51:39 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 13:05:04 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	std::string name;

	std::cout << "Put Zombie name for stack : " << std::flush;
	std::cin >> name;
	Zombie zombie1(name);
	zombie1.announce();
	
	std::cout << "Put Zombie name for heap : " << std::flush;
	std::cin >> name;
	// Zombie *zombie2 = zombie1.newZombie(name);
	Zombie *zombie2 = newZombie(name);
	zombie2->announce();
	
	std::cout << "Press 1 for random Zombie : " << std::flush;
	std::cin >> name;
	// zombie1.randomChump("rand");
	randomChump("rand");
	
	std::cout << "Press 1 to delete\n" << std::flush;
	std::cin >> name;
	delete zombie2;
	return 0;
}