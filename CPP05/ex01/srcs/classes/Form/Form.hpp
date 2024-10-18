/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:36:02 by gloms             #+#    #+#             */
/*   Updated: 2024/10/12 17:33:50 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat;
class Form
{
	public :
		Form();
		~Form();
		Form(const Form &src, int signGrade, int execGrade);
		Form &operator = (const Form &rhs);

		Form(std::string name, int signGrade, int execGrade);

		void beSigned(const Bureaucrat &src);
		const std::string &getName() const;
		const int &getSignGrade() const;
		const int &getExecuteGrade() const;

		friend std::ostream &operator << (std::ostream &out, const Form &rhs);

	private :
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _executeGrade;
};
