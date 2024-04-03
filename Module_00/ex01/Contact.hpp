/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:15 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/03/30 10:19:41 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "header.h"

class Contact
{
private:
	int			index;
	std::string	first_name;
	std::string last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact(void);
	~Contact(void);
	void	setContact(int i);
	void	display(void);
	void	displayFormat(std::string str);
	void	displayAll(void);
	static std::string	getStr(void);
};
#endif