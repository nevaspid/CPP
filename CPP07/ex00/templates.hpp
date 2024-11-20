/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:05:58 by gloms             #+#    #+#             */
/*   Updated: 2024/11/19 09:19:36 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void swap(T a, T b) {
	T tmp;
	tmp = b;
	b = a;
	a = tmp;
}

template <typename T>
T min(T a, T b) {
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}
