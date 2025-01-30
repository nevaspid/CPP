/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:26:40 by gloms             #+#    #+#             */
/*   Updated: 2025/01/30 12:48:02 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>
#include "../Date/Date.hpp"
#include "../Value/Value.hpp"
#include "../parsing/parsing.hpp"

class BitcoinExchange {
	public:
		~BitcoinExchange();
		BitcoinExchange();
		int run(int ac, char **av);
};
