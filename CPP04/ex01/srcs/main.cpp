/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:00:34 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 20:46:50 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Dog/Dog.hpp"
#include "classes/Cat/Cat.hpp"
#include "classes/WrongCat/WrongCat.hpp"

int main()
{
	Animal *CatsAndDogs[6];

	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			CatsAndDogs[i] = new Dog();
		else
			CatsAndDogs[i] = new Cat();
	}
	for (int i = 0; i < 6; i++)
        delete CatsAndDogs[i]; // Libère chaque objet Animal
}
