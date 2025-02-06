/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:16:57 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:16:58 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

void test_instance(void)
{
	std::cout << "\n#################### INSTANCE testing  ####################\n";
	Animal myAnimal("Horse");

	std::cout << "\n-- INSTANCE Types --" << std::endl;
	std::cout << myAnimal.getType() << std::endl;

	std::cout << "\n-- INSTANCE Sounds --"<< std::endl;
	myAnimal.makeSound();
	std::cout << std::endl;
	return ;
}

void test_inheritance(void)
{
	std::cout << "\n#################### INHERITANCE testing ####################\n";
	const Animal* myAnimal = new Animal("Horse");
	const Animal* myDog = new Dog();
	const Animal* myCat = new Cat();

	std::cout << "\n-- INHERITANCE Types --\n";
	std::cout << myAnimal->getType() << std::endl;
	std::cout << myDog->getType() << std::endl;
	std::cout << myCat->getType() << std::endl;

	std::cout << "\n-- INHERITANCE Sounds --\n";
	myAnimal->makeSound();
	myDog->makeSound();
	myCat->makeSound();

	std::cout << std::endl;
	delete myAnimal;
	delete myDog;
	delete myCat;
	std::cout << std::endl;
	return ;
}

void test_copy(void)
{
	std::cout << "\n##################1# COPY testing ####################\n";
	const Animal* myDog = new Dog();
	const Animal* copyDog = myDog;

	std::cout << copyDog->getType() << std::endl;
	copyDog->makeSound();

	std::cout << "\n##################2# COPY testing ####################\n";
	Cat* oneCat = new Cat();
	Cat* twoCat = oneCat;

	std::cout << "\n-- COPY Types --\n";
	std::cout << oneCat->getType() << std::endl;
	std::cout << twoCat->getType() << std::endl;
	std::cout << "\n-- COPY Sounds --\n";
	oneCat->makeSound();
	twoCat->makeSound();

	std::cout << "\n#################### COPY cleaning ####################\n";
	std::cout << std::endl;
	delete myDog;
	//delete copyDog; this wasnt alloced but copyed instead
	delete oneCat;
	//delete twoCat;
	std::cout << std::endl;
	return ;
}

void test_copy_assig(void)
{
	std::cout << "\n#################### COPY ASSIGN testing  ####################\n";
	Animal *myDogOne = new Dog();
	Animal *myDogTwo = new Cat();
	std::cout << "\n-- COPY ASSIGN Types --\n";
	std::cout << myDogOne->getType() << std::endl;
	std::cout << myDogTwo->getType() << std::endl;
	std::cout << "\n-- COPY ASSIGN Sounds --\n";
	myDogOne->makeSound();
	myDogTwo->makeSound();


	*myDogOne = *myDogTwo; // derefedrencing to use copy assignment

	std::cout << "\n-- COPY ASSIGN Types --\n";
	std::cout << myDogOne->getType() << std::endl;
	std::cout << myDogTwo->getType() << std::endl;
	std::cout << "\n-- COPY ASSIGN Sounds --\n";
	myDogOne->makeSound();
	myDogTwo->makeSound();

	std::cout << std::endl;
	delete myDogOne;
	delete myDogTwo;
	std::cout << std::endl;
	return ;
}

void test_wrong_inheritance(void)
{
	std::cout << "\n#################### WRONG INHERITANCE tetsing ####################\n";
	const WrongAnimal* myWrongAnimal = new WrongCat();

	std::cout << "\n-- WRONG Types --\n";
	std::cout << myWrongAnimal->getType() << std::endl;
	std::cout << "\n-- WRONG Sounds --\n";
	myWrongAnimal->makeSound();

	std::cout << std::endl;
	delete myWrongAnimal;
	std::cout << std::endl;
	return ;
}

void test_brains(void)
{
	std::cout << "\n#################### TEST BRAINS tetsing ##########C##########\n";
	Animal * myAnimals[50];
	for (int i = 0; i < 25; i++)
		myAnimals[i] = new Cat();
	for (int i = 25; i < 50; i++)
		myAnimals[i] = new Dog();

	for (int i = 0; i < 50; i++)
		myAnimals[i]->makeSound();

	for (int i = 0; i < 50; i++)
	{
		delete myAnimals[i];
		std::cout << std::endl;
	}
	Cat *cat = new Cat();
	Dog *dog = new Dog();
	// cat->getBrain()->getAllIdeas();
	// dog->getBrain()->getAllIdeas();
	for (int i = 0; i < 50; i++)
	{
		std::cout << "cat idea["<<i<<"] "<< cat->getBrain()->getIdea(i)<<std::endl;
		std::cout << "dog idea["<<i<<"] "<< dog->getBrain()->getIdea(i)<<std::endl;
		std::cout<<std::endl;
	}

	delete cat;
	delete dog;

}

int main(void)
{
	test_instance();
	test_inheritance();
	test_copy();
	test_copy_assig();
	test_wrong_inheritance();
	test_brains();

	return 0;
}