#include "ClapTrap.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:56:07 by gloms             #+#    #+#             */
/*   Updated: 2024/07/04 17:56:08 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called for : " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad) : _name(name),
	_hitPoints(hp), _energyPoints(ep), _attackDamage(ad)
{
	std::cout << "Constructor called for ClapTrap named " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for ClapTrap named " << this->_name << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
}
