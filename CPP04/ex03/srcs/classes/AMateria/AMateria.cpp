/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:54:13 by gloms             #+#    #+#             */
/*   Updated: 2024/08/16 23:45:09 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "../ICharacter/ICharacter.hpp"

AMateria::AMateria() {
	std::cout << "constructor called for AMateria" << std::endl;
}

AMateria::AMateria(std::string const &type) {
	std::cout << "constructor called for AMateria" << type << std::endl;
	this->type = type;
}

AMateria::~AMateria() {
	std::cout << "destructor called for AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &type) {
	this->type = type.type;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

std::string const &AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter &target) {
	return ;
}
