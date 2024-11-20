/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:24:05 by gloms             #+#    #+#             */
/*   Updated: 2024/11/19 14:25:32 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void iter(T *array, int len, void (*function)(T &)) {
	if (array == NULL || length <= 0 || function == NULL)
		return;
	for (int i = 0; i < length; ++i) {
        function(array[i]);
    }
}

template <typename T>
void	iter(T *array, int length, void (*function)(T&)) {
	if (array == NULL || length <= 0 || function == NULL)
		return;
	for (int i = 0; i < length; i++) {
		function(array[i]);
	}
}

template <typename T>
void	ftPlusOne(T &n) {
	n += 1;
}
