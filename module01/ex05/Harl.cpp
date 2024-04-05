/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:33:09 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 16:45:49 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug() {
	std::cout << "debug" << std::endl;
}
void Harl::info() {
	std::cout << "info" << std::endl;
}
void Harl::error() {
	std::cout << "error" << std::endl;
}
void Harl::warning() {
	std::cout << "warning" << std::endl;	
}
void Harl::complain(std::string level) {
	
}