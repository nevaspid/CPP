/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:24:27 by gloms             #+#    #+#             */
/*   Updated: 2024/10/17 16:38:23 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../AForm/AForm.hpp"

class Bureaucrat;
class AForm;
class PresidentialPardonForm : public AForm
{
	public :
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator = (const PresidentialPardonForm &rhs);
		PresidentialPardonForm(std::string target);

		void execute(const Bureaucrat &executor) const;

	private :
		std::string _target;
};
