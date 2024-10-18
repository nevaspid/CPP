/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:38:53 by gloms             #+#    #+#             */
/*   Updated: 2024/10/12 18:05:21 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

Form::Form() : _name("zizi"), _signGrade(10), _executeGrade(10) {}

Form::~Form() {}

Form::Form(const Form &src, int signGrade, int execGrade) : _signGrade(signGrade), _executeGrade(execGrade) {
	*this = src;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _executeGrade(execGrade) {
	_signed = false;
	if (_executeGrade > 10)
		return ;
}

Form &Form::operator = (const Form &rhs) {
	if (this != &rhs)
		this->_signed = rhs._signed;
	return *this;
}

void Form::beSigned(const Bureaucrat &src)
{
	if (_signGrade >= src.getGrade())
		_signed = true;
	else
		throw std::runtime_error("Grade too low to sign...");
}

const std::string &Form::getName() const {
	return (this->_name);
}

const int &Form::getSignGrade() const {
	return (this->_signGrade);
}

const int &Form::getExecuteGrade() const {
	return (this->_executeGrade);
}

std::ostream &operator << (std::ostream &out, const Form &rhs) {
	out << "form name : " << rhs.getName() << " sign grade : " << rhs.getSignGrade()
		<< " execute grade : " << rhs.getExecuteGrade() << std::endl;
	return out;
}
