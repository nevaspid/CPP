/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:41:34 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 20:06:42 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

std::string WrongCat::getType() const {
	return (this->_type);
}

WrongCat::WrongCat()
{
	this->_type = "Cat";
	std::cout << "constructor called for kitty WrongCat of type : " << this->_type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "destructor called for kitty WrongCat of type : " << this->_type << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

void WrongCat::makeSound() const {
	std::cout << "miaou en brrr" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &rhs)
{
	this->_type = rhs._type;
	return *this;
}
