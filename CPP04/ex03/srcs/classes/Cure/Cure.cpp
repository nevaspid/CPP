/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:20:48 by gloms             #+#    #+#             */
/*   Updated: 2024/10/01 18:04:18 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	std::cout << "constructor called for cure" << std::endl;
	this->_type = "Cure";
}

Cure::~Cure() {
	std::cout << "destructor called for cure" << std::endl;
}

Cure::Cure(const Cure &src) {
	std::cout << "copy constructor called for cure" << std::endl;
	*this = src;
}

Cure &Cure::operator = (const Cure &rhs) {
	this->_type = rhs._type;
	return *this;
}

void Cure::use(ICharacter &target) {
	std::cout << "heals " << target.getName() << "'s wounds" << std::endl;
}

Cure *Cure::clone() const {
	return (new Cure());
}

std::string Cure::getType() {
	return (this->_type);
}
