/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:30:12 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:13 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		//! Constructors and destructors
		Cure(void);
		Cure(const Cure& cure);
		~Cure(void);

		//! Operator overloading
		Cure& operator=(const Cure& cure);

		//! Others
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif