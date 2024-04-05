/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:08:36 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 13:02:52 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void Zombie::randomChump(std::string name) {
void randomChump(std::string name) {
	// Zombie *now = new Zombie(name);
	// now->announce();
	Zombie zombi(name);
	zombi.announce();
}