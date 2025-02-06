/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:30:17 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:18 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout <<  "[Ice] Default constructor called." << std::endl;
}

Ice::Ice(const Ice& ice) : AMateria(ice.type)
{
	std::cout <<  "[Ice] Copy constructor called." << std::endl;
}

Ice::~Ice(void)
{
	std::cout <<  "[Ice] Destructor called." << std::endl;
}

Ice& Ice::operator=(const Ice& ice)
{
	std::cout <<  "[Ice] Copy assignment called." << std::endl;
	if (this == &ice)
		return (*this);
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}