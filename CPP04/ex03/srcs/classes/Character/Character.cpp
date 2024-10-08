/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:48:08 by gloms             #+#    #+#             */
/*   Updated: 2024/10/01 17:06:03 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	for (int idx = 0; idx < 4; idx++)
	this->_inventory[idx] = 0;
	std::cout << "Constructor called for a Character" << std::endl;
}

Character::~Character() {
	std::cout << "Destructor called for " << this->_name << std::endl;
}

Character::Character(const Character &src) {
	for (int idx = 0; idx < 4; idx++)
		this->_inventory[idx] = 0;
	*this = src;
}

Character::Character(std::string name) : _name(name) {
	for (int idx = 0; idx < 4; idx++)
		this->_inventory[idx] = 0;
	std::cout << "Constructor called for " << this->_name << std::endl;
}

std::string const &Character::getName() const {
	return (this->_name);
}

Character &Character::operator = (const Character &rhs) {
	this->_name = rhs._name;
	return (*this);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == 0)
			this->_inventory[i] = m; //ptet met etoil
		else
			std::cout << "inventory already full" << std::endl;
	}
	return;
}

void Character::unequip(int idx) {
	this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx] != 0)
		_inventory[idx]->use(target);
}
