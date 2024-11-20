/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:20:39 by gloms             #+#    #+#             */
/*   Updated: 2024/10/28 15:25:05 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>


class ScalarConverter {

public:
	virtual ~ScalarConverter();
	ScalarConverter &operator = (const ScalarConverter &rhs);

	static void	convert(std::string toConvert);

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
};
