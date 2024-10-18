/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:24:15 by gloms             #+#    #+#             */
/*   Updated: 2024/10/18 15:23:14 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../AForm/AForm.hpp"

class Bureaucrat;
class AForm;
class ShrubberyCreationForm : public AForm
{
	public :
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm(std::string target);

		void execute(const Bureaucrat &executor) const;

	private :
		std::string _target;
};
