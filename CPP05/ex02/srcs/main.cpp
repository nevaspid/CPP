/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:31:08 by gloms             #+#    #+#             */
/*   Updated: 2024/10/18 15:26:14 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Bureaucrat/Bureaucrat.hpp"
#include "classes/AForm/AForm.hpp"
#include "classes/ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "classes/RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "classes/PresidentialPardonForm/PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat *inoxtag;
	AForm *Form;
	AForm *Form2;
	AForm *Form3;
	Form = new ShrubberyCreationForm("Target");
	Form2 = new RobotomyRequestForm("Target");
	Form3 = new PresidentialPardonForm("Target");
	inoxtag = new Bureaucrat(40, "inoxtag");

	inoxtag->signForm(*Form);
	inoxtag->signForm(*Form2);
	inoxtag->signForm(*Form3);
	inoxtag->executeForm(*Form);
	inoxtag->executeForm(*Form2);
	inoxtag->executeForm(*Form3);
	delete Form;
	delete Form2;
	delete Form3;
	delete inoxtag;
	return 0;
}
