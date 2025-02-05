/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:53:46 by gloms             #+#    #+#             */
/*   Updated: 2025/02/05 16:06:32 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/parser.hpp"
#include "RPNfiles/RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Usage: ./RPN [expression]" << std::endl;
		return 1;
	}
	// if (!parser(av[1])) {
	// 	std::cerr << "Error: invalid expressione" << std::endl;
	// 	return 1;
	// }
	if (!RPN(av[1])) {
		std::cerr << "Error: invalid expression" << std::endl;
		return 1;
	}
}
