/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:42:22 by gloms             #+#    #+#             */
/*   Updated: 2024/06/16 12:21:52 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
	std::cout << "Constructor called for weapon type : "<< this->_type << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Destructor called for weapon type : "<< this->_type << std::endl;
}

const std::string	&Weapon::getType()
{
	std::string &ref = this->_type;
	return (ref);
}

void	Weapon::setType(std::string newType) {
	this->_type = newType;
}
