/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:22:50 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:22:51 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

/// @brief 	Dog class definition to create many, many, many Dogs
class Dog : public AAnimal
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
