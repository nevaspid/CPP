/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:11:21 by gloms             #+#    #+#             */
/*   Updated: 2024/09/30 18:01:10 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../AMateria/AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		virtual ~Cure();
		Cure(const Cure &src);
		Cure &operator = (const Cure &rhs);
		std::string getType();

		virtual void use(ICharacter &target);
		virtual Cure *clone() const;
	private :
		std::string _type;
};
