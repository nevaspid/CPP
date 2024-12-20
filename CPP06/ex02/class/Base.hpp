/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:15:45 by gloms             #+#    #+#             */
/*   Updated: 2024/12/16 15:15:48 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Base {
public:
	virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
