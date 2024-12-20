/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:14:32 by gloms             #+#    #+#             */
/*   Updated: 2024/12/16 15:14:39 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src) {
	*this = src;
}

Serializer::~Serializer() {}

Serializer &Serializer::operator = (const Serializer &rhs) {
	(void)rhs;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr){

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){

	return (reinterpret_cast<Data*>(raw));
}
