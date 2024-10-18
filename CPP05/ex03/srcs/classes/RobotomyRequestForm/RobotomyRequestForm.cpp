/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:24:25 by gloms             #+#    #+#             */
/*   Updated: 2024/10/17 16:44:14 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
	_target = "initialise moi merde alors";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {};

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = src._target;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &rhs) {
	(void)rhs;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->getSignedStatus() == false)
		throw std::runtime_error("Form not signed...");
	if (executor.getGrade() > this->getExecuteGrade())
		throw std::runtime_error("Executor grade too low...");
	std::cout << "bip bip bip broup " << this->_target << " has been robotomized" << std::endl;
}
