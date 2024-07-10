/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:13:14 by gloms             #+#    #+#             */
/*   Updated: 2024/07/08 19:51:10 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hp, int ep, int ad) : ClapTrap(name,
	hp, ep, ad)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &rhs) {
    if (this != &rhs)
		return *this;
    return *this;
}
