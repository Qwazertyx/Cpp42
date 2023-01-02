/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:20:00 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/31 10:44:07 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Brain.hpp"
#include "../incl/Dog.hpp"
#include "../incl/Cat.hpp"


int main(void)
{
	const Animal* dDog = new Dog();
	const Animal* cCat = new Cat();
	//const Animal* testA = new Animal();
	delete dDog;
	delete cCat;
	//delete testA;
	std::cout << "\n\n\n" << std::endl;
	
	Dog dog;
	Cat cat;
	Cat catCopy(cat);
	Dog dogCopy(dog);
	cat.getIdea(5);
	catCopy.getIdea(5);
	dog.getIdea(5);
	dogCopy.getIdea(5);
	std::cout << "\n\n\n" << std::endl;
	
	Animal *animals[4];
	animals[0] = new Cat;
	animals[1] = new Dog;
	animals[2] = new Cat;
	animals[3] = new Dog;	
	for(int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		animals[i]->getIdea();
		delete animals[i];
	}
	std::cout << "\n\n\n" << std::endl;
	
	return (0);
}
