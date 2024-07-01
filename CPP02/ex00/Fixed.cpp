/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:30:37 by gloms             #+#    #+#             */
/*   Updated: 2024/07/01 11:56:56 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called for Fixed" << std::endl;
	*this = src;
}

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called for Fixed" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called for Fixed" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called for Fixed" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}
