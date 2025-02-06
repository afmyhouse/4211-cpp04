/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:12:45 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:12:46 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

/// @brief 	Animal class definition to create many, many, many Animals
class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(const std::string type);
		Animal(const Animal& sourceObj);
		virtual ~Animal(void);

		Animal& operator=(const Animal& sourceObj);

		std::string getType(void) const;

		virtual void makeSound(void) const;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif
