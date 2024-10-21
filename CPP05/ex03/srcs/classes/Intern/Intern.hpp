/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:50:38 by gloms             #+#    #+#             */
/*   Updated: 2024/10/21 16:30:27 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AForm;
class Intern
{
	public :
		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern &operator = (const Intern &rhs);
		AForm *makeForm(std::string formName, std::string target);
};
