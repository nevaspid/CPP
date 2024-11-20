/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:20:42 by gloms             #+#    #+#             */
/*   Updated: 2024/10/28 15:17:53 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	*this = src;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &rhs) {
	(void)rhs;
	return (*this);
}

double	isnumber(char c) {
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

std::string typeChecker(std::string *arg) {
	if (*arg == "-inff" || *arg == "-inf")
		return "char : impossible\nint : impossible\nfloat : -inff\ndouble : -inf\n";
	if (*arg == "+inff" || *arg == "+inf")
		return "char : impossible\nint : impossible\nfloat : +inff\ndouble : +inf\n";
	if (*arg == "nanf" || *arg == "nan")
		return "char : impossible\nint : impossible\nfloat : nanf\ndouble : nan\n";
	if (arg->length() == 1 && !isdigit(arg[0][0]))
		return "char";
	if (arg->length() == 3 && arg[0][0] == '\'' && isdigit(arg[0][1]) && arg[0][2] == '\'') {
		*arg = arg->substr(1, 1);
		return "char";
	}
	if (isnumber(arg[0][0]) || arg[0][0] == '-' || arg[0][0] == '+') {
		size_t i = 1;
		while (i < arg->length() && isnumber(arg[0][i]))
			i++;
		if (arg[0][i] == '\0')
			return "int";
		if (arg[0][i] == '.' && isnumber(arg[0][i + 1])) {
			i++;
			while (i < arg->length() && isnumber(arg[0][i]))
				i++;
			if (arg[0][i] == '\0')
				return "double";
			if (arg[0][i] == 'f' && arg[0][i + 1] == '\0')
				return "float";
		}
	}
	return "Invalid input";
}

void convertChar(char c) {
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << (int)c << std::endl;
	std::cout << "float: " << (float)c << ".0f" << std::endl;
	std::cout << "double: " << (double)c << ".0" << std::endl;
}

void convertInt(int n) {
	if (n >= 0 && n <= 127) {
		if (n >= 32 && n <= 126)
			std::cout << "char: '" << (char)n << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << n << ".0f" << std::endl;
	std::cout << "double: " << n << ".0" << std::endl;
}

void convertFloat(float n) {
	if ((int)n >= 0 && (int)n <= 127) {
		if ((int)n >= 32 && (int)n <= 126)
			std::cout << "char: '" << (char)((int)n) << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << (int)n << std::endl;
	if (n - (int)n == 0.0f) {
		std::cout << "float: " << n << ".0f" << std::endl;
		std::cout << "double: " << (double)n << ".0" << std::endl;
	}
	else {
		std::cout << std::fixed << std::setprecision(50) << "float: " << n << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(50) << "double: " << (double)n << std::endl;
	}
}

void convertDouble(double n) {
	if ((int)n >= 0 && (int)n <= 127) {
		if ((int)n >= 32 && (int)n <= 126)
			std::cout << "char: '" << (char)((int)n) << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << (int)n << std::endl;
	if (n - (int)n == 0.0) {
		std::cout << "float: " << (float)n << ".0f" << std::endl;
		std::cout << "double: " << n << ".0" << std::endl;
	}
	else {
		std::cout << std::fixed << std::setprecision(50) << "float: " << (float)n << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(50) << "double: " << n << std::endl;
	}
}

void	ScalarConverter::convert(std::string toConvert) {
	std::string type = typeChecker(&toConvert);
	if (type == "char")
		return convertChar((char)toConvert[0]);
	else if (type == "int")
		return convertInt(atoi(toConvert.c_str()));
	else if (type == "float")
		convertFloat(atof(toConvert.c_str()));
	else if (type == "double")
		convertDouble(atof(toConvert.c_str()));
	else
		std::cout << type << std::endl;
}
