/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:20:46 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:20:47 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog(void) : AAnimal()
{
	std::cout << "[Dog] Default constructor called.";
	std::cout << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog :: Dog(const Dog& sourceObj) : AAnimal(sourceObj)
{
	std::cout << "[Dog] Copy constructor called.";
	std::cout << std::endl;
	delete this->_brain;
	this->_brain = new Brain(*sourceObj._brain);
	this->_type = sourceObj._type;
}

Dog& Dog::operator=(const Dog& sourceObj)
{
	std::cout << "[Dog] Copy assignament called.";
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

Dog:: ~Dog(void)
{
	std::cout << "[Dog] Desctructor called.";
	std::cout << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Ouffff Oufff" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->_brain);
}

std::ostream	&operator<<( std::ostream & o, Dog const & i )
{
	o << "Type = " << i.getType();
	return o;
}
