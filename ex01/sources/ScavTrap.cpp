#include "ScavTrap.hpp"

/// @brief ClapTrap Default constructor
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called." << std::endl;
	this->_Health = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	this->_gateKeeper = 0;
}

/// @brief ClapTrap Parameter constructor
/// @param name
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Parameter constructor called." << std::endl;
	this->_Name = name;
	this->_Health = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	this->_gateKeeper = 0;
}
/// @brief ClapTrap Copy constructor
/// @param sourceObj
ScavTrap::ScavTrap(const ScavTrap& sourceTrap) : ClapTrap(sourceTrap) {
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	this->_Name = sourceTrap.getName();
	this->_Health = sourceTrap.getHealth();
	this->_Energy = sourceTrap.getEnergy();
	this->_Attack = sourceTrap.getAttack();
}
/// @brief ClapTrap Copy assignment constructor
/// @param sourceTrap
/// @return pointer to copy of ClapTrap source obj
ScavTrap &ScavTrap::operator=(const ScavTrap &sourceTrap) {
	std::cout << "ScavTrap Copy assignment constructor" << std::endl;
	if (this == &sourceTrap)
		return (*this);
	this->_Name = sourceTrap.getName();
	this->_Health = sourceTrap.getHealth();
	this->_Energy = sourceTrap.getEnergy();
	this->_Attack = sourceTrap.getAttack();
	return (*this);
}

/// @brief ClapTrap Destructor
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor called\n";
}

//getters and setters
void ScavTrap :: getGate(void) {
	if (this->_gateKeeper)
		std::cout << "ScavTrap " << this->getName() << " 'Gate Keeper Mode' active.\n" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " 'Gate Keeper Mode' inactive.\n" << std::endl;

}
//action members
void ScavTrap :: attack(const std::string& target) {
	if (!this->isActive()) {
		std::cout << "ScavTrap " << this->getName() << " is out of Energy/Health and can't attack " << target << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_Name << " attacks " << target;
	std::cout << ", causing " << this->_Attack << " points of damage !" << std::endl;
	this->_Energy--;
	return ;
}
/// @brief 	sets the guard status to active
/// @param	none
void ScavTrap :: guardGate(void)
{
	this->_gateKeeper = 1;
	this->getGate();
}
/// @brief string insertion overload to get access to 'this' status
/// @param out 	the string to add information
/// @param toPrint the obje to get information from
/// @return the resulting string
std::ostream& operator<<(std::ostream& out, const ScavTrap& objToPrint)
{
	out << "\nScavTrap (" << objToPrint.getName() << "): " << std::endl;
	out << " - Health: " << objToPrint.getHealth() << std::endl;
	out << " - Energy: " << objToPrint.getEnergy() << std::endl;
	out << " - Damage: " << objToPrint.getAttack() << std::endl;
	return (out);
}
