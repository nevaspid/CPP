/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Value.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:47:39 by gloms             #+#    #+#             */
/*   Updated: 2025/01/29 12:29:49 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../BitcoinExchange/BitcoinExchange.hpp"

class Value {
	public :
		Value(std::string inputFileString);
		~Value();
		float getValue() const;
		bool operator < (const Value &rhs);
		const Value &operator = (const Value &rhs);
		Value(const Value &src);

	private :
		Value();

		float _value;

};
