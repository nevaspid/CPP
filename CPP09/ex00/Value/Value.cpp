/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Value.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:57:02 by gloms             #+#    #+#             */
/*   Updated: 2025/01/29 13:00:20 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Value.hpp"

Value::Value(std::string inputFileString) {
	float val = std::atof((inputFileString).c_str());
	_value = val;
}

Value::~Value() {}

float Value::getValue() const{
	return (_value);
}

bool Value::operator < (const Value &rhs) {
	return _value < rhs._value;
}

const Value &Value::operator = (const Value &rhs)
{
	if (this != &rhs) {
		_value = rhs._value;
	}
	return *this;
}

Value::Value(const Value &src) {
	*this = src;
}
