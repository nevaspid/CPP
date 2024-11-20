/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:40:25 by gloms             #+#    #+#             */
/*   Updated: 2024/11/20 16:09:41 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	// === Int tests ===
	Array<int> a(5);
	for (int i = 0; i < a.size(); i++) // Fill array with index
		a[i] = i;
	for (int i = 0; i < a.size(); i++) // Print array
		std::cout << a[i] << " ";
	std::cout << std::endl;
	try { // Test out of bound
		a[6] = 42;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < a.size(); i++) // Fill array with 42
		a[i] = 42;
	Array<int> b(a); // Copy constructor
	for (int i = 0; i < b.size(); i++) // Print array
		std::cout << b[i] << " ";
	std::cout << std::endl;

	// === String tests ===
	Array<std::string> c(3);
	c[0] = "Hello"; // Fill array with string
	c[1] = "World";
	c[2] = "!";
	for (int i = 0; i < c.size(); i++) // Print array
		std::cout << c[i] << " ";
	std::cout << std::endl;
	try { // Test out of bound
		c[3] = "42";
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// === edlb tests ===
	const Array<int> haha(5);
	Array<int> test(haha);

	test = haha;

	std::cout << haha[0] << std::endl;
	return (0);
}
