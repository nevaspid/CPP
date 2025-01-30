/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:45:14 by gloms             #+#    #+#             */
/*   Updated: 2025/01/30 12:46:18 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date/Date.hpp"
#include "Value/Value.hpp"
#include "BitcoinExchange/BitcoinExchange.hpp"
#include "parsing/parsing.hpp"
#include <utility>

int main(int ac, char **av) {
	BitcoinExchange exchange;
	return exchange.run(ac, av);
}
