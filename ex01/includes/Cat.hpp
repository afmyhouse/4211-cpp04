/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:12:54 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:12:55 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

/// @brief 	Cat class definition to create many, many, many Cats
class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat(void);
		Cat(const Cat& sourceObj);
		virtual ~Cat(void);

		Cat& operator=(const Cat& sourceObj);

		void makeSound(void) const;
		Brain *getBrain(void) const;
};

std::ostream& operator<<( std::ostream& o, Cat const & i );

#endif
