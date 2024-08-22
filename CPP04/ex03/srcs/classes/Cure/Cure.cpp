/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:20:48 by gloms             #+#    #+#             */
/*   Updated: 2024/08/21 23:54:45 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	std::cout << "constructor called for cure" << std::endl;
}

Cure::~Cure() {
	std::cout << "destructor called for cure" << std::endl;
}

Cure::Cure(const Cure &src) {
	std::cout << "copy constructor called for cure" << std::endl;
}

Cure &Cure::operator = (const Cure &rhs) {
	return *this; //je vois pas dans quels cas ca peut me servir
}

void Cure::use(ICharacter &target) {
	std::cout << "heals " << target.getName() << "'s wounds" << std::endl;
}

 Cure *Cure::clone() const{
	//- a realiser
 }
