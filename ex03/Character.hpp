/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:30:03 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:04 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define SLOTS 4

class Character : public ICharacter
{
	private:
		std::string name;
		int	inventorySize;
		AMateria *inventory[SLOTS];
		AMateria *unequiped[SLOTS];

	public:
		//! Copy constructors and destructor
		Character(void);
		Character(const std::string& name);
		Character(const Character& src);
		~Character(void);

		//! Operator overloading
		Character& operator=(const Character& src);

		//! Others
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		//! Getters
		const std::string& getName() const;
};

#endif