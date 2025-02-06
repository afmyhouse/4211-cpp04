/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:08:38 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:08:39 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

/// @brief 	Dog class definition to create many, many, many Dogs
class Dog : public Animal
{
	private:

	public:
		Dog(void);
		Dog(const std::string type);
		Dog(const Dog& sourceObj);
		virtual ~Dog(void);

		Dog& operator=(const Dog& sourceObj);

		void makeSound(void) const;
};

std::ostream&	operator<<( std::ostream& o, Dog const & i );

#endif
