/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:01:39 by gloms             #+#    #+#             */
/*   Updated: 2024/07/08 20:12:32 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name, int hp, int ep, int ad) : ClapTrap(name,
	hp, ep, ad)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "*high five* yepee baby" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &rhs) {
    if (this != &rhs)
		return *this;
    return *this;
}
