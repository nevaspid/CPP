/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:48:16 by gloms             #+#    #+#             */
/*   Updated: 2024/10/16 16:32:14 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AForm;
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
		void executeForm(AForm const &form);

		void signForm(AForm &src);

	private :
		const std::string 	_name;
		int	_grade;
};
