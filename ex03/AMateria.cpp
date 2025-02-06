/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:46 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:29:47 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "[AMateria] Default constructor called." << std::endl;
}

AMateria::AMateria(const std::string& type)
{
	std::cout << "[AMateria] Copy constructor called." << std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] Destructor called." << std::endl;
}

const std::string& AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}