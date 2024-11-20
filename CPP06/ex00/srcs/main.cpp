/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:17:25 by gloms             #+#    #+#             */
/*   Updated: 2024/10/28 15:36:27 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/ScalarConverter/ScalarConverter.hpp"

int main (int ac, char **av) {
	if (ac != 2)
		return(1);
	ScalarConverter::convert(av[1]);
}
