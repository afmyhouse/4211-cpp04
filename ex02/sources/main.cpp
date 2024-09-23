/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:34:48 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 14:22:07 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


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
	FragTrap tFA("Iarvis");
	std::cout << "tFA : " << tFA << std::endl;
	FragTrap tFB(tFA);
	std::cout << "tFB : " << tFB << std::endl;
	FragTrap tFC("Korkis");
	std::cout << "tFC : " << tFC << std::endl;
	tFA = tFC;
	std::cout << "tFA : " << tFA << std::endl;
	std::cout << "\nFight!!" << std::endl;
	tSA.attack(tSB.getName());
	tSB.takeDamage(tSA.getAttack());
	tSB.attack(tSA.getName());
	tSA.takeDamage(tSB.getAttack());

	tFA.attack(tFB.getName());
	tFA.highFiveGuys();
	tFB.takeDamage(tFA.getAttack());
	tFB.attack(tFA.getName());
	tFB.highFiveGuys();
	tFA.takeDamage(tFB.getAttack());

	std::cout << "\nBe Repaired!!" << std::endl;
	tFA.beRepaired(2);
	tFB.beRepaired(2);

	//trooperC Guard Mode
	std::cout << "\nBe Repaired!!" << std::endl;
	tSC.getGate();
	tSC.guardGate();

	return 0;
}