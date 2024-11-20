/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:24:07 by gloms             #+#    #+#             */
/*   Updated: 2024/11/19 14:23:45 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main() {
	char str[] = "Basic phrase";
	std::cout << "str = " << str << std::endl;
	std::cout << "iter..." << std::endl;
	iter(str, 7, ftPlusOne<char>);
	std::cout << "str = " << str << std::endl;

	std::cout << std::endl;

	int intTab[] = {1, 2, 3, 4, 5};
	std::cout << "intTab = ";
	for (int i = 0; i < 5; i++)
		std::cout << intTab[i] << " ";
	std::cout << std::endl;
	std::cout << "iter..." << std::endl;
	iter(intTab, 3, ftPlusOne<int>);
	std::cout << "intTab = ";
	for (int i = 0; i < 5; i++)
		std::cout << intTab[i] << " ";
	std::cout << std::endl;

	std::cout << std::endl;

	double doubleTab[] = {0.1, 0.2, 0.3, 0.4, 0.5};
	std::cout << "doubleTab = ";
	for (int i = 0; i < 5; i++)
		std::cout << doubleTab[i] << " ";
	std::cout << std::endl;
	std::cout << "iter..." << std::endl;
	iter(doubleTab, 3, ftPlusOne<double>);
	std::cout << "doubleTab = ";
	for (int i = 0; i < 5; i++)
		std::cout << doubleTab[i] << " ";
	std::cout << std::endl;

	return 0;
}
