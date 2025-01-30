/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:41:29 by gloms             #+#    #+#             */
/*   Updated: 2025/01/30 11:32:28 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../BitcoinExchange/BitcoinExchange.hpp"

class Date {
	public :
		Date(std::string inputFileString);
		~Date();

		bool operator > (const Date &rhs)const;
		bool operator < (const Date &rhs)const;
		bool operator == (const Date &rhs)const;
		bool operator != (const Date &rhs)const;
		bool operator >= (const Date &rhs)const;
		bool operator <= (const Date &rhs)const;
		const Date &operator = (const Date &rhs);


		int getYear() const { return _year; }
		int getMonth() const { return _month; }
		int getDay() const { return _day; }
		Date(const Date &src);

	private :
		Date();

		int _year;
		int _month;
		int _day;
};
