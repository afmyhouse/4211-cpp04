/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:34:48 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/10 10:29:03 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
	ClapTrap tCA("Brachius");
	std::cout << "tCA : " << tCA << std::endl;
	ClapTrap tCB("Argos");
	std::cout << "tCB : " << tCB << std::endl;
	ClapTrap tCC("Echos");
	std::cout << "tCC : " << tCC << std::endl;
	ClapTrap tCD(tCC);
	std::cout << "tCD : " << tCD << std::endl;
	tCA = tCC;
	std::cout << "tCA : " << tCA << std::endl;

	std::cout << "\nFight!!" << std::endl;
	tCA.attack(tCB.getName());
	tCB.takeDamage(2);
	tCB.attack(tCA.getName());
	tCA.takeDamage(2);

	std::cout << "\nBe Repaired!!" << std::endl;
	tCA.beRepaired(2);
	tCB.beRepaired(2);
	return 0;
}
