/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:40:40 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 19:55:39 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../WrongAnimal/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat &src);

		void makeSound() const;
		std::string getType() const;
	private :
		WrongCat &operator = (const WrongCat &rhs);
};
