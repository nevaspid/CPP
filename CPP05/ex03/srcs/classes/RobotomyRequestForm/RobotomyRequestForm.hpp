/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:24:22 by gloms             #+#    #+#             */
/*   Updated: 2024/10/17 16:40:08 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../AForm/AForm.hpp"

class Bureaucrat;
class AForm;
class RobotomyRequestForm : public AForm
{
	public :
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &rhs);
		RobotomyRequestForm(std::string target);

		void execute(const Bureaucrat &executor) const;

	private :
		std::string _target;
};
