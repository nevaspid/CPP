/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:22:26 by gloms             #+#    #+#             */
/*   Updated: 2024/10/07 19:30:53 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../IMateriaSource/IMateriaSource.hpp"
#include "../AMateria/AMateria.hpp"
#include "../Ice/Ice.hpp"
#include "../Cure/Cure.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	~MateriaSource();
	MateriaSource &operator = (const MateriaSource &rhs);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);

private:
	AMateria *_memory[4];
};
