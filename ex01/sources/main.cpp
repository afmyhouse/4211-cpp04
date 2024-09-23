/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:34:48 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 14:44:54 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {
	ClapTrap tCA("Brachios");
	std::cout << "tCA : " << tCA << std::endl;
	ClapTrap tCB("Argos");
	std::cout << "tCB : " << tCB << std::endl;
	ScavTrap tSA("Iortus");
	std::cout << "tSA : " << tSA << std::endl;
	ScavTrap tSB(tSA);
	std::cout << "tSB : " << tSB << std::endl;
	ScavTrap tSC("Jargus");
	std::cout << "tSC : " << tSC << std::endl;
	tSA = tSC;
	std::cout << "tSA : " << tSA << std::endl;

	std::cout << "\nFight!!" << std::endl;
	tSA.attack(tSB.getName());
	tSB.takeDamage(tSA.getAttack());
	tSB.attack(tSA.getName());
	tSA.takeDamage(tSB.getAttack());

	std::cout << "\nBe Repaired!!" << std::endl;
	tSA.beRepaired(2);
	tSB.beRepaired(2);

	//trooperC Guard Mode
	std::cout << "\nBe Repaired!!" << std::endl;
	tSC.getGate();
	tSC.guardGate();

	return 0;
}