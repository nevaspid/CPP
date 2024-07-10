/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:56:10 by gloms             #+#    #+#             */
/*   Updated: 2024/07/08 19:40:52 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(std::string _name, int hp, int ep, int ad);
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator = (const ClapTrap &rhs);
		virtual ~ClapTrap();

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected :
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
};
