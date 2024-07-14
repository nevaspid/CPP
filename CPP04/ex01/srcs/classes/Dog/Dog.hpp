/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:02:23 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 21:08:41 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Dog : public Animal
{
	public :
		Dog();
		virtual ~Dog();
		Dog(const Dog &src);

		virtual void makeSound() const;
		std::string getType() const;
	private :
		Brain *_brain;
		Dog &operator = (const Dog &rhs);
};
