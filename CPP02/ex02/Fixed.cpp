/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:30:37 by gloms             #+#    #+#             */
/*   Updated: 2024/07/01 13:23:09 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//Constructors

Fixed::Fixed(const float value) {
    this->_value = std::roundf(value * (1 << _bits));
}

Fixed::Fixed(const int value) : _value(value << Fixed::_bits) {
}

Fixed::Fixed() : _value(0) {
}


Fixed::Fixed(const Fixed &src) {
	*this = src;
}

//Destructors

Fixed::~Fixed() {
}

//Surcharges

Fixed &Fixed::operator = (const Fixed &src) {
	this->_value = src.getRawBits();
	return (*this);
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator == (const Fixed fixed) const {
	if (this->getRawBits() == fixed.getRawBits())
		return (true);
	else
	 	return (false);
}

bool Fixed::operator != (const Fixed fixed) const {
	if (this->getRawBits() != fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator >= (const Fixed fixed) const {
	if (this->getRawBits() >= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator <= (const Fixed fixed) const {
	if (this->getRawBits() <= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator > (const Fixed fixed) const {
	if (this->getRawBits() > fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator < (const Fixed fixed) const {
	if (this->getRawBits() < fixed.getRawBits())
		return (true);
	else
		return (false);
}

Fixed Fixed::operator + (const Fixed fixed) const {
	Fixed result(this->toFloat() + fixed.toFloat());
	return (result);
}

Fixed Fixed::operator - ( const Fixed fixed ) const {
	Fixed result(this->toFloat() - fixed.toFloat());
	return (result);
}

Fixed Fixed::operator * (const Fixed fixed) const {
	Fixed result(this->toFloat() * fixed.toFloat());
	return (result);
}

Fixed Fixed::operator / (const Fixed fixed) const {
	Fixed result(this->toFloat() / fixed.toFloat());
	return (result);
}

Fixed &Fixed::operator ++ () {
	this->_value++;
	return (*this);
}

Fixed Fixed::operator ++ (int) {
	Fixed temp = *this;
	this->_value++;
	return (temp);
}

Fixed &Fixed::operator -- () {
	this->_value--;
	return (*this);
}

Fixed Fixed::operator -- (int) {
	Fixed temp = *this;
	this->_value--;
	return (temp);
}

//Methods

int Fixed::getRawBits(void) const {
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

Fixed Fixed::min(Fixed &a, Fixed &b) {
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b) {
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b) {
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b) {
	if (a >= b)
		return (a);
	else
		return (b);
}

