/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:54:50 by gloms             #+#    #+#             */
/*   Updated: 2025/02/03 15:46:46 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.hpp"

bool isOperator(char c) {
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool isNumber(char c) {
	return (c >= '0' && c <= '9');
}

bool countNumbers(std::string inputString) {
	int count = 0;
	for (int i = 0; i < inputString.size(); i++) {
		if (isNumber(inputString[i]))
			count++;
	}
	return count;
}

bool countOperators(std::string inputString) {
	int count = 0;
	for (int i = 0; i < inputString.size(); i++) {
		if (isOperator(inputString[i]))
			count++;
	}
	return count;
}

bool parser(std::string inputString) {
	if (inputString.empty())
		return false;
	if (isOperator(inputString[0]))
		return false;
	if (countOperators(in))
}
