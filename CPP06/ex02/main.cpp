/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:15:58 by gloms             #+#    #+#             */
/*   Updated: 2024/12/16 15:16:03 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Base.hpp"

int	main() {

	Base* ptr = generate();
	Base& ref = *ptr;

	identify(ptr);
	identify(ref);

	delete (ptr);
}
