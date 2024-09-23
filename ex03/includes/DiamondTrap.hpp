/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:18:59 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 12:34:31 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _Name;
	public:
		// Default constructor
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap& sourceTrap);
		DiamondTrap(const std::string name);
		virtual ~DiamondTrap(void);

		// Operator overload, copy assignment
		DiamondTrap &operator=(const DiamondTrap& sourceObj);

		//getters and setters
		void whoAmI(void);

		// action members
		using ScavTrap :: attack;
};

#endif
