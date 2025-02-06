/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:16:43 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:16:44 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal(void)
{
	std::cout << "[Animal] Default constructor called.";
	std::cout << std::endl;
	this->_type = "Animal";
}
Animal :: Animal(const std::string type)
{
	std::cout << "[Animal] Parameter constructor called.";
	std::cout << std::endl;
	this->_type = type;
}
Animal :: Animal (const Animal& sourceObj)
{
	std::cout << "[Animal] Copy constructor called.";
	std::cout << std::endl;
	this->_type = sourceObj._type;
}

Animal& Animal::operator=(const Animal& sourceObj)
{
	std::cout << "[Animal] Copy assignament called.";
	std::cout << std::endl;
	if (this != &sourceObj)
	{
		this->_type = sourceObj._type;
	}
	return (*this);
}

Animal:: ~Animal(void)
{
	std::cout << "[Animal] Desctructor called.";
	std::cout << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	std::cout << "[Animal] unspecified sound" << std::endl;
}

std::ostream	&operator<<( std::ostream & o, Animal & i )
{
	o << i.getType();
	return ( o );
}
