/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:54:13 by gloms             #+#    #+#             */
/*   Updated: 2024/08/21 23:20:38 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "../ICharacter/ICharacter.hpp"

AMateria::AMateria() {
	std::cout << "constructor called for AMateria" << std::endl;
}

AMateria::AMateria(std::string const &type) {
	std::cout << "constructor called for AMateria" << type << std::endl;
	this->_type = type;
}

AMateria::~AMateria() {
	std::cout << "destructor called for AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &src) {
	this->_type = src._type;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	return ;
}
