/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:00:34 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 19:46:17 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Dog/Dog.hpp"
#include "classes/Cat/Cat.hpp"
#include "classes/WrongCat/WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();

	delete wrong_cat;

	return 0;
}
