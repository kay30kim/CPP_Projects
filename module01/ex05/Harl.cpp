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
void Harl::complain(std::string str) {
	void (Harl::*complainFunction)();
	if (str == "DEBUG")
		complainFunction = &Harl::debug;
	else if (str == "INFO")
		complainFunction = &Harl::info;
	else if (str == "WARNING")
		complainFunction = &Harl::warning;
	else if (str == "ERROR")
		complainFunction = &Harl::error;
	else {
		std::cerr << "Please type among DEBUG, INFO, WARNING and ERROR\n";
		return ;
	}
	(this->*complainFunction)();
}
void Harl::complain2(std::string str) {
	// void Harl::*afpComplain()  => 함수 양옆에 괄호 필요
	//  void (Harl::*funcs[4])() = {&Harl::debug(), } => debug()로 괄호하면 안 됨

	// void (Harl::*funcs[4])() = {&Harl::debug, &Harl::info, &Harl::error, &Harl::warning};
	t_func  funcs[] = {&Harl::debug, &Harl::info, &Harl::error, &Harl::warning};
	
	int idx = -1;
	if (str == "DEBUG")
		idx = 0;
	else if (str == "INFO")
		idx = 1;
	else if (str == "ERROR")
		idx = 2;
	else if (str == "WARNING")
		idx = 3;
	else {
		std::cerr << "Please type among DEBUG, INFO, WARNING and ERROR\n";
		return ;
	}
	 if (idx >= 0 && idx < 4) {
		(this->*funcs[idx])();
	} 
}