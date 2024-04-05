/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:09:32 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 14:07:08 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::Zombie(std::string name){
	this->name = name;
}
Zombie::~Zombie() {
	std::cout << "Zombie : " << this->name << " destroyed\n";
}
void Zombie::setName(std::string name) {
	this->name = name;
}
void Zombie::announce(void) {
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ...\n";
}