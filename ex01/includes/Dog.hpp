/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:13:07 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:15:51 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

/// @brief 	Dog class definition to create many, many, many Dogs
class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog(void);
		Dog(const Dog& sourceObj);
		virtual ~Dog(void);

		Dog& operator=(const Dog& sourceObj);

		void makeSound(void) const;
		Brain *getBrain(void) const;
};

std::ostream&	operator<<( std::ostream& o, Dog const & i );

#endif
