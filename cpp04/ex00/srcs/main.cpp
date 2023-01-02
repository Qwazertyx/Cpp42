/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:20:00 by vsedat            #+#    #+#             */
/*   Updated: 2022/10/27 16:39:53 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"
#include "../incl/Cat.hpp"
#include "../incl/WrongCat.hpp"


int main(void)
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongcat = new WrongCat();
	
	dog->makeSound();
	delete dog;

	cat->makeSound();
	delete cat;
	
	animal->makeSound();
	delete animal;

	wrongcat->makeSound();
	delete wrongcat;
}
