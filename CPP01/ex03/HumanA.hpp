/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:42:14 by gloms             #+#    #+#             */
/*   Updated: 2024/06/19 16:34:26 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();

	private :
		std::string _name;
		Weapon	&_weapon;
};
