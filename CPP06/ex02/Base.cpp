/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:38 by edelarbr          #+#    #+#             */
/*   Updated: 2024/11/08 13:03:26 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "time.h"
#include "stdlib.h"
#include "Base.hpp"

Base::~Base() {}

Base*	generate(void) {
	std::srand(time(0));
	int rdm = std::rand() % 3;
	if (rdm == 0)
		return new A();
	else if (rdm == 1)
		return new B();
	else
		return new C();
}

void	identify(Base *p) {
	if (dynamic_cast<A *>(p))
		std::cout << "Class is a type A, checked by ptr" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Class is a type B, checked by ptr" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Class is a type C, checked by ptr" << std::endl;
	else
		std::cout << "Error unrecognized class !" << std::endl;
}

void	identify(Base &p) {
	try {
		A &r = dynamic_cast<A &>(p);
		(void)r;
		std::cout << "Class is a type A, checked by ref" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		B &r = dynamic_cast<B &>(p);
		(void)r;
		std::cout << "Class is a type B, checked by ref" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		C &r = dynamic_cast<C &>(p);
		(void)r;
		std::cout << "Class is a type C, checked by ref" << std::endl;
	}
	catch (std::exception &e) {}
	return ;
}
