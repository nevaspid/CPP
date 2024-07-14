/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:13:56 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 21:05:51 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
	public :
		Brain();
		~Brain();
		Brain(const Brain &src);

		std::string ideas[100];
	private :
		Brain &operator = (const Brain &rhs);
};
