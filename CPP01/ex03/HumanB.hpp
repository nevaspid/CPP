/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:42:19 by gloms             #+#    #+#             */
/*   Updated: 2024/06/19 17:04:15 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		~HumanB();
		void	attack();
		Weapon *weapon;
	private :
		std::string _name;
};
