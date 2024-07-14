/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:14:04 by gloms             #+#    #+#             */
/*   Updated: 2024/07/14 21:01:56 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain (const Brain &src) {
	*this = src;
}

Brain &Brain::operator = (const Brain &rhs)
{
	if (this != &rhs) {
	    for (int i = 0; i < 100; ++i) {
	        this->ideas[i] = rhs.ideas[i];
	    }
	}
	return *this;
}
