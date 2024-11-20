/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:42 by edelarbr          #+#    #+#             */
/*   Updated: 2024/11/08 13:03:32 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {

	Base *ptr = generate();
	Base &ref = *ptr;

	identify(ptr);
	identify(ref);

	delete ptr;
}
