/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:18:59 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 14:32:06 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

/// @brief 	ScavTrap class definition to create many, many, many scavtrap objects
class ScavTrap : public ClapTrap
{
	private:
		bool _gateKeeper;
	public:
		// Default constructor
		ScavTrap(void);
		//! Parameter Constructor
		ScavTrap(const std::string name);
		//! Copy constructor
		ScavTrap(const ScavTrap& sourceTrap);
		//! Operator '=' overload (copy assignament)
		ScavTrap &operator=(const ScavTrap& sourceTrap);
		//! Default Destructor
		virtual ~ScavTrap(void);

		//! Getters
		void getGate(void);

		//! Members
		void attack(const std::string& target);
		void guardGate(void);
};

/// @brief 	stream insertion overload by '<<', for std::cout operation
/// @param out	the stream to print
/// @param clapTrapObj the object to be printed
/// @return the output stream
std::ostream& operator<<(std::ostream& out, const ScavTrap& toPrint);

#endif
