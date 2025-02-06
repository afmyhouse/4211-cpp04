/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:30:20 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:21 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		//! Constructors and destructors
		Ice(void);
		Ice(const Ice& ice);
		~Ice(void);

		//! Operator overloading
		Ice& operator=(const Ice& ice);

		//! Others
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif