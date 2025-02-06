/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:30:08 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:09 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "[Cure] Default constructor called." << std::endl;
}

Cure::Cure(const Cure& cure) : AMateria(cure.type)
{
	std::cout << "[Cure] Copy constructor called." << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "[Cure] Destructor called." << std::endl;
}

Cure& Cure::operator=(const Cure& cure)
{
	std::cout << "[Cure] Copy assignment called." << std::endl;
	if (this == &cure)
		return (*this);
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}