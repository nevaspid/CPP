/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:47:38 by gloms             #+#    #+#             */
/*   Updated: 2024/11/03 14:50:17 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main() {
	Data*		ptr = new Data;
	uintptr_t	serialized = 0;

	ptr->proof = "Hehehehe";

	std::cout << "ptr->proof: " << ptr->proof << std::endl;
	serialized = Serializer::serialize(ptr);
	std::cout << "serialization" << std::endl;

	std::cout << "ptr: " << ptr << std::endl;
	ptr = NULL;
	std::cout << "ptr: " << ptr << std::endl;

	ptr = Serializer::deserialize(serialized);
	std::cout << "deserialization" << std::endl;
	std::cout << "ptr->proof: " << ptr->proof << std::endl;

	return 0;
}
