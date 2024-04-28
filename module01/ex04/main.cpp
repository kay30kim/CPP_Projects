/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:40:58 by kyung-ki          #+#    #+#             */
/*   Updated: 2024/04/05 15:41:08 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Copy.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Put 4 arguments" << std::endl;
		return EXIT_FAILURE;
	} else {
		Copy copy_file(argv[1]);
		copy_file.replace(argv[2], argv[3]);
	}
	return 0;
}