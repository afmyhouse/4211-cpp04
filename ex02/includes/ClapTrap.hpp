/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:18:59 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 11:54:25 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

/// @brief 	ClapTrap class definition to create many, many, many claptrap objects
class ClapTrap
{
	protected:
		std::string _Name;
		int _Health;
		int _Energy;
		int _Attack;

	public:
		// Default constructor
		ClapTrap(void);
		//! Parameter Constructor
		ClapTrap(const std::string name);
		//! Copy constructor
		ClapTrap(const ClapTrap& sourceObj);
		//! Operator '=' overload (copy assignament)
		ClapTrap& operator=(const ClapTrap& sourceObj);
		//! Default Destructor
		virtual ~ClapTrap(void);


		//! Getters
		std::string getName(void) const;
		int getHealth(void) const;
		int getEnergy(void) const;
		int getAttack(void) const;

		//! Setters
		void setName(std::string name);
		void setHealth(int health);
		void setEnergy(int energy);
		void setAttack(int damage);

		//! Members
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		bool isActive() const;
};

/// @brief 	stream insertion overload by '<<', for STD::cout operation
std::ostream& operator<<(std::ostream& out, const ClapTrap& toPrint);

#endif
