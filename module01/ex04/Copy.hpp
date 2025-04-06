/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copy.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:42:56 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 16:03:26 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPY_HPP
#define COPY_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class Copy 
{
private:
	std::string file1;
	std::string file2;
public:
	Copy(std::string filename);
	~Copy();
	void replace(std::string s1, std::string s2);
};

#endif