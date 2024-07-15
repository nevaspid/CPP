/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:31:01 by gloms             #+#    #+#             */
/*   Updated: 2024/07/15 14:10:12 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

std::string Dog::getType() const {
	return (this->_type);
}

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "constructor called for Doggy dog of type : " << this->_type << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "destructor called for doggy dog" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

void Dog::makeSound () const {
	std::cout << "AwA AwA en brrr" << std::endl;
}

Dog &Dog::operator = (const Dog &rhs)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}
