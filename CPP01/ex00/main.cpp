/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:28:31 by gloms             #+#    #+#             */
/*   Updated: 2024/06/14 16:07:53 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *a_zombie[3];

	a_zombie[0] = newZombie("Albert0");
	a_zombie[1] = newZombie("Ulrich1");
	a_zombie[2] = newZombie("Michel2");
	for (int i = 0; i != 2; i++)
		delete a_zombie[i];
	randomChump("Jean-Eudes");
	return 0;
}
