/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:08:43 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:08:44 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

/// @brief 	WrongAnimal class definition to create many, many, many WrongAnimals
class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal& sourceObj);
		virtual ~WrongAnimal(void);

		WrongAnimal& operator=(const WrongAnimal& sourceObj);

		std::string	getType(void) const;
		void		setType(const std::string& type);

		//! Methods
		void makeSound(void) const;
};

#endif
