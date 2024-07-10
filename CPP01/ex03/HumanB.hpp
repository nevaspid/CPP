/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:42:19 by gloms             #+#    #+#             */
/*   Updated: 2024/07/08 19:56:09 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &Weapon);
	private :
		Weapon *weapon;
		std::string _name;
};
