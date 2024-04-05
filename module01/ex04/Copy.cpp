/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copy.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:42:35 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 16:17:49 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Copy.hpp"

Copy::Copy(std::string filename) {
	this->file1 = filename;
	this->file2 = filename + ".replace";
}

Copy::~Copy(){}

void Copy::replace(std::string s1, std::string s2) {
	std::ifstream input_fs(this->file1);
	if (input_fs.is_open()) {
		std::string content;
		if (std::geline(input_fs, content, '\0')) {
			std::ofstrem output_fs(this->file2);
			size_t pos = content.find(toFind);
			while (pos != std::string::npos) {
				content.erase(pos, toFind.length());
				content.insert(pos, replace);
				pos = content.
			}
		}
		
	}
}