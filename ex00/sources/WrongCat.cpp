/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:09:18 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:09:19 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat :: WrongCat(void)
{
	std::cout << "WrongCat Default constructor called.";
	std::cout << std::endl;
	this->_type = "WrongCat";
}
WrongCat :: WrongCat(const std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat Parameter constructor called.";
	std::cout << std::endl;
	this->_type = type;
}
WrongCat :: WrongCat (const WrongCat& sourceObj) : WrongAnimal(sourceObj)
{
	std::cout << "WrongCat Copy constructor called.";
	std::cout << std::endl;
	this->_type = sourceObj._type;
}

WrongCat& WrongCat::operator=(const WrongCat& sourceObj)
{
	std::cout << "WrongCat Copy assignament called.";
	std::cout << std::endl;
	if (this != &sourceObj)
	{
		this->_type = sourceObj._type;
	}
	return (*this);
}

WrongCat:: ~WrongCat(void)
{
	std::cout << "WrongCat Desctructor called.";
	std::cout << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meow" << std::endl;
}
