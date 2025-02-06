/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:30:37 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:48 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	LOG("MateriaSource Default constructor called.");
	this->numberLearntMaterias = 0;
	memset(this->learntMaterias, 0, SLOTS * sizeof(AMateria *));
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	LOG("MateriaSource Copy constructor called.");
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	LOG("MateriaSource Destructor called.");
	for (int i = 0; i < this->numberLearntMaterias; i++)
		delete learntMaterias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	LOG("MateriaSource assingment operator called.");
	if (this == &src)
		return (*this);

	for (int i = 0; i < this->numberLearntMaterias; i++)
		delete learntMaterias[i];
	this->numberLearntMaterias = src.numberLearntMaterias;
	memcpy(this->learntMaterias, src.learntMaterias, SLOTS * sizeof(AMateria *));
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	// Cannot learn more materias
	if (numberLearntMaterias >= SLOTS)
		return ;

	LOG("MateriaSource learned " + materia->getType());
	this->learntMaterias[this->numberLearntMaterias++] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0 ; i < this->numberLearntMaterias; i++)
		if (this->learntMaterias[i]->getType() == type)
			return (this->learntMaterias[i]->clone());
	return (NULL);
}