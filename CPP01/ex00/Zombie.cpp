/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:08:17 by gloms             #+#    #+#             */
/*   Updated: 2024/06/07 23:26:44 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	Zombie::_name = name;
	std::cout << "Zombie constructor called for : " << this->_name << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie destructor called for : " << this->_name << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
