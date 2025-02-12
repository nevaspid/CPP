#include "BitcoinExchange.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:35:56 by gloms             #+#    #+#             */
/*   Updated: 2025/01/23 09:37:00 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange() {}

std::map<Date, Value> storeData() {
	std::ifstream dataFile("inputs&data/data.csv");
	if (!dataFile.is_open()) {
        throw std::runtime_error("Error opening files.");
    }
	std::string line;
	std::map<Date, Value> exchangeRates;
	getline(dataFile, line);
	while (getline(dataFile, line)) {
		Date dateObject(line.substr(0, 10));
		Value valueObject(line.substr(line.find(',') + 1, line.size() - line.find(',') - 1));
		exchangeRates.insert(std::pair<Date, Value>(dateObject, valueObject));
	}
	dataFile.close();
	return exchangeRates;
}

void printFinalLine(std::string line, const std::map<Date, Value> &exchangeRates) {
	const Date dateObject(line.substr(0, 10));
	Value valueObject(line.substr(13, line.size() - 13));
	std::map<Date, Value>::const_iterator it = exchangeRates.lower_bound(dateObject);

 	if (/*it != exchangeRates.end() && */ it->first != dateObject) {
    	if (it != exchangeRates.begin()) {
      		--it;
        }
		else {
            std::cerr << "Error: No valid date found in exchangeRates." << std::endl;
            return;
        }
	}
	std::cout << dateObject.getYear();
	std::cout << "-";
	if (dateObject.getMonth() < 10) {
		std::cout << "0";
	}
	std::cout << dateObject.getMonth();
	std::cout << "-";
	if (dateObject.getDay() < 10) {
		std::cout << "0";
	}
	std::cout << dateObject.getDay();
	std::cout << " => " << valueObject.getValue() << " = " << it->second.getValue() * valueObject.getValue() << std::endl;
}

int BitcoinExchange::run(int ac, char **av)
{
	if (ac != 2) {
	std::cerr << "Error : btc program needs input.txt file." << std::endl;
	return 1;
	}
	std::ifstream inputFile(av[1]);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening files." << std::endl;
        return 1;
    }
	std::string line;
	std::map<Date, Value> exchangeRates;
	try {
		exchangeRates = storeData();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::getline(inputFile, line);
	if (line != "date | value") {
		std::cerr << "Error: bad input => date | value" << std::endl;
		return 1;
	}
	while (std::getline(inputFile, line)) {
		try {
			checkLine(line);
			printFinalLine(line, exchangeRates);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
