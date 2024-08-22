/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:54:10 by gloms             #+#    #+#             */
/*   Updated: 2024/08/21 23:21:43 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../ICharacter/ICharacter.hpp"

class AMateria
{
	protected :
		std::string _type;
	public :
		~AMateria();
		AMateria();
		AMateria(const AMateria &type);
		AMateria &operator=(const AMateria &rhs);
		AMateria(std::string const &type);

		std::string const &getType() const; //Returns the materia type

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};
