/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:52:12 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 13:02:38 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie* Zombie::newZombie(std::string name) 
Zombie* newZombie(std::string name) 
{
	Zombie *temp = new Zombie(name);
	return temp;
}