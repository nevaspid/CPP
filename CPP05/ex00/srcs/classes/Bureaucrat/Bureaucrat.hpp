/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:48:16 by gloms             #+#    #+#             */
/*   Updated: 2024/10/09 11:56:28 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat
{
	public :
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat &operator = (const Bureaucrat &rhs);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(int grade, std::string _name);

		const std::string &getName() const;
		int getGrade() const;

		void upGrade();
		void downGrade();

		friend std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);

		class GradeTooHighException : public std::exception {
			public :
				const char *what() const throw() {
					return "Grade is too high...";
				}
		};
		class GradeTooLowException : public std::exception {
			public :
				const char *what() const throw() {
					return "Grade is too low...";
				}
		};

	private :
		std::string 	_name;
		int	_grade;
};
