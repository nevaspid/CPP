/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:31:08 by gloms             #+#    #+#             */
/*   Updated: 2024/10/12 17:45:24 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Bureaucrat/Bureaucrat.hpp"
#include "classes/Form/Form.hpp"

int main()
{
	try
	{
		Bureaucrat *Jackie;
		Jackie = new Bureaucrat(140, "Jackie");
		Form *jackieForm;
		jackieForm = new Form("kill president", 110, 110);
		Jackie->signForm(*jackieForm);
		delete Jackie;
		delete jackieForm;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() <<std::endl;
	}
	try
	{
		Bureaucrat *Jackie;
		Jackie = new Bureaucrat(100, "Jackie");
		Form *Formular;
		Formular = new Form("Suicide", 110, 105);
		Jackie->signForm(*Formular);
		std::cout << *Formular << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
