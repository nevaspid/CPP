/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:15:00 by gloms             #+#    #+#             */
/*   Updated: 2024/12/16 15:15:04 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data/dataStruct.hpp"
#include "class/serializer.hpp"

int	main() {
	Data data;

	data.age = 24;
	data.name = "Steve";

	std::cout << "Before serialiation: " << data.age << ", " << data.name << std::endl;

	uintptr_t encode = Serializer::serialize(&data);
	Data *result = Serializer::deserialize(encode);

	std::cout << "After serialisation: " << result->age << ", " << result->name << std::endl;

	return (0);
}
