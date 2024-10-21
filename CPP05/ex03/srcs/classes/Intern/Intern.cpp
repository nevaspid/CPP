/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:50:36 by gloms             #+#    #+#             */
/*   Updated: 2024/10/21 17:00:10 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "../AForm/AForm.hpp"
#include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "../PresidentialPardonForm/PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) {
	(void)src;
}

Intern::~Intern() {}

Intern &Intern::operator = (const Intern &rhs) {
	(void)rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target) {
	std::string formNameList[3] = {"Shrubbery", "Robotomy", "Presidential pardon"};
	AForm *formList[3] = { new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target) };
	AForm *ret = 0;
	for (int i = 0; i < 3; i++) {
		if (formNameList[i] == formName)
			ret = formList[i];
		else
			delete formList[i];
	}
	if (ret)
		std::cout << "Intern creates " << formName << std::endl;
	else
		std::cout << "The form name \"" << formName
			<< "\" don't match with any existing form keywords are : Shrubbery, Robotomy, Presidential pardon" << std::endl;
	return (ret);
}

// {
// 	if (formName == "ShrubberyCreationForm" || formName == "Shrubbery") {
// 		std::cout << "Intern creates " << formName << std::endl;
// 		AForm *shrubberyForm = new ShrubberyCreationForm(target);
// 		return (shrubberyForm);
// 	}
// 	else if (formName == "RobotomyRequestForm" || formName == "Robotomy") {
// 		std::cout << "Intern creates " << formName << std::endl;
// 		AForm *robotomyForm = new RobotomyRequestForm(target);
// 		return (robotomyForm);
// 	}
// 	else if (formName == "PresidentialPardonForm" || formName == "Presidential") {
// 		AForm *presidentialForm = new PresidentialPardonForm(target);
// 		return (presidentialForm);
// 	}
// 	else
// 		std::cerr << "no such form exists..." << std::endl;
// 	return nullptr;
// }
