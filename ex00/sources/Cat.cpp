/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:09:02 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:09:03 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat(void) : Animal("Cat")
{
	std::cout << "[Cat] Default constructor called.";
	std::cout << std::endl;
}
Cat :: Cat (const Cat& sourceObj) : Animal("Cat")
{
	std::cout << "[Cat] Copy constructor called.";
	std::cout << std::endl;
	this->_type = sourceObj._type;
}

Cat& Cat::operator=(const Cat& sourceObj)
{
	std::cout << "[Cat] Copy assignament called.";
	std::cout << std::endl;
	if (this != &sourceObj)
	{
		this->_type = sourceObj._type;
	}
	return (*this);
}

Cat:: ~Cat(void)
{
	std::cout << "[Cat] Desctructor called.";
	std::cout << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

std::ostream& operator<<( std::ostream& o, Cat const & i )
{
	o << i.getType();
	return o;
}