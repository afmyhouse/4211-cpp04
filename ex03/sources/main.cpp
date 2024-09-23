/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:34:48 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/08 23:15:38 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	std::cout <<"Create ClapTraps\n";
	ClapTrap tCA("Crakius");
	ClapTrap tCB("Cargus");
	ClapTrap tCC(tCA);
	
	std::cout <<"\nCreate ScavTrapsTraps\n";
	ScavTrap tSA("Siortas");
	ScavTrap tSB("Suirtas");
	
	std::cout <<"\nCreate FragTraps\n";
	FragTrap tFA("Fargis");
	FragTrap tFB("Ferkis");
	
	std::cout <<"\nCreate DiamondTraps\n";
	DiamondTrap tDA("Dardos");
	DiamondTrap tDB("Cretos");
	DiamondTrap tDC(tDA);
	
	
	//status
	std::cout << "\nFight!!" << std::endl;
	// std::cout << trooperB << std::endl;
	// std::cout << trooperC << std::endl;
	
	//attack
	tCA.attack(tCB.getName());
	tCB.takeDamage(tCA.getAttack());
	//trooperStatus(trooperA);
	//trooperStatus(trooperB);
	tCB.attack(tCA.getName());
	tCA.takeDamage(tCB.getAttack());
	
	tSA.attack(tSB.getName());
	tSB.takeDamage(tSA.getAttack());

	
	tSB.attack(tFA.getName());
	tFA.takeDamage(tSB.getAttack());
	tFA.highFiveGuys();
	tFB.attack(tFA.getName());
	tFA.takeDamage(tFB.getAttack());
	tFB.highFiveGuys();
	//repair
	tCA.beRepaired(4);
	tCB.beRepaired(4);
	tSA.beRepaired(10);
	tSB.beRepaired(10);
	tFA.beRepaired(15);
	tFB.beRepaired(15);
	//trooperC Gaurd Mode
	tSA.getGate();
	tSA.guardGate();

	tDA.whoAmI();
	tDB.whoAmI();
	tDC.whoAmI();
	
	tDA = tDB;
	tDA.whoAmI();
	tDB.whoAmI();
	tDC.whoAmI();
	return 0;
}