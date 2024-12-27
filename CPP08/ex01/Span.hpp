/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:17:40 by gloms             #+#    #+#             */
/*   Updated: 2024/12/23 21:17:58 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span {

public :
		Span(unsigned int maxSize);
		~Span();
		Span(const Span &src);
		Span &operator = (const Span &rhs);
		unsigned int	shortestSpan();
		unsigned int longestSpan();

		// unsigned int getMaxSize() const;
		// void setMaxSize();

		void addNumber(unsigned int number);


private :
		unsigned int _maxSize;
		std::vector<unsigned int> _numbers;

		Span() {_maxSize = 0;};
};
