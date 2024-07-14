/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:47:48 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 19:53:31 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal &src);

		virtual void makeSound() const;
		std::string getType() const;

	protected :
		Animal &operator = (const Animal &rhs);
		std::string _type;
};
