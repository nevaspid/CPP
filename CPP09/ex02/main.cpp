/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:35:14 by gloms             #+#    #+#             */
/*   Updated: 2025/02/05 22:49:31 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	std::clock_t start;
	std::clock_t finish;
	try
	{
		std::cout << "Initial: ";
		for (size_t i = 1; argv[i]; ++i)
			std::cout << argv[i] << " ";
		BACKLINE;
		BACKLINE;
		start = std::clock();
		Sort sort(argc, argv);
		BACKLINE;
		finish = std::clock();
		std::cout << "Time to process a range of " << argc -1 << " elements with std::list<int>: " << (float)(finish - start)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
		start = std::clock();
		BACKLINE;
		VSort vsort(argc, argv);
		BACKLINE;
		finish = std::clock();
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector<int>: " << (float)(finish - start)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}

