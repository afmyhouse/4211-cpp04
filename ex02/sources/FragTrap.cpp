/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:56:13 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 14:30:03 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap :: FragTrap(void)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->_Health = 100;
	this->_Energy = 100;
	this->_Attack = 30;
}

FragTrap :: FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Parameter Constructor called" << std::endl;
	this->_Name = name;
	this->_Health = 100;
	this->_Energy = 100;
	this->_Attack = 30;
}
FragTrap :: FragTrap(const FragTrap& sourceTrap) : ClapTrap(sourceTrap)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	this->_Name = sourceTrap.getName();
	this->_Health = sourceTrap.getHealth();
	this->_Energy = sourceTrap.getEnergy();
	this->_Attack = sourceTrap.getAttack();
}

FragTrap &FragTrap::operator=(const FragTrap& sourceTrap)
{
	std::cout << "FragTrap operator'=' overload (copy assignament called)";
	std::cout << std::endl;
		if (this == &sourceTrap)
		return (*this);
	this->_Name = sourceTrap.getName();
	this->_Health = sourceTrap.getHealth();
	this->_Energy = sourceTrap.getEnergy();
	this->_Attack = sourceTrap.getAttack();
	return (*this);
}

FragTrap :: ~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

//action members
void FragTrap :: attack(const std::string& target) {
	if (!this->isActive()) {
		std::cout << "FragTrap " << this->getName() << " is out of Energy/Health and can't attack " << target << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_Name << " attacks " << target;
	std::cout << ", causing " << this->_Attack << " points of damage !" << std::endl;
	this->_Energy--;
	return ;
}

void FragTrap :: highFiveGuys(void)
{
	std::cout <<this->_Name << " requests High five from all guys in the room" << std::endl;
}
std::ostream& operator<<(std::ostream& out, const FragTrap& objToPrint)
{
	out << "\nFragTrap (" << objToPrint.getName() << "): " << std::endl;
	out << " - Health: " << objToPrint.getHealth() << std::endl;
	out << " - Energy: " << objToPrint.getEnergy() << std::endl;
	out << " - Damage: " << objToPrint.getAttack() << std::endl;
	return (out);
}
