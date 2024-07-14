/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:36:59 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 20:02:57 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const {
	return (this->_type);
}

WrongAnimal::WrongAnimal() {
	std::cout << "constructor called for WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "destructor called for WrongAnimal" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &rhs) {
	this->_type = rhs._type;
	return (*this);
}

void WrongAnimal::makeSound () const {
	std::cout << "en brrr le WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	*this = src;
}
