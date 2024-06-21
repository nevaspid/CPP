/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:18:54 by gloms             #+#    #+#             */
/*   Updated: 2024/06/14 17:36:19 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *STRINGptr = &str;
	std::string &STRINGref = str;

	std::cout << &str << std::endl;
	std::cout << STRINGptr << std::endl;
	std::cout << &STRINGref << std::endl;

	std::cout << str << std::endl;
	std::cout << *STRINGptr << std::endl;
	std::cout << STRINGref << std::endl;

	//en brrrrr

	return 0;
}
