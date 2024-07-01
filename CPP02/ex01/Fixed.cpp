/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:30:37 by gloms             #+#    #+#             */
/*   Updated: 2024/07/01 12:04:30 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//Constructors

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called for Fixed" << std::endl;
    this->_value = std::roundf(value * (1 << _bits));
}

Fixed::Fixed(const int value) : _value(value << Fixed::_bits) {
	std::cout << "Int contructor called for Fixed" << std::endl;
}

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called for Fixed" << std::endl;
}


Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called for Fixed" << std::endl;
	*this = src;
}

//Destructors

Fixed::~Fixed() {
	std::cout << "Destructor called for Fixed" << std::endl;
}

//Methods

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called for Fixed" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _bits);
}

int Fixed::toInt(void) const {
    return _value >> _bits;
}
