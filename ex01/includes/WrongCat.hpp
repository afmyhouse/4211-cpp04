/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:16:23 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:16:24 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

/// @brief 	WrongCat class definition to create many, many, many WrongCats
class WrongCat : public WrongAnimal
{
	protected:
		std::string type;
	public:
		//! Default constructor
		WrongCat(void);
		//! Parameter Constructor
		WrongCat(const std::string type);
		//! Copy constructor
		WrongCat(const WrongCat& sourceObj);
		//! Operator '=' overload (copy assignament)
		WrongCat& operator=(const WrongCat& sourceObj);
		//! Default Destructor
		~WrongCat(void);

		//! Getters
		//std::string getType(void) const;

		//! Setters
		//void setType(std::string name);

		//! Methods
		void makeSound(void);// const;
};

#endif
