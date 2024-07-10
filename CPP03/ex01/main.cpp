/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:56:13 by gloms             #+#    #+#             */
/*   Updated: 2024/07/08 19:53:22 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("Claptrap", 100, 100, 30);
	ClapTrap claptrap2("Claptrap2", 100, 100, 30);
	ScavTrap Scavy("Scavynator", 100, 50, 20);

	claptrap.attack("Claptrap2");
	claptrap2.takeDamage(30);
	claptrap2.attack("Claptrap");
	claptrap.takeDamage(30);
	Scavy.guardGate();
}
