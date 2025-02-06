/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:21:15 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:21:16 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal :: AAnimal(void)
{
	std::cout << "[AAnimal] Default constructor called.";
	std::cout << std::endl;
	this->_type  = "AAnimal";
}
AAnimal :: AAnimal(const std::string type)
{
	std::cout << "[AAnimal] Parameter constructor called.";
	std::cout << std::endl;
	this->_type = type;
}
AAnimal :: AAnimal (const AAnimal& sourceObj)
{
	std::cout << "[AAnimal] Copy constructor called.";
	std::cout << std::endl;
	this->_type = sourceObj._type;
}

AAnimal& AAnimal::operator=(const AAnimal& sourceObj)
{
	std::cout << "[AAnimal] Copy assignament called.";
	std::cout << std::endl;
	if (this != &sourceObj)
	{
		this->_type = sourceObj._type;
	}
	return (*this);
}

AAnimal:: ~AAnimal(void)
{
	std::cout << "[AAnimal] Desctructor called.";
	std::cout << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}

std::ostream	&operator<<( std::ostream & o, AAnimal & i )
{
	o << i.getType();
	return ( o );
}
