/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:48:16 by gloms             #+#    #+#             */
/*   Updated: 2024/10/12 17:27:10 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Form;
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

		friend std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs);

		void signForm(Form &src);

	private :
		const std::string 	_name;
		int	_grade;
};
