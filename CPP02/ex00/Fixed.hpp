/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:30:39 by gloms             #+#    #+#             */
/*   Updated: 2024/07/01 11:54:39 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>



class Fixed
{
	public :
		Fixed();
		~Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		int getRawBits(void) const; //retourne la valeur du nombre à virgule fixe sans la convertir.
		void setRawBits(const int raw); //initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
	private :
		int _value;
		const static int _bits = 8;
};

#endif
