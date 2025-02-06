/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:16:50 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:16:51 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat(void)
{
	std::cout << "[Cat] Default constructor called.";
	std::cout << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}
Cat :: Cat (const Cat& sourceObj) : Animal(sourceObj)
{
	std::cout << "[Cat] Copy constructor called.";
	std::cout << std::endl;
	// delete this->_brain;
	*this = sourceObj;
}

Cat& Cat::operator=(const Cat& sourceObj)
{
	std::cout << "[Cat] Copy assignament called.";
	std::cout << std::endl;
	if (this != &sourceObj)
	{
		delete this->_brain;
		std::cout << "destructor ok\n";
		this->_brain = new Brain();
		for (size_t i = 0; i < IDEAS; i++)
			this->_brain->setIdea(i, sourceObj.getBrain()->getIdea(i));
		this->_type = sourceObj._type;
	}
	return (*this);
}

Cat:: ~Cat(void)
{
	std::cout << "[Cat] Desctructor called.";
	std::cout << std::endl;
	delete this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->_brain);
}

std::ostream& operator<<( std::ostream& o, Cat const & i )
{
	o << i.getType();
	return o;
}
