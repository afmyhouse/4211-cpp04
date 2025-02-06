/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:51 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:29:52 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

# define DEBUG

# ifdef DEBUG
# 	define LOG(str) std::cout << str << std::endl;
# else
#	define LOG(str)
# endif

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		//! Constructors and destructors
		AMateria();
		AMateria(const std::string& type);
		virtual ~AMateria();

		//! Getter
		const std::string& getType() const;

		//! Others
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
