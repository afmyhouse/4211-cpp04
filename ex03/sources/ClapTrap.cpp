/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 09:11:38 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 14:18:56 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/// @brief ClapTrap Default constructor
ClapTrap :: ClapTrap()
{
	std::cout << "ClapTrap Default constructor called.";
	std::cout << std::endl;
	this->_Name = "";
	this->_Health = 10;
	this->_Energy = 10;
	this->_Attack = 0;
}
/// @brief ClapTrap Parameter constructor
/// @param name
ClapTrap :: ClapTrap(const std::string name)
{
	std::cout << "ClapTrap Parameter constructor called.";
	std::cout << std::endl;
	this->_Name = name;
	this->_Health = 10;
	this->_Energy = 10;
	this->_Attack = 0;
}
/// @brief ClapTrap Copy constructor
/// @param sourceObj
ClapTrap :: ClapTrap(const ClapTrap &sourceTrap)
{
	std::cout << "ClapTrap Copy constructor called.";
	std::cout << std::endl;
	this->_Name = sourceTrap.getName();
	this->_Health = sourceTrap.getHealth();
	this->_Energy = sourceTrap.getEnergy();
	this->_Attack = sourceTrap.getAttack();
}
/// @brief ClapTrap Copy assignment constructor
/// @param sourceTrap
/// @return pointer to copy of ClapTrap source obj
ClapTrap& ClapTrap :: operator=(const ClapTrap& sourceTrap)
{
	std::cout << "ClapTrap operator'=' overload (copy assignament called)";
	std::cout << std::endl;
	if (this != &sourceTrap)
	{
		this->_Name = sourceTrap.getName();
		this->_Health = sourceTrap.getHealth();
		this->_Energy = sourceTrap.getEnergy();
		this->_Attack = sourceTrap.getAttack();
	}
	return (*this);
}
/// @brief ClapTrap Destructor
ClapTrap :: ~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called\n";
}

//!  Getters and Setters
/// @brief get the protected arg _Name
/// @return _Name
std::string ClapTrap :: getName() const { return (this->_Name);}
/// @brief get the value of Health status arg
/// @return Health
int ClapTrap :: getHealth() const {return (this->_Health);}
/// @brief get the value of Energy status arg
/// @return Energy
int ClapTrap::getEnergy() const { return (this->_Energy); }
/// @brief get the value of Attack power arg
/// @return Attack
int ClapTrap::getAttack() const { return (this->_Attack); }
/// @brief set the 'name' on ClapTrap::_Name
/// @param name
void ClapTrap :: setName(std::string name) { this->_Name = name; }
/// @brief set the 'health' on ClapTrap::_Health
/// @param health
void ClapTrap :: setHealth(int health) { this->_Health = health; }
/// @brief set the 'energy' on ClapTrap::_Energy
/// @param energy
void ClapTrap :: setEnergy(int energy) { this->_Energy = energy; }
/// @brief set the 'attack' on ClapTrap::_Attack
/// @param attack
void ClapTrap :: setAttack(int attack) { this->_Attack = attack; }

//! Members
/// @brief Attack action, inflicts damage to 'target' by the amount defined
///			by ClapTrap::_Attack. The attacker ('this') has its
///			 ClapTrap::_Energy decremented
/// @param target, the one to be hitted ClapTrap::_Attack times
void ClapTrap :: attack(const std::string& target)
{
	if (!this->isActive()) {
		std::cout << "ClapTrap " << this->getName();
		std::cout << " is out of Energy/Health and can't attack ";
		std::cout << target << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " attacks " << target;
	std::cout << ", causing " << this->_Attack << " points of damage !";
	std::cout << std::endl;
	this->_Energy--;
	return ;
}
/// @brief 			When 'this' is hitted by an attacker, its ClapTrap::_Health
///					is decreased the amount indicated by 'amount'
/// @param amount 	quantity to decrease the ClapTrap::_Health of 'this'
void ClapTrap :: takeDamage(unsigned int amount)
{
	this->_Health -= amount;

	std::cout << "ClapTrap " << this->_Name	<< " take damage and lost ";
	std::cout << amount << " Health Points." << std::endl;
	if (this->_Health <= 0) {
		this->_Health = 0;
		std::cout << "ClapTrap " << this->_Name	<< " needs to be repaired.";
		std::cout << std::endl;
	}
	std::cout << *this << std::endl;
}
/// @brief To repair 'this', if ClapTrap::_Energy is available.
///			The amount of healing is increased by the quantity
///			defined by the param 'amount'. ClapTrap::_Energy is decremented
/// @param amount
void ClapTrap :: beRepaired(unsigned int amount)
{
	if (!(this->isActive())) {
		std::cout << "ClapTrap " << this->_Name;
		std::cout << " is out of Energy/Health and can't be repaired !";
		std::cout << std::endl;
		return ;
	}
	this->_Health += amount;
	this->_Energy--;
	std::cout << "ClapTrap " << this->getName() << " has been repaired ";
	std::cout << amount << " Health Points" << std::endl;
	std::cout << *this << std::endl;
}
/// @brief Check if 'this' has enough energy (ClapTrap::_Energy)
///			 and health (ClapTrap::_Health) to proceed active or not
/// @return Activeity status
bool ClapTrap :: isActive() const
{
	return (this->_Energy > 0 && this->_Health > 0);
}
/// @brief string insertion overload to get access to 'this' status
/// @param out 	the string to add information
/// @param toPrint the obje to get information from
/// @return the resulting string
std::ostream& operator<<(std::ostream& out, const ClapTrap& objToPrint)
{
	out << "\nClapTrap (" << objToPrint.getName() << "): " << std::endl;
	out << " - Health: " << objToPrint.getHealth() << std::endl;
	out << " - Energy: " << objToPrint.getEnergy() << std::endl;
	out << " - Attack: " << objToPrint.getAttack() << std::endl;
	return (out);
}