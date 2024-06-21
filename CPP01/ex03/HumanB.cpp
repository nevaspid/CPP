/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:42:17 by gloms             #+#    #+#             */
/*   Updated: 2024/06/19 17:09:53 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	std::cout << "constructor called for : " << this->_name << std::endl;
}

HumanB::~HumanB() {
	std::cout << "destructor called for : " << this->_name << std::endl;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->weapon->getType() << std::endl;
}
