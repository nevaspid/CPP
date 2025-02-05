/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:48:35 by gloms             #+#    #+#             */
/*   Updated: 2025/02/05 15:55:17 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parser/parser.hpp"
#include "RPN.hpp"

bool RPN(std::string inputString) {
	std::stack<int> stack;
	std::string number = "";
	for (unsigned long int i = 0; i < inputString.size(); i++) {
		if (isNumber(inputString[i])) {
			number += inputString[i];
		}
		else if (inputString[i] == ' ') {
			if (!number.empty()) {
				stack.push(std::atoi((number).c_str()));
				number = "";
			}
		}
		else if (isOperator(inputString[i])) {
			if (stack.size() < 2)
				return false;
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			if (inputString[i] == '+')
				stack.push(b + a);
			else if (inputString[i] == '-')
				stack.push(b - a);
			else if (inputString[i] == '*')
				stack.push(b * a);
			else if (inputString[i] == '/')
				stack.push(b / a);
		}
	}
	if (stack.size() != 1)
		return false;
	std::cout << stack.top() << std::endl;
	return true;
}
