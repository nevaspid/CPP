/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:50:07 by gloms             #+#    #+#             */
/*   Updated: 2024/06/27 18:56:10 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << DEBUG_MSG;
}

void Harl::info(void) {
	std::cout << INFO_MSG;
}

void Harl::warning(void) {
	std::cout << WARNING_MSG;
}

void Harl::error(void) {
	std::cout << ERROR_MSG;
}

Harl::Harl() {
	std::cout << "Harl is born." << std::endl;
}

Harl::~Harl() {
	std::cout << "Harl is dead." << std::endl;
}
void Harl::complain(std::string level)
{
	typedef void (Harl::*ptr)(void);
	std::string complainLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ptr functions[4] = {&Harl::debug, &Harl::info, &Harl::warning,
		&Harl::error};
	for (int i = 0; i < 4; i++)
		if (complainLevel[i] == level)
			(this->*functions[i])();
}
