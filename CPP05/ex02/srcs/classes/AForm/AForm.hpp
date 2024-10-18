/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:36:02 by gloms             #+#    #+#             */
/*   Updated: 2024/10/12 18:09:39 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat;
class AForm
{
	public :
		AForm();
		virtual ~AForm();
		AForm(const AForm &src, int signGrade, int execGrade);
		AForm &operator = (const AForm &rhs);

		AForm(std::string name, int signGrade, int execGrade);

		void beSigned(const Bureaucrat &src);
		const std::string &getName() const;
		const int &getSignGrade() const;
		const int &getExecuteGrade() const;
		const bool &getSignedStatus() const;

		friend std::ostream &operator << (std::ostream &out, const AForm &rhs);
		virtual void execute(const Bureaucrat &executor) const = 0;


	private :
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _executeGrade;
};
