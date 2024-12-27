/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:17:37 by gloms             #+#    #+#             */
/*   Updated: 2024/12/23 21:26:01 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}

Span::~Span() {}

Span::Span(const Span &src) {
	*this = src;
}

Span &Span::operator = (const Span &rhs) {
	this->_maxSize = rhs._maxSize;
	return *this;
}

void Span::addNumber(unsigned int number) {
	if (_numbers.size() > _maxSize)
		throw std::runtime_error("max size reached.");
	_numbers.push_back(number);
}

unsigned int Span::shortestSpan() {
	if (_numbers.size() < 2)
		throw std::runtime_error("too few argument in container.");
	std::sort(_numbers.begin(), _numbers.end());
	unsigned int minSpan = std::abs(static_cast<int>(_numbers[1]) - static_cast<int>(_numbers[0]));
	for (size_t i = 1; i < _numbers.size() - 1; ++i) {
		unsigned int span = std::abs(static_cast<int>(_numbers[i + 1]) - static_cast<int>(_numbers[i]));
        if (span < minSpan) {
            minSpan = span;
        }
    }
	return minSpan;
}

unsigned int Span::longestSpan() {
	if (_numbers.size() < 2)
		throw std::runtime_error("too few argument in container.");
	std::sort(_numbers.begin(), _numbers.end());
	return _numbers.back() - _numbers.front();
}
