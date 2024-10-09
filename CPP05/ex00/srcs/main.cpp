/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:31:08 by gloms             #+#    #+#             */
/*   Updated: 2024/10/09 12:09:27 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Bureaucrat/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat *Jackie;
		Jackie = new Bureaucrat(151, "Jackie");
		std::cout << *Jackie << std::endl;
		delete Jackie;
	}
	catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught: " << e.what() <<std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() <<std::endl;
	}
	try
	{
		Bureaucrat *Jackie;
		Jackie = new Bureaucrat(150, "Jackie");
		std::cout << *Jackie << std::endl;
		delete Jackie;
	}
	catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught: " << e.what() <<std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() <<std::endl;
	}
	return 0;
}
