/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:33:11 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 16:40:19 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
private:
	void debug();
	void info();
	void error();
	void warning();
public:
	Harl();
	~Harl();
	void complain(std::string str);
	void complain2(std::string str);
};

typedef void (Harl::*t_func) ( void );
#endif