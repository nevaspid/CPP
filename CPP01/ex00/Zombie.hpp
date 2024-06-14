/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:02:05 by gloms             #+#    #+#             */
/*   Updated: 2024/06/07 21:59:59 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :
		Zombie(std::string name);
		~Zombie();
		void announce();
	private :
		std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif
