/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:10:58 by gloms             #+#    #+#             */
/*   Updated: 2025/01/30 11:29:03 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"
#include "../parsing/parsing.hpp"

Date::Date(std::string inputFileString) {
	std::string year = inputFileString.substr(0, 4);
	std::string month = inputFileString.substr(5, 2);
	std::string day = inputFileString.substr(8, 2);
	int 		yearInt = myStoi(year);
	int 		monthInt = myStoi(month);
	int 		dayInt = myStoi(day);

	// if (yearInt < 2009 || yearInt > 2025 ||
	// 	 monthInt < 1 || monthInt > 12 ||
	// 	 	dayInt < 1 || dayInt > 31 ||
	// 			(monthInt % 2 == 0 && dayInt > 30) ||
	// 				(monthInt == 2 && dayInt > 28 && yearInt % 4 != 0) ||
	// 					(monthInt == 2 && dayInt > 29 && yearInt % 4 == 0)) {
	// 	throw std::runtime_error("Error: bad input => 2001-42-42");
	// }
	_year = yearInt;
	_month = monthInt;
	_day = dayInt;
}

Date::~Date() {}

bool Date::operator > (const Date &rhs) const {
	if (_year != rhs._year)
		return _year > rhs._year;
	else if (_month != rhs._month)
		return _month > rhs._month;
	else
		return _day > rhs._day;
}

bool Date::operator >= (const Date &rhs) const {
	if (_year != rhs._year)
		return _year > rhs._year;
	else if (_month != rhs._month)
		return _month > rhs._month;
	else
		return _day >= rhs._day;
}

bool Date::operator < (const Date &rhs) const {
	if (_year != rhs._year)
		return _year < rhs._year;
	else if (_month != rhs._month)
		return _month < rhs._month;
	else
		return _day < rhs._day;
}

bool Date::operator <= (const Date &rhs) const {
	if (_year != rhs._year)
		return _year < rhs._year;
	else if (_month != rhs._month)
		return _month < rhs._month;
	else
		return _day <= rhs._day;
}

bool Date::operator == (const Date &rhs) const {
	return _year == rhs._year && _month == rhs._month && _day == rhs._day;
}

bool Date::operator != (const Date &rhs) const {
        return !(*this == rhs);
    }

const Date &Date::operator = (const Date &rhs) {
	if (this != &rhs) {
		_year = rhs._year;
		_month = rhs._month;
		_day = rhs._day;
	}
	return *this;
}

Date::Date(const Date &src) {
	*this = src;
}
