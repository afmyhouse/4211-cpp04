/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:09:07 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:09:08 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default constructor called.";
	std::cout << std::endl;
}

Dog :: Dog(const Dog& sourceObj) : Animal(sourceObj)
{
	std::cout << "Dog Copy constructor called.";
	std::cout << std::endl;
	this->_type = sourceObj._type;
}

Dog& Dog::operator=(const Dog& sourceObj)
{
	std::cout << "Dog Copy assignament called.";
	std::cout << std::endl;
	if (this != &sourceObj)
	{
		this->_type = sourceObj._type;
	}
	return (*this);
}

Dog:: ~Dog(void)
{
	std::cout << "Dog Desctructor called.";
	std::cout << std::endl;
}
void Dog::makeSound(void) const
{
	std::cout << "Ouffff Oufff" << std::endl;
}


std::ostream	&operator<<( std::ostream & o, Dog const & i )
{
	o << i.getType();
	return o;
}