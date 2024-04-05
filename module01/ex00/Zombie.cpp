/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:54:40 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 13:21:00 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie::Zombie(){}
Zombie::Zombie(std::string name){
	this->name = name;
}
Zombie::~Zombie(){
	std::cout << "Zombie : " << this->name << " destroyed\n";
}

void Zombie::announce(void) {
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ...\n";
}