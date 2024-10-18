/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:37:30 by gloms             #+#    #+#             */
/*   Updated: 2024/10/17 16:30:51 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

AForm::AForm() : _name("zizi"), _signGrade(10), _executeGrade(10) {
	_signed = false;
}

AForm::~AForm() {}

AForm::AForm(const AForm &src, int signGrade, int execGrade) : _signGrade(signGrade), _executeGrade(execGrade) {
	*this = src;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _executeGrade(execGrade) {
	_signed = false;
	(void)_executeGrade;
}

AForm &AForm::operator = (const AForm &rhs) {
	if (this != &rhs)
		this->_signed = rhs._signed;
	return *this;
}

void AForm::beSigned(const Bureaucrat &src)
{
	if (_signGrade >= src.getGrade())
		_signed = true;
	else
		throw std::runtime_error("Grade too low to sign...");
}

const std::string &AForm::getName() const {
	return (this->_name);
}

const int &AForm::getSignGrade() const {
	return (this->_signGrade);
}

const int &AForm::getExecuteGrade() const {
	return (this->_executeGrade);
}

std::ostream &operator << (std::ostream &out, const AForm &rhs) {
	out << "form name : " << rhs.getName() << " sign grade : " << rhs.getSignGrade()
		<< " execute grade : " << rhs.getExecuteGrade() << std::endl;
	return out;
}

const bool &AForm::getSignedStatus() const {
	return _signed;
}
