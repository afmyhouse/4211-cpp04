#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
{
	std::cout << "ScavTrap Default constructor called." << std::endl;
	this->_Health = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	this->_gateKeeper = 0;
}

ScavTrap::ScavTrap(const ScavTrap& sourceTrap) : ClapTrap(sourceTrap) {
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	//*this = sourceTrap;
	this->_Name = sourceTrap.getName();
	this->_Health = sourceTrap.getHealth();
	this->_Energy = sourceTrap.getEnergy();
	this->_Attack = sourceTrap.getAttack();
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Parameter constructor called." << std::endl;
	this->_Name = name;
	this->_Health = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	this->_gateKeeper = 0;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &sourceTrap) {
	std::cout << "ScavTrap operator'=' overload (copy assignament called)" << std::endl;
	if (this == &sourceTrap)
		return (*this);
	this->_Name = sourceTrap.getName();
	this->_Health = sourceTrap.getHealth();
	this->_Energy = sourceTrap.getEnergy();
	this->_Attack = sourceTrap.getAttack();
	return (*this);
}

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

void ScavTrap :: guardGate(void)
{
	this->_gateKeeper = 1;
	this->getGate();
}
std::ostream& operator<<(std::ostream& out, const ScavTrap& toPrint)
{
	out << "\nScavTrap (" << toPrint.getName() << "): " << std::endl;
	out << " - Health: " << toPrint.getHealth() << std::endl;
	out << " - Energy: " << toPrint.getEnergy() << std::endl;
	out << " - Damage: " << toPrint.getAttack() << std::endl;
	return (out);
}
