/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:08:46 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:08:47 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

/// @brief 	WrongCat class definition to create many, many, many WrongCats
class WrongCat : public WrongAnimal
{

	public:
		WrongCat(void);
		WrongCat(const std::string type);
		WrongCat(const WrongCat& sourceObj);
		~WrongCat(void);

		WrongCat& operator=(const WrongCat& sourceObj);

		void makeSound(void) const;
};

std::ostream&	operator<<( std::ostream& o, WrongCat const & i );

#endif
