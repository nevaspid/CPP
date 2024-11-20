/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:47:47 by gloms             #+#    #+#             */
/*   Updated: 2024/11/03 14:49:46 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

struct Data;

class Serializer {

public:
	virtual ~Serializer();
	Serializer &operator = (const Serializer &rhs);

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer &src);

};
