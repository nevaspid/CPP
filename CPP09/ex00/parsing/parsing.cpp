/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:51:05 by gloms             #+#    #+#             */
/*   Updated: 2025/01/29 14:37:13 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../BitcoinExchange/BitcoinExchange.hpp"
#include "../Date/Date.hpp"
#include "../Value/Value.hpp"

int myStoi(std::string str) {
	int res = 0;
	for (size_t i = 0; i < str.size(); ++i) {
		res = res * 10 + str[i] - '0';
	}
	return res;
}

int countOccurences(std::string line, char toCount) {
    int count = 0;
    for (size_t i = 0; i < line.size(); ++i) {
        if (line[i] == toCount) {
            ++count;
        }
    }
    return count;
}

bool checkDate(std::string inputFileString) {
	std::string year = inputFileString.substr(0, 4);
	std::string month = inputFileString.substr(5, 2);
	std::string day = inputFileString.substr(8, 2);
	int 		yearInt = myStoi(year);
	int 		monthInt = myStoi(month);
	int 		dayInt = myStoi(day);

	if (yearInt < 2009 || yearInt > 2025 ||
		 monthInt < 1 || monthInt > 12 ||
		 	dayInt < 1 || dayInt > 31 ||
				(monthInt % 2 == 0 && dayInt > 30) ||
					(monthInt == 2 && dayInt > 28 && yearInt % 4 != 0) ||
						(monthInt == 2 && dayInt > 29 && yearInt % 4 == 0)) {
		return false;
	}
	return true;
}

void checkValue(std::string inputFileString) {
	float val = std::atof((inputFileString).c_str());
	if (val < 0) {
		throw std::runtime_error("Error: not a positive number");
	}
	if (val > 1000) {
		throw std::runtime_error("Error: too large a number");
	}
}

bool checkLine(std::string line) {
	float val = std::atof((line.substr(line.find(" | ") + 3, line.size() - 13)).c_str());

	if (val < 0) {
		throw std::runtime_error("Error: not a positive number");
	}
	if (countOccurences(line, '-') != 2) {
		std::runtime_error("Error: bad input => 2001-42-42");
		return false;
	}
	else if (countOccurences(line, '|') != 1) {
		throw std::runtime_error("Error: bad input => 2001-42-42");
		return false;
	}
	else if (countOccurences(line, ' ') != 2) {
		throw std::runtime_error("Error: bad input => 2001-42-42");
		return false;
	}
	else if (line.substr(10, 3) != " | ") {
		throw std::runtime_error("Error: bad input => 2001-42-42");
		return false;
	}
	else if (checkDate(line) == false) {
		throw std::runtime_error("Error: bad input => 2001-42-42");
		return false;
	}
	if (val > 1000) {
		throw std::runtime_error("Error: too large a number");
	}
	return true;
}
