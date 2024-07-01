/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:30:39 by gloms             #+#    #+#             */
/*   Updated: 2024/07/01 12:08:22 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed &operator=(const Fixed &src);
		friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

		int getRawBits(void) const; //retourne la valeur du nombre à virgule fixe sans la convertir.
		void setRawBits(const int raw); //initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
		float toFloat(void) const; //convertit le nombre à virgule fixe en float.
		int toInt(void) const; //convertit le nombre à virgule fixe en int.
	private :
		int _value;
		const static int _bits = 8;
};

#endif
