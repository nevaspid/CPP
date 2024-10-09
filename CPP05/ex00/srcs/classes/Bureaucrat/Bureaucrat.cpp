/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:48:19 by gloms             #+#    #+#             */
/*   Updated: 2024/10/09 11:58:45 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name), _grade(grade){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "constructor called for " << this->_name << " grade : " << this->_grade << std::endl;
}

const std::string &Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::upGrade() {
	if (this->_grade > 1)
		this->_grade--;
}

void Bureaucrat::downGrade() {
	if (this->_grade < 150)
		this->_grade++;
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs) {
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return out;
}
