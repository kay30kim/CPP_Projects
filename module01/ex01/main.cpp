/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:09:37 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 14:02:47 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int N;
	std::string name;

	std::cout << "Put name : " << std::flush;
	std::cin >> name;
	std::cout << "Put N :" << std::flush;
	std::cin >> N;
	
	Zombie *zrr = zombieHorde(N, name);
	for (int i = 0 ; i < N; i++)
		zrr[i].announce();
	return 0;
}