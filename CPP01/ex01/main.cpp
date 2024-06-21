/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:28:31 by gloms             #+#    #+#             */
/*   Updated: 2024/06/14 16:50:38 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde;

	horde = zombieHorde(3, "Steven");
	for (int i = 0; i < 3; ++i)
        horde[i].announce();
	delete[] horde;
	return 0;
}
