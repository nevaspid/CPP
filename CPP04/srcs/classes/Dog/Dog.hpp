/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:02:23 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 19:54:50 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../Animal/Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		virtual ~Dog();
		Dog(const Dog &src);

		virtual void makeSound() const;
		std::string getType() const;
	private :
		Dog &operator = (const Dog &rhs);
};
