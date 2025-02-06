/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:59 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:00 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "[Character] Default constructor called." << std::endl;
	this->name = "";
	this->inventorySize = 0;
	for (int i = 0; i < SLOTS; i++)
	{
		this->inventory[i] = NULL;
		this->unequiped[i] = NULL;
	}
}

Character::Character(const std::string& name)
{
	std::cout << "[Character] Parameter constructor called." << std::endl;
	this->name = name;
	this->inventorySize = 0;
	for (int i = 0; i < SLOTS; i++)
	{
		this->inventory[i] = NULL;
		this->unequiped[i] = NULL;
	}
}

Character::Character(const Character& character)
{
	std::cout << "[Character] Copy constructor called." << std::endl;
	*this = character;
}

Character::~Character(void)
{
	std::cout << "[Character] Destructor called." << std::endl;
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (this->unequiped[i])
			delete this->unequiped[i];
	}
}

Character& Character::operator=(const Character& src)
{
	if (this == &src)
		return (*this);
	this->name = src.name;
	this->inventorySize = src.inventorySize;
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (this->unequiped[i])
			delete this->unequiped[i];
		this->inventory[i] = src.inventory[i];
		this->unequiped[i] = src.unequiped[i];
	}
	return (*this);
}

void Character::equip(AMateria* m)
{
	// All inventory slots are taken
	if (inventorySize > 3)
		return ;
	// Add Materia to inventory
	std::cout << this->name + " equiped " + m->getType() << std::endl;
	this->inventory[this->inventorySize++] = m;
}

void Character::unequip(int idx)
{
	// Capacity exceeded
	if (idx < 0 || idx > 3)
		return ;

	// Unlisted Materia
	if (!this->inventory[idx] || this->unequiped[idx] != NULL)
	{
		std::cout << this->name + " dropped NOTHING" << std::endl;
		return ;
	}
	// Uneppu Materia
	std::cout << this->name + " dropped " + this->inventory[idx]->getType() << std::endl;
	this->unequiped[idx] = this->inventory[idx];
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	// idx Materia is non -existent
	if (idx < 0 || idx > 3 || !this->inventory[idx])
	{
		std::cout << this->name << " tried to use UNEXISTING materia..." << std::endl;
		return ;
	}
	// Materia object - > use Materia function
	this->inventory[idx]->use(target);
}

const std::string& Character::getName() const
{
	// Character Name
	return (this->name);
}
