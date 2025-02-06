/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:19:23 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:19:24 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

/// @brief 	AAnimal class definition to create many, many, many AAnimals
class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal(void);
		AAnimal(const std::string type);
		AAnimal(const AAnimal& sourceObj);
		virtual ~AAnimal(void) = 0;

		AAnimal& operator=(const AAnimal& sourceObj);

		std::string getType(void) const;
		// this '= 0' condition, makes the class AAnimal an abstract class
		virtual void makeSound(void) const = 0;
};

std::ostream &			operator<<( std::ostream & o, AAnimal const & i );

#endif
