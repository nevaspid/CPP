/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:31:01 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 19:59:32 by gloms            ###   ########.fr       */
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
}

Dog::~Dog()
{
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
	this->_type = rhs._type;
	return *this;
}
