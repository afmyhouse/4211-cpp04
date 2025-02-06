/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:30:33 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:34 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void	test_copy_constructors(void)
{
	std::cout << "\n\t01 ======= Testing Copy constructors =======\n" << std::endl;
	MateriaSource *source = new MateriaSource();

	std::cout << "\n\t02 ======= Testing Copy constructors =======\n" << std::endl;
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	std::cout << "\n\t03 ======= Testing Copy constructors =======\n" << std::endl;
	Ice *ice = new Ice();
	Ice *iceCopy = new Ice(*ice);

	std::cout << "\n\t04 ======= Testing Copy constructors =======\n" << std::endl;
	Cure *cure = new Cure();
	Cure *cureCopy = new Cure(*cure);

	std::cout << "\n\t05 ======= Testing Copy constructors =======\n" << std::endl;
	delete source;
	delete ice;
	delete iceCopy;
	delete cure;
	delete cureCopy;
}

void	test_all_together(void)
{
	std::cout << "\n\t01 ======= Testing all together =======\n" << std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n\t02 ======= Testing all together =======\n" << std::endl;
	ICharacter *me = new Character("me");
	AMateria *tmp;

	std::cout << "\n\t03 ======= Testing all together =======\n" << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n\t04 ======= Testing all together =======\n" << std::endl;
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n\t05 ======= Testing all together =======\n" << std::endl;
	me->unequip(0);

	std::cout << "\n\t06 delete bob : Testing all together =======\n" << std::endl;
	delete bob;
	std::cout << "\n\t07 delete me  : Testing all together =======\n" << std::endl;
	delete src;
	std::cout << "\n\t09 delete me  : Testing all together =======\n" << std::endl;
	delete me;
	}

int main()
{
	test_copy_constructors();
	test_all_together();

	return 0;
}