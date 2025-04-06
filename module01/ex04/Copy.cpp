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
	if (s1.empty()) {
		std::cerr << "String to replace (s1) cannot be empty." << std::endl;
		return;
	}
	if (s1 == s2) {
		std::cerr << "s1 and s2 are the same. No replacement needed." << std::endl;
		return;
	}
	std::ifstream input_fs(this->file1.c_str());
	if (input_fs.is_open()) {
		std::string content;
		if (std::getline(input_fs, content, '\0')) {
			std::ofstream output_fs(this->file2.c_str());
			size_t pos = content.find(s1);
			while (pos != std::string::npos) {
				printf("pos = %lu\n",pos);
				content.erase(pos, s1.length());
				content.insert(pos, s2);
				pos = content.find(s1);
			}
			output_fs << content;
			output_fs.close();
		}
		else
			std::cerr << "Empty file found." << std::endl;
		input_fs.close();
	} else {
		std::cerr << "Unable to open the file." << std::endl;
        exit(EXIT_FAILURE);
	}
}