/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:51:56 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 14:28:27 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

/// @brief 	FragTrap class definition to create many, many, many fragttrap objects
class FragTrap : public ClapTrap
{
	public:
		//! Default constructor
		FragTrap(void);
		//! Copy constructor
		FragTrap(const FragTrap& sourceTrap);
		//! Parameter Constructor
		FragTrap(const std::string name);
		//! Operator '=' overload (copy assignament)
		FragTrap& operator=(const FragTrap& sourceTrap);
		//! Default Destructor
		virtual ~FragTrap(void);

		//! Members
		void attack(const std::string &target);
		void highFiveGuys(void);
};

/// @brief 	stream insertion overload by '<<', for STD::cout operation
/// @param out	the stream to print
/// @param clapTrapObj the object to be printed
/// @return the output stream
std::ostream& operator<<(std::ostream& out, const FragTrap& toPrint);

#endif
