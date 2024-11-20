/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:48 by edelarbr          #+#    #+#             */
/*   Updated: 2024/11/08 13:04:22 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Base {

public:
	virtual	~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

void	identify(Base* p);
void	identify(Base& p);
Base*	generate(void);
