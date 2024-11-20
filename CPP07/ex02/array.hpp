/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:33:51 by gloms             #+#    #+#             */
/*   Updated: 2024/11/20 16:08:57 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array {

public:
	Array<T>() : _size(0) {
		_array = new T[0]();
	}

	Array<T>(unsigned int n) : _size(n) {
		_array = new T[n]();
	}

	Array<T>(const Array<T> &src) {
		_array = NULL;
		*this = src;
	}

	~Array<T>() {
		delete [] _array;
	}

	Array<T> &operator = (const Array<T> &rhs) {
		_size = rhs._size;
		if (_array != NULL)
			delete [] _array;
		_array = new T[size()]();
		for (int i = 0; i < size() ; i++)
			this->_array[i] = rhs._array[i];
		return (*this);
	}

	T &operator [] (int index) {
		if (index >= size() || index < 0)
			throw OutOfBound();
		return (_array[index]);
	}

	const T &operator [] (int index) const {
		if (index >= size() || index < 0)
			throw OutOfBound();
		return (_array[index]);
	}

	int	size() const {
		return (_size);
	}

	class OutOfBound : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Index out of bound !");
		}
	};

private:
	int	_size;
	T*	_array;
};
