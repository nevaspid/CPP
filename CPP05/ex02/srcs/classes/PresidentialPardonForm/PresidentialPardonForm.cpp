/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:24:31 by gloms             #+#    #+#             */
/*   Updated: 2024/10/17 16:37:35 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
	_target = "initialise moi merde alors";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm("PresidentialPardonForm", 25, 5) {
	this->_target = src._target;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &rhs) {
	(void)rhs;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->getSignedStatus() == false)
		throw std::runtime_error("Form not signed...");
	if (executor.getGrade() > this->getExecuteGrade())
		throw std::runtime_error("Executor grade too low...");
	std::cout << "bip bip bip broup " << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
