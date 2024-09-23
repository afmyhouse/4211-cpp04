/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:48:42 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 12:27:18 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/// @brief DiamondTrap Default constructor
DiamondTrap :: DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called.";
	std::cout << std::endl;
	this->_Name = "NoName";
	this->_Health = 100;
	this->_Energy = 50;
	this->_Attack = 30;
	this->ClapTrap::_Name = _Name + "_clap_name";
}
/// @brief DiamondTrap Parameter constructor
/// @param name
DiamondTrap :: DiamondTrap(const std::string name) :
	ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap Parameter constructor called." << std::endl;
	this->_Name = name;
	this->_Health = 100;
	this->_Energy = 50;
	this->_Attack = 300;
	this->ClapTrap::_Name = _Name + "_clap_name";
}
/// @brief DiamondTrap Copy constructor
/// @param sourceObj
DiamondTrap :: DiamondTrap(const DiamondTrap& sourceTrap) :
	ClapTrap(sourceTrap), ScavTrap(sourceTrap), FragTrap(sourceTrap)
{
	std::cout << "DiamondTrap Copy constructor called.";
	std::cout << std::endl;
	this->_Name = sourceTrap.getName();
}
/// @brief DiamondTrap Copy assignment constructor
/// @param sourceTrap
/// @return pointer to copy of ClapTrap source obj
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& sourceTrap)
{
	std::cout << "DiamondTrap operator'=' overload (copy assignament called)";
	std::cout << std::endl;
	if (this == &sourceTrap)
		return (*this);
	this->_Name = sourceTrap._Name;
	this->_Health = sourceTrap._Health;
	this->_Energy = sourceTrap._Energy;
	this->_Attack = sourceTrap._Attack;
	this->ClapTrap::_Name = sourceTrap._Name + "_clap_name";
	return (*this);
}
/// @brief DiamondTrap Destructor
DiamondTrap :: ~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
}
/// @brief Identifies the DiamondTrap Name and its ClapTrap Alias
/// @param
void DiamondTrap :: whoAmI(void)
{
	std::cout << "\nDiamondTrap " << this->_Name;
	std::cout << ", alias ClapTrap " << ClapTrap::_Name;
	std::cout << std::endl << std::endl;
}
