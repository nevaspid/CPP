/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:56:10 by gloms             #+#    #+#             */
/*   Updated: 2024/07/05 14:31:31 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once

class ClapTrap
{
	public :
		ClapTrap(std::string _name, int hp, int ep, int ad);
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator = (const ClapTrap &rhs);
		~ClapTrap();

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private :
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
};
