/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:17:37 by gloms             #+#    #+#             */
/*   Updated: 2024/12/19 19:58:13 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}

Span::~Span() {}

Span &Span::operator = (const Span &rhs) {
	this->_maxSize = rhs._maxSize;
}

void Span::addNumber(unsigned int number) {
	if (_numbers.size() > _maxSize)
		throw std::runtime_error("max size reached.");
	_numbers.push_back(number);
}

unsigned int Span::shortestSpan() {
	unsigned int returnedValue;
	std::sort(_numbers.begin(), _numbers.end());
	for (std::vector<unsigned int>::iterator it = _numbers.begin(); it != _numbers.end(); ++it) {

	}


}

unsigned int Span::longestSpan() {
	std::sort(_numbers.begin(), _numbers.end());
	return (_numbers.end() - _numbers.begin());
}
