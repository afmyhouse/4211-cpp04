/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:17:01 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:17:02 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal :: WrongAnimal(void)
{
	std::cout << "WrongAnimal Default constructor called.";
	std::cout << std::endl;
	this->_type = "WrongAnimal";
}
WrongAnimal :: WrongAnimal(const std::string type)
{
	std::cout << "WrongAnimal Parameter constructor called.";
	std::cout << std::endl;
	this->_type = type;
}
WrongAnimal :: WrongAnimal (const WrongAnimal& src)
{
	std::cout << "WrongAnimal Copy constructor called.";
	std::cout << std::endl;
	this->_type = src._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "WrongAnimal Copy assignament called.";
	std::cout << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

WrongAnimal:: ~WrongAnimal(void)
{
	std::cout << "WrongAnimal Desctructor called.";
	std::cout << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::setType(const std::string& type)
{
	this->_type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const WrongAnimal& objToPrint)
{
	out << objToPrint.getType() << std::endl;
	return (out);
}
