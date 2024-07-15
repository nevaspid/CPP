/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:37:23 by gloms             #+#    #+#             */
/*   Updated: 2024/07/15 14:10:16 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

std::string Cat::getType() const {
	return (this->_type);
}

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "constructor called for kitty cat of type : " << this->_type << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "destructor called for kitty cat" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

void Cat::makeSound() const {
	std::cout << "miaou en brrr" << std::endl;
}

Cat &Cat::operator = (const Cat &rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}
