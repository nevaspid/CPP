/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:38:38 by gloms             #+#    #+#             */
/*   Updated: 2024/08/30 16:25:11 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	std::cout << "constructor called for ice" << std::endl;
}

Ice::~Ice() {
	std::cout << "destructor called for ice" << std::endl;
}

Ice::Ice(const Ice &src) {
	std::cout << "copy constructor called for cure" << std::endl;
}

Ice &Ice::operator = (const Ice &rhs) {
	// TODO: insert return statement here
}

void Ice::use(ICharacter &target) {
	std::cout << "shoots an ice bolt at" << target.getName() << std::endl;
}

Ice *Ice::clone() const {
	return (new Ice());
}
