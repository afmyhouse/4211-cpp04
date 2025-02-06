/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:08:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:08:36 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

/// @brief 	Cat class definition to create many, many, many Cats
class Cat : public Animal
{
	private:

	public:
		Cat(void);
		Cat(const Cat& sourceObj);
		virtual ~Cat(void);

		Cat& operator=(const Cat& sourceObj);

		void makeSound(void) const;

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif
