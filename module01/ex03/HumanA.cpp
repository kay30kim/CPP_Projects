/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:32:29 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 15:38:39 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
}

HumanA::~HumanA(){}

void HumanA::attack() {
	if (this->weapon.getType() != "")
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a weapon to attack" << std::endl;
}