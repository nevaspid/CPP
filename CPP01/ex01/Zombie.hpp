/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:02:05 by gloms             #+#    #+#             */
/*   Updated: 2024/06/14 16:27:08 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :
		Zombie();
		~Zombie();
		void announce();
		void setName(std::string name);
	private :
		std::string _name;
};

Zombie 	*newZombie(std::string name);
void 	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);
#endif
