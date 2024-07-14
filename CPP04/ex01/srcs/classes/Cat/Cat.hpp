/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:03:46 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 21:08:28 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Cat : public Animal
{
	public :
		Cat();
		virtual ~Cat();
		Cat(const Cat &src);

		virtual void makeSound() const;
		std::string getType() const;
	private :
		Brain *_brain;
		Cat &operator = (const Cat &rhs);
};
