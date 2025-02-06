/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:20:42 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:20:43 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void test_instance(void)
{
	std::cout << "\n#################### INSTANCE testing  ####################\n";
	//AAnimal animal;
	AAnimal *anyCat = new Cat();
	AAnimal *anyDog = new Dog();

	std::cout << "\n-- INSTANCE Types --" << std::endl;
	std::cout << anyCat->getType() << std::endl;
	std::cout << anyDog->getType() << std::endl;

	std::cout << "\n-- INSTANCE Sounds --"<< std::endl;
	anyCat->makeSound();
	anyDog->makeSound();
	std::cout << std::endl;
	delete anyCat;
	delete anyDog;
	return ;
}

void test_inheritance(void)
{
	std::cout << "\n#################### INHERITANCE testing ####################\n";
	const Dog* myDog = new Dog();
	const Cat* myCat = new Cat();

	std::cout << "\n-- INHERITANCE Types --\n";
	//std::cout << myAnimal->getType() << std::endl;
	std::cout << myDog->getType() << std::endl;
	std::cout << myCat->getType() << std::endl;

	std::cout << "\n-- INHERITANCE Sounds --\n";
	myDog->makeSound();
	myCat->makeSound();

	std::cout << std::endl;
	delete myDog;
	delete myCat;
	std::cout << std::endl;
	return ;
}

void test_copy(void)
{
	std::cout << "\n##################1# COPY testing ####################\n";
	const AAnimal* myDog = new Dog();
	const AAnimal* copyDog = myDog;

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
	//delete copyDog; <<<< --------- this wasnt alloced but copyed instead
	delete oneCat;
	//delete twoCat; <<<< --------- this wasnt alloced but copyed instead
	std::cout << std::endl;
	return ;
}

void test_copy_assig(void)
{
	std::cout << "\n#################### COPY ASSIGN testing  ####################\n";
	AAnimal *myDogOne = new Dog();
	AAnimal *myDogTwo = new Cat();
	std::cout << "\n-- COPY ASSIGN Types --\n";
	std::cout << myDogOne->getType() << std::endl;
	std::cout << myDogTwo->getType() << std::endl;
	std::cout << "\n-- COPY ASSIGN Sounds --\n";
	myDogOne->makeSound();
	myDogTwo->makeSound();


	*myDogOne = *myDogTwo; // dereferencing to use copy assignment

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

void test_brains(void)
{
	std::cout << "\n#################### TEST BRAINS tetsing ##########C##########\n";
	AAnimal * myAnimals[50];
	for (int i = 0; i < 25; i++)
	{
		std::cout << "Creating cat number " << i + 1 << std::endl;
		myAnimals[i] = new Cat();
	}
	for (int i = 25; i < 50; i++)
	{
		std::cout << "Creating dog number " << i - 24 << std::endl;
		myAnimals[i] = new Dog();
	}
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
	std::cout << "\n#################### TEST EX02 ####################\n";
	test_instance();

	test_inheritance();
	test_copy();
	test_copy_assig();
	test_brains();


	return 0;
}