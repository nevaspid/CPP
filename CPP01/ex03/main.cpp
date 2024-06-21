/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:42:05 by gloms             #+#    #+#             */
/*   Updated: 2024/06/21 15:44:22 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon Stick("Stick");
	Weapon *none = new Weapon("hands");
	Weapon *Sword = new Weapon("Sword");
	HumanA Bob("Bob", Stick);
	HumanB Alibert("Alibert");

	Alibert.weapon = none;
	Alibert.attack();
	Bob.attack();
	Alibert.weapon = Sword;
	Alibert.attack();
	delete none;
	delete Sword;
}

