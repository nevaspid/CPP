/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:42:09 by gloms             #+#    #+#             */
/*   Updated: 2024/06/19 16:57:20 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon	&weapon) : _name(name), _weapon(weapon) { // liste d'initialisation
    std::cout << "constructor called for : " << this->_name << std::endl;
}

HumanA::~HumanA() {
    std::cout << "destructor called for : " << this->_name << std::endl;
}

void HumanA::attack() {
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
