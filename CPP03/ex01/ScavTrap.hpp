/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:13:11 by gloms             #+#    #+#             */
/*   Updated: 2024/07/08 18:27:59 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name, int hp, int ep, int ad);
		ScavTrap(const ScavTrap &src);
		virtual ~ScavTrap();
		void guardGate();

	private :
		ScavTrap &operator = (const ScavTrap &rhs);
};
