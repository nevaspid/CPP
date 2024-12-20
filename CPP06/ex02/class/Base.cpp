/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:15:39 by gloms             #+#    #+#             */
/*   Updated: 2024/12/16 15:15:41 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void){
	std::srand(time(0));
	int value = std::rand() % 3;
	Base* inst;

	switch(value){
		case 0:
			inst = new A;
			break;
		case 1:
			inst = new B;
			break;
		case 2:
			inst = new C;
			break;
	}

	return(inst);
}

void identify(Base* p){

	if (dynamic_cast<A*>(p))
		std::cout << "Object type for pointer p is A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object type for pointer p is B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object type for pointer p is C." << std::endl;
	else
		std::cout << "Invalid object type." << std::endl;
}

void identify(Base& p){
	try{
		A& t = dynamic_cast<A&>(p);
		(void)t;
		std::cout << "Object type for reference p is A." << std::endl;
	}
	catch (std::exception &e){
		// std::cout << e.what() << std::endl;
	}
	try{
		B& t = dynamic_cast<B&>(p);
		(void)t;
		std::cout << "Object type for reference p is B." << std::endl;
	}
	catch (std::exception &e){
		// std::cout << e.what() << std::endl;
	}
	try{
		C& t = dynamic_cast<C&>(p);
		(void)t;
		std::cout << "Object type for reference p is C." << std::endl;
	}
	catch (std::exception &e){
		// std::cout << e.what() << std::endl;
	}
}
