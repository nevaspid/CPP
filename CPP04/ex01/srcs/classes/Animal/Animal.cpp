/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:52:00 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 20:02:40 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() const {
	return (this->_type);
}

Animal::Animal() {
	std::cout << "constructor called for animal" << std::endl;
}

Animal::~Animal() {
	std::cout << "destructor called for animal" << std::endl;
}

Animal &Animal::operator = (const Animal &rhs) {
	this->_type = rhs._type;
	return (*this);
}

void Animal::makeSound () const {
	std::cout << "en brrr l'animal" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
}
