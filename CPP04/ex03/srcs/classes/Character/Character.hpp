/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:48:15 by gloms             #+#    #+#             */
/*   Updated: 2024/09/21 18:28:04 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../ICharacter/ICharacter.hpp"

class Character : public ICharacter
{
	public :
		Character();
		virtual ~Character();
		Character(const Character &src);
		Character &operator = (const Character &rhs);
		Character(std::string name);

		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
	private :
		std::string _name;
		AMateria *_inventory[4];
};
