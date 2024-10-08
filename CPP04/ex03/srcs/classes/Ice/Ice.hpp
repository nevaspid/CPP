/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:52:50 by gloms             #+#    #+#             */
/*   Updated: 2024/09/30 18:04:08 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../AMateria/AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		virtual ~Ice();
		Ice(const Ice &src);
		Ice &operator = (const Ice &rhs);
		std::string getType();

		virtual void use(ICharacter &target);
		virtual Ice *clone() const;
	private :
		std::string _type;
};
