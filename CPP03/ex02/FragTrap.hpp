/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:01:48 by gloms             #+#    #+#             */
/*   Updated: 2024/07/08 20:10:36 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string name, int hp, int ep, int ad);
		FragTrap(const FragTrap &src);
		virtual ~FragTrap();

		void highFivesGuys(void);

	private :
		FragTrap &operator = (const FragTrap &rhs);
};
