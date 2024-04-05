/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:11:55 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 14:31:30 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str; // shallow copy?
	
	std::cout << &str << " : " << str << std::endl;
	std::cout << ptr << " : " << *ptr << std::endl;
	std::cout << &ref << " : " << ref << std::endl;
	return 0;
}