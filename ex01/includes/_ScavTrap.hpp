/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:18:59 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/08 21:03:07 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	private:
		bool _gateKeeper;
	public:
		// Default constructor
		ScavTrap(void);
		ScavTrap(const ScavTrap& sourceObj);
		ScavTrap(const std::string name);
		virtual ~ScavTrap(void);
		
		// Operator overload, copy assignment
		ScavTrap &operator=(const ScavTrap& sourceObj);

		//getters and setters
		void getGate(void);

		// action members
		void attack(const std::string& target);
		void guardGate(void);
};

#endif
