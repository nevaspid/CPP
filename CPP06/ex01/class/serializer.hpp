/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:14:45 by gloms             #+#    #+#             */
/*   Updated: 2024/12/16 15:14:48 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>
# include <stdint.h>
# include "../data/dataStruct.hpp"

class Serializer{
private:
	Serializer();
public:
	Serializer(const Serializer &src);
	virtual ~Serializer();
	Serializer &operator = (const Serializer &rhs);

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

};
