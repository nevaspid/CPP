/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:03:46 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 19:59:50 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../Animal/Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		virtual ~Cat();
		Cat(const Cat &src);

		virtual void makeSound() const;
		std::string getType() const;
	private :
		Cat &operator = (const Cat &rhs);
};
