/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:24:13 by gloms             #+#    #+#             */
/*   Updated: 2024/10/18 15:24:10 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm("ShrubberyCreationForm", 145, 137) {
	this->_target = src._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &rhs) {
	(void)rhs;
	return (*this); //y'a rien a copier frere
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getSignedStatus() == false)
		throw std::runtime_error("Form not signed...");
	if (executor.getGrade() > this->getExecuteGrade())
		throw std::runtime_error("Executor grade too low...");
	    std::ofstream ofs((this->_target + "_shrubbery"));
    if (ofs.is_open())
    {
        ofs << "       _-_" << std::endl;
        ofs << "    /~~   ~~\\" << std::endl;
        ofs << " /~~         ~~\\" << std::endl;
        ofs << "{               }" << std::endl;
        ofs << " \\  _-     -_  /" << std::endl;
        ofs << "   ~  \\ //  ~" << std::endl;
        ofs << "_- -   | | _- _" << std::endl;
        ofs << "  _ -  | |   -_" << std::endl;
        ofs << "      // \\" << std::endl;
        ofs.close();
    }
    else
    {
        std::cerr << "Unable to open file" << std::endl;
    }
}
