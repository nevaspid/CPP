/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:00:34 by gloms             #+#    #+#             */
/*   Updated: 2024/07/15 14:31:33 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Dog/Dog.hpp"
#include "classes/Cat/Cat.hpp"

int main()
{
	Animal *animals[2];

	for (int i = 0; i < 2; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	std::cout << std::endl;

	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}

	std::cout << std::endl << std::endl;

	Cat *cat = new Cat;
	Cat catcpy(*cat);

	std::cout << std::endl;

	delete cat;
}
