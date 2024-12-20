/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:38:58 by gloms             #+#    #+#             */
/*   Updated: 2024/12/18 09:03:17 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main() {
	std::vector<int> intVector;
	intVector.push_back(1);
	intVector.push_back(2);
    intVector.push_back(3);
    intVector.push_back(4);
    intVector.push_back(5);
    intVector.push_back(6);
    intVector.push_back(7);
	try {
		std::vector<int>::iterator it = easyfind(intVector, 6);
		std::cout << "Found : " << *it << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		std::vector<int>::iterator it = easyfind(intVector, 8);
		std::cout << "Found : " << *it << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception : " << e.what() << std::endl;
	}
}
